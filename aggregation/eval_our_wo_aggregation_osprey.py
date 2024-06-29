import argparse
from typing import List, Dict, Union, Set
from tqdm import tqdm
import sys
sys.path.append('../process_data')
sys.path.append('../scripts')
from utils import *
from eval_utils import *
import pandas as pd
from eval_osprey import parse_osprey, strip_pointer, VarType
from gen_csv import get_fun_clusters
from collections import defaultdict
from eval_our_osprey import is_ida_struct, find_gt


def parse_heap_pred(fundata) -> Union[None, Dict[str, Dict]]:
    # return {varname_ida: offsets}
    if 'heap' in fundata:
        offsets:Dict[str, int] = {}
        for expr, expr_data  in fundata['heap']['parsed'].items():
            if expr_data['varName'] not in offsets:
                offsets[expr_data['varName']] = {}
            offsets[expr_data['varName']][expr_data['calculated_offset']] = expr_data['exprPointeeSize']
            
        if offsets:
            return offsets
        
    return None


def varname_ida2gt(fundata) -> Dict[str, str]:
    ida2gt = {}
    if 'stack' in fundata:
        for var, gt in fundata['stack']['ground_truth'].items():
            ida2gt[var] = gt[0]
    return ida2gt


def get_stack_offsets(fundata, cluster:List[str]) -> Dict:
    # cluster: list of idanames
    offsets:Dict[str, int] = {}
    curr_offset = 0
    for var in cluster:
        offsets[curr_offset] = fundata['ida_size'][var]
        curr_offset += fundata['ida_size'][var]

    return offsets
            
def find_pred_offsets(prep_folder, binname, funname, varname) -> Union[None, Dict]:
    def _find_fundata()-> Union[None, Dict]:
        prep_data = read_json(prep_fpath)
        for funaddr, fundata in prep_data.items():
            if fundata['funname'] == funname:
                return fundata
        return None
    
    def _find_ida_varname(fundata) -> Union[str, None]:
        if 'stack' in fundata:
            for var, gt in fundata['stack']['ground_truth'].items():
                if gt[0] == varname:
                    return var

        return None
    
    def _parse_heap_pred(fundata, varname_ida)-> Union[None, Dict]:
        offsets = parse_heap_pred(fundata)
        if offsets and varname_ida in offsets:
            return offsets[varname_ida]
        return None

    def _parse_stack_pred(fundata, varname_ida)-> Union[None, Dict]:
        if 'stack' in fundata and varname_ida in fundata['stack']['inference']:
            offsets:Dict[str, int] = {}
            cluster_pred = get_fun_clusters(fundata['stack']['inference'], fundata['stack']['order'])
            for cp in cluster_pred:
                if cp[0] == varname_ida:
                    return get_stack_offsets(fundata, cp)
            
            return{0: fundata['ida_size'][varname_ida]}
            
        return None

    prep_fpath = os.path.join(prep_folder, binname + '_ground.json')
    assert os.path.exists(prep_fpath), prep_fpath
    fundata = _find_fundata()
    if not fundata:
        return None

    varname_ida = _find_ida_varname(fundata)
    if not varname_ida:
        return None

    # check heap first
    heap_offsets = _parse_heap_pred(fundata, varname_ida)
    if heap_offsets:
        return heap_offsets

    # no heap, check stack
    stack_offsets = _parse_stack_pred(fundata, varname_ida)
    if stack_offsets:
        return stack_offsets

    return None

def select_gt_row(skip_indices, candidate_rows) -> int:
    # assert len(gt_row.index) == 1, gt_row.to_string()
    for idx in candidate_rows.index:
        if idx in skip_indices:
            continue
        else:
            return idx
    return -1


def eval(prep_folder, ground_truth_fpath, skip):
    def _eval_helper(gt, pred, visited:bool) -> (float, float):
        tmp_precision, tmp_recall = evaluator.update(gt, pred)
        if visited:
            visited_eval.update(gt, pred)

        if not visited:
            unvisited_eval.update(gt, pred)
        return tmp_precision, tmp_recall

    gt_df = pd.read_csv(ground_truth_fpath)

    evaluator = AggregationEvaluator()
    visited_eval = AggregationEvaluator()
    unvisited_eval = AggregationEvaluator()

    skip_gt_indices = read_json(skip) if skip else []

    seen_pred_binfunvar = set()

    # 1. iter ground truth first
    for index, row in tqdm(gt_df.iterrows()):
        if index in skip_gt_indices:
            continue


        gt_type_str, gt_ptr = strip_pointer(gt_df.at[index, 'groundtruth'])
        gt_offsets, gt_type, gt_size = parse_osprey(gt_type_str)
        
        visited = gt_df.at[index, 'is_deadcode'] == 'used'

        if gt_type == VarType.Struct:
            binname = gt_df.at[index, 'binary_prog']
            funname = gt_df.at[index, 'funname']
            varname = gt_df.at[index, 'varname']


            seen_pred_binfunvar.add(f"{binname}---{funname}---{varname}")
            pred_offsets = find_pred_offsets(prep_folder, binname, funname, varname)

            if not pred_offsets:
                if is_ida_struct(binname, funname, varname):
                    tmp_precision, tmp_recall = _eval_helper(gt_offsets, gt_offsets, visited)
                else:
                    tmp_precision, tmp_recall = _eval_helper(gt_offsets, {}, visited)
            else:
                tmp_precision, tmp_recall = _eval_helper(gt_offsets, pred_offsets, visited)

    # 2. iter the rest of the prediction
    for prepf in get_file_list(prep_folder):
        binname = prepf.replace('_ground.json', "")
        prep_data = read_json(os.path.join(prep_folder, prepf))
        for funaddr, fundata in prep_data.items():
            funname = fundata['funname']
            ida2gt = varname_ida2gt(fundata)
            # heap first
            if 'heap' in fundata:
                heap_offsets = parse_heap_pred(fundata)
                for varida, offsets in heap_offsets.items():
                    if varida in ida2gt:
                        if f"{binname}---{funname}---{ida2gt[varida]}" in seen_pred_binfunvar:
                            continue

                        seen_pred_binfunvar.add(f"{binname}---{funname}---{ida2gt[varida]}")

                        gt_row = find_gt(gt_df, binname, funname, ida2gt[varida])
                        if gt_row is None:
                            continue    
                        selected_gt_row = select_gt_row(skip_gt_indices, gt_row)
                        if selected_gt_row < 0:
                            continue
                        
                        gt_type_str, gt_ptr = strip_pointer(gt_df.at[selected_gt_row, 'groundtruth'])
                        gt_offsets, gt_type, gt_size = parse_osprey(gt_type_str)
                        visited = gt_df.at[selected_gt_row, 'is_deadcode'] == 'used'

                        tmp_precision, tmp_recall = _eval_helper(gt_offsets, offsets, visited)
                    else:
                        print(f"cannot find {varida} in {os.path.join(prep_folder, prepf)}")

            
            # stack
            if 'stack' in fundata:
                cluster_pred = get_fun_clusters(fundata['stack']['inference'], fundata['stack']['order'])
                for cp in cluster_pred:
                    head = cp[0]
                    if head in ida2gt:
                        if f"{binname}---{funname}---{ida2gt[head]}" in seen_pred_binfunvar:
                            continue


                        seen_pred_binfunvar.add(f"{binname}---{funname}---{ida2gt[head]}")


                        gt_row = find_gt(gt_df, binname, funname, ida2gt[head])
                        if gt_row is None:
                            continue    
                        selected_gt_row = select_gt_row(skip_gt_indices, gt_row)
                        if selected_gt_row < 0:
                            continue
                        
                        gt_type_str, gt_ptr = strip_pointer(gt_df.at[selected_gt_row, 'groundtruth'])
                        gt_offsets, gt_type, gt_size = parse_osprey(gt_type_str)
                        visited = gt_df.at[selected_gt_row, 'is_deadcode'] == 'used'

                        stack_offsets = get_stack_offsets(fundata, cp)
                        tmp_precision, tmp_recall = _eval_helper(gt_offsets, stack_offsets, visited)
                    else:
                        print(f"cannot find {head} in {os.path.join(prep_folder, prepf)}")

    print("========= Overall =========")
    evaluator.eval()
    evaluator.print()
    print("========= visited =========")
    visited_eval.eval()
    visited_eval.print()
    print("========= Not visited =========")
    unvisited_eval.eval()
    unvisited_eval.print()


if __name__=='__main__':

    parser = argparse.ArgumentParser()
    parser.add_argument('prep_folder')
    parser.add_argument('ground_truth_fpath')
    # parser.add_argument("--out", help="out put csv file path", default="")
    parser.add_argument("--skip", help="the lines in the ground truth to skip. (.json)", default="")

    args = parser.parse_args()

    eval(args.prep_folder, args.ground_truth_fpath, args.skip)


# python eval_our_wo_aggregation_osprey.py ../../dataset/aggregation/coreutils/prep ./osprey_results/osprey.csv --skip ./osprey_results/skip_gt_indices.json


# 22269it [00:16, 1337.53it/s]
# ========= Overall =========
# precision: 4963/ 6768 = 0.7333
# recall: 4963/ 16655 = 0.298
# F1: 0.4238
# Only size wrong: 1281 / number of wrong pred 1805 = 0.7097
# ========= visited =========
# precision: 4422/ 5542 = 0.7979
# recall: 4422/ 12361 = 0.3577
# F1: 0.494
# Only size wrong: 611 / number of wrong pred 1120 = 0.5455
# ========= Not visited =========
# precision: 541/ 1226 = 0.4413
# recall: 541/ 4294 = 0.126
# F1: 0.196
# Only size wrong: 670 / number of wrong pred 685 = 0.9781