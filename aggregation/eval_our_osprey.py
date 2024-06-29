# dump some info to csv for analysis
import argparse
from typing import List, Dict, Union, Set
from tqdm import tqdm
import sys
sys.path.append('../process_data')
sys.path.append('../scripts')
from utils import *
from eval_utils import *
import pandas as pd
import re
from eval_osprey import parse_osprey, strip_pointer, VarType
from gen_csv import get_fun_clusters
from collections import defaultdict

aggregation_folder = '/local2/xie342/shared/dataset/aggregation/coreutils'
train_data = '/local2/xie342/shared/dataset/osprey'
base_type_config_fpath = '/local2/xie342/shared/binary_recovery/config/base_types.json'
def missing_pred_analysis(binname, funname, varname_gt) -> (str, str):
    def _find_var_in_align_init(train_fpath, varname_gt) -> (bool, str):
        align_init_fpath = get_fpath_from_train(train_fpath, folder='align_init', verbose=False)
        align_data = read_json(align_init_fpath)
        for vardata in align_data['variable']:
            if 'aligned' in vardata and vardata['aligned']['Attr']['DW_AT_name'] == varname_gt:
                return True, align_init_fpath
        return False, align_init_fpath


    prep_fpath = os.path.join(aggregation_folder, 'prep', binname+'_ground.json')
    if not os.path.exists(prep_fpath):
        return "bin_not_found", ""
    prep_data = read_json(prep_fpath)

    for fun,fundata in prep_data.items():
        if fundata['funname'] == funname:
            if 'stack' in fundata and varname_gt in [v[0] for _, v in fundata['stack']['ground_truth'].items()]:
                # the var is in prediction
                for var, v in fundata['stack']['ground_truth'].items():
                    if v[0] == varname_gt:
                        gt_type = v[1]
                        break

                # whether it is in group
                equiv_var_fpath = os.path.join(aggregation_folder, 'equiv_vars', binname+'_ground.json')
                equiv_var = read_json(equiv_var_fpath)
                it_rep = None
                for rep, group in equiv_var.items():
                    if f"{fun}---{var}" in group or f"{fun}---&{var}" in group:
                        it_rep = rep
                        break


                if it_rep:
                    # print(it_rep)
                    if os.path.exists(os.path.join(aggregation_folder, 'group_data', binname+'_ground', it_rep+'.json')):
                        # not likely
                        return "in_group_vote_fail", f"rep: {it_rep}"
                    else:
                        return "in_group_no_beyond_access", f"rep: {it_rep}"


                # ground truth
                var_is_ptr = False
                if gt_type.endswith('*'):
                    var_is_ptr = True
                    if 'heap' in fundata and var in [exprdata['varName'] for expr, exprdata in fundata['heap']['parsed'].items()]:
                        return "not_in_group_HAS_heap_beyond_access", ""
                    return "not_in_group_NO_heap_beyond_access", ""
                elif gt_type.startswith('struct '):
                    var_is_ptr = False

                    cluster_pred = get_fun_clusters(fundata['stack']['inference'], fundata['stack']['order'])
                    cluster_gt = get_fun_clusters(fundata['stack']['ground_truth'], fundata['stack']['order'])
                    
                    if var in [c[0] for c in cluster_gt]:
                        return f"not_in_group_HAS_cluster", ""
                    
                    ida_size = fundata['ida_size'][var]
                    return f"not_in_group_NO_cluster", f"with ida size {ida_size}"
                else:
                    print(f"!!!!gt_type {gt_type}")
                    return "unknown", ""


                
            else:
                # try find it in align_init
                train_fpath = train_fpath = fundata['stack']['fpath'] if 'stack' in fundata else fundata['heap']['fpath']
                var_aligned, path = _find_var_in_align_init(train_fpath, varname_gt)
                if var_aligned:
                    # var is found in align_init file, but didn't included in the final label
                    return "var_aligned_not_included_in_label", path
                else:
                    # no such variable found
                    return "var_not_found", path

    # fun not found in prediction
    align_init_folder = os.path.join(train_data, 'align_init', binname + '_ground')
    for f in get_file_list(align_init_folder):
        align_init_data = read_json(os.path.join(align_init_folder, f))
        if align_init_data['funname'] == funname:
            return 'fun_not_included', os.path.join(align_init_folder, f)
    return 'fun_not_found', ""

def failure_analysis(binname, funaddr, varname_ida) -> (str, bool, bool, bool, str):
    # in group? has beyond access? has cluster?
    group = '-'
    beyond_access = False
    if_cluster_gt = False
    if_cluster_pred = False

    equiv_var_fpath = os.path.join(aggregation_folder, 'equiv_vars', binname+'_ground.json')
    equiv_var = read_json(equiv_var_fpath)
    for rep, var_group in equiv_var.items():
        if f"{funaddr}---{varname_ida}" in var_group or f"{funaddr}---&{varname_ida}" in var_group:
            group = rep
            break

    prep_fpath = os.path.join(aggregation_folder, 'prep', binname+'_ground.json')
    prep_data = read_json(prep_fpath)
    fundata = prep_data[funaddr]

    if 'heap' in fundata and varname_ida in [exprdata['varName'] for expr, exprdata in fundata['heap']['parsed'].items()]:
        beyond_access = True
    
    
    cluster_pred = get_fun_clusters(fundata['stack']['inference'], fundata['stack']['order'])
    cluster_gt = get_fun_clusters(fundata['stack']['ground_truth'], fundata['stack']['order'])
    
    if_cluster_gt =  varname_ida in [c[0] for c in cluster_gt]
    if_cluster_pred =  varname_ida in [c[0] for c in cluster_pred]


    align_init_fpath = os.path.join(train_data, 'align_init', binname+'_ground', binname+'_ground'+'-'+funaddr.split('_')[1]+'.json')
    return group, beyond_access, if_cluster_gt, if_cluster_pred, align_init_fpath
    
def find_gt(gt_df, binname, funname, varname):
    target_row = gt_df[
        (gt_df['binary_prog'] == binname) & 
        (gt_df['funname'] == funname) & 
        (gt_df['varname'] == varname)]

    if target_row.empty:
        return None
    else:
        return target_row

def find_pred(pred_df, binname, funname, varname):
    # binname += '_ground'
    target_row = pred_df[
        (pred_df['binary_prog'] == binname) & 
        (pred_df['funname'] == funname) & 
        (pred_df['varname'] == varname)]

    if target_row.empty:
        match = re.match(r'^(.*?)_\d$', varname)
        if match:
            target_row = pred_df[
                (pred_df['binary_prog'] == binname) & 
                (pred_df['funname'] == funname) & 
                (pred_df['varname'] == match.group(1))]
            return None if target_row.empty else target_row
    else:
        return target_row

def is_ida_struct(binname, funname, varname_gt):
    
    align_init_folder = os.path.join(train_data, 'align_init', binname + '_ground')
    for f in get_file_list(align_init_folder):
        align_init_data = read_json(os.path.join(align_init_folder, f))
        if align_init_data['funname'] == funname:
            for vardata in align_init_data['variable']:
                if 'aligned' in vardata and vardata['aligned']['Attr']['DW_AT_name'] == varname_gt:
                    return vardata['type'].startswith('struct ')

    return False

def get_stack_pred_type_size(binname, funname, varname_gt) -> List[str]:
    def _type_size(type_str:str) -> int:
        type_str = type_str.replace('const', '').strip()
        if type_str[-1] == '*':
            return 8
        if type_str in base_type_config:
            return int(base_type_config[type_str][2])
        # use ida size 
        return int(fundata['ida_size'][varname_ida])

    base_type_config = read_json(base_type_config_fpath)
    prep_fpath = os.path.join(aggregation_folder, 'prep', binname+'_ground.json')
    prep_data = read_json(prep_fpath)
    for funaddr, fundata in prep_data.items():
        if fundata['funname'] == funname:
            if 'stack' in fundata:
                for var in fundata['stack']['ground_truth']:
                    if fundata['stack']['ground_truth'][var][0] == varname_gt:
                        varname_ida = var
                        if varname_ida in fundata['stack']['inference']:
                            pred_type =  fundata['stack']['inference'][varname_ida][1]
                            return pred_type, _type_size(pred_type)
    
    
    return "", -1


def eval(csv_fpath, ground_truth_fpath, out, skip):
    def _eval_helper(gt, pred, visited:bool) -> (float, float):
        tmp_precision, tmp_recall = evaluator.update(gt, pred)
        if visited:
            visited_eval.update(gt, pred)

        if not visited:
            unvisited_eval.update(gt, pred)
        return tmp_precision, tmp_recall
    
    pred_df = pd.read_csv(csv_fpath)
    gt_df = pd.read_csv(ground_truth_fpath)

    pred_df['gt_layout'] = 'missing'
    pred_df['precision'] = '0'
    pred_df['recall'] = '0'
    pred_df['group'] = '-'
    pred_df['beyond_access'] = '-'
    pred_df['cluster(pred/gt)'] = '-'
    pred_df['align_init_fpath'] = '-'
    pred_df['is_deadcode'] = 'unknown'

    evaluator = AggregationEvaluator()
    visited_eval = AggregationEvaluator()
    unvisited_eval = AggregationEvaluator()

    missing_gt_cnt = 0
    missing_pred_cnt = 0
    missing_pred_reasons = defaultdict(int)

    skip_gt_indices = read_json(skip) if skip else []

    seen_pred_df_idx = set()
    # 1. iter ground truth first
    for index, row in tqdm(gt_df.iterrows()):
        if index in skip_gt_indices:
            continue

        gt_type_str, gt_ptr = strip_pointer(gt_df.at[index, 'groundtruth'])
        gt_offsets, gt_type, gt_size = parse_osprey(gt_type_str)
        
        visited = gt_df.at[index, 'is_deadcode'] == 'used'
        if gt_type == VarType.Struct:#or gt_type == VarType.Arr:
            # invalid ground truth
            # if gt_offsets == {}:
            #     continue 

            pred_row = find_pred(
                pred_df,
                gt_df.at[index, 'binary_prog'],
                gt_df.at[index, 'funname'],
                gt_df.at[index, 'varname'])

            if pred_row is None:
                # continue
                if is_ida_struct(gt_df.at[index, 'binary_prog'], gt_df.at[index, 'funname'], gt_df.at[index, 'varname']):
                    tmp_precision, tmp_recall = _eval_helper(gt_offsets, gt_offsets, visited)
                
                else:
                    missing_pred_cnt += 1
                    
                    stack_pred_type, pred_size = get_stack_pred_type_size(gt_df.at[index, 'binary_prog'], gt_df.at[index, 'funname'], gt_df.at[index, 'varname'])
                    if stack_pred_type:
                        pred_offsets = {0: pred_size}
                        tmp_precision, tmp_recall = _eval_helper(gt_offsets, pred_offsets, visited)
        
                    else:
                        
                        tmp_precision, tmp_recall = _eval_helper(gt_offsets, {}, visited)

                    # failure analysis
                    reason, msg = missing_pred_analysis(gt_df.at[index, 'binary_prog'], gt_df.at[index, 'funname'], gt_df.at[index, 'varname'])
                    print(f"Cannot find prediction for {gt_df.at[index, 'binary_prog']} --- {gt_df.at[index, 'funname']} ---{gt_df.at[index, 'varname']} due to {reason} : {msg}")
                    missing_pred_reasons[reason] += 1
                    pred_df.loc[len(pred_df)] = {
                        'binary_prog': gt_df.at[index, 'binary_prog'],
                        'funname': gt_df.at[index, 'funname'],
                        'funaddr': 'sub_' + gt_df.at[index, 'func_varoffset'].split('_')[1].upper(),
                        'varname': gt_df.at[index, 'varname'],
                        'gt_layout': json.dumps(gt_offsets),
                        'is_deadcode': str(gt_df.at[index, 'is_deadcode']),
                        'result_layout': 'missing'
                    }
                    
            else:
                for idx in pred_row.index:
                    seen_pred_df_idx.add(idx)
                    pred_offsets = json.loads(pred_row.loc[idx, 'result_layout'])

                    tmp_precision, tmp_recall = _eval_helper(gt_offsets, pred_offsets, visited)

                    # fill in info
                    pred_df.at[idx, 'precision'] = tmp_precision
                    pred_df.at[idx, 'recall'] = tmp_recall
                    pred_df.at[idx, 'gt_layout'] = json.dumps(gt_offsets)

                    group, beyond_access, if_cluster_gt, if_cluster_pred, align_init_fpath = failure_analysis(gt_df.at[index, 'binary_prog'], pred_df.at[idx, 'funaddr'], pred_df.at[idx, 'var'])
                    pred_df.at[idx, 'group'] = group
                    pred_df.at[idx, 'beyond_access'] = beyond_access
                    pred_df.at[idx, 'cluster(pred/gt)'] = f"{if_cluster_pred}/{if_cluster_gt}"
                    pred_df.at[pred_row.index[0], 'align_init_fpath'] = align_init_fpath
                    pred_df.at[idx, 'is_deadcode'] = str(gt_df.at[index, 'is_deadcode'])
                    
            
    # 2. iter the rest of the prediction
    for index, row in tqdm(pred_df.iterrows()):
        if index in seen_pred_df_idx:
            continue

        if row['result_layout'] == 'missing':
            continue
        gt_row = find_gt(
            gt_df,
            pred_df.at[index, 'binary_prog'],
            pred_df.at[index, 'funname'],
            pred_df.at[index, 'varname'],
        )

        if gt_row is None:
            # no ground truth found, do not count
            print(f"Cannot find groud truth for {pred_df.at[index, 'binary_prog']} --- {pred_df.at[index, 'funname']}  ---{pred_df.at[index, 'varname']}")
            missing_gt_cnt += 1
            continue
        
        select_gt_idx = -1
        # assert len(gt_row.index) == 1, gt_row.to_string()
        for idx in gt_row.index:
            if idx in skip_gt_indices:
                continue
            else:
                select_gt_idx = idx
                break
        if select_gt_idx < 0:
            pred_df.at[index, 'gt_layout'] = 'skipped'
            continue
        
        gt_type_str, gt_ptr = strip_pointer(gt_df.at[select_gt_idx, 'groundtruth'])
        gt_offsets, gt_type, gt_size = parse_osprey(gt_type_str)

        # invalid gt, consider as gt missing
        # if gt_offsets == {}:
        #     missing_gt_cnt += 1
        #     continue

        visited = gt_df.at[select_gt_idx, 'is_deadcode'] == 'used'
        pred_offsets = json.loads(pred_df.at[index, 'result_layout'])
        
        tmp_precision, tmp_recall = _eval_helper(gt_offsets, pred_offsets, visited)

        # fill in info
        pred_df.at[index, 'precision'] = tmp_precision
        pred_df.at[index, 'recall'] = tmp_recall
        pred_df.at[index, 'gt_layout'] = gt_df.at[select_gt_idx, 'groundtruth']
        group, beyond_access, if_cluster_gt, if_cluster_pred, align_init_fpath = failure_analysis(pred_df.at[index, 'binary_prog'], pred_df.at[index, 'funaddr'], pred_df.at[index, 'var'])
        pred_df.at[index, 'group'] = group
        pred_df.at[index, 'beyond_access'] = beyond_access
        pred_df.at[index, 'cluster(pred/gt)'] = f"{if_cluster_pred}/{if_cluster_gt}"
        pred_df.at[index, 'align_init_fpath'] = align_init_fpath
        pred_df.at[index, 'is_deadcode'] = gt_df.at[select_gt_idx, 'is_deadcode']
            

    print("========= Overall =========")
    evaluator.eval()
    evaluator.print()
    print("========= visited =========")
    visited_eval.eval()
    visited_eval.print()
    print("========= Not visited =========")
    unvisited_eval.eval()
    unvisited_eval.print()

    print(f"missing_gt_cnt: {missing_gt_cnt}")
    print(f"missing_pred_cnt: {missing_pred_cnt}")
    print(f"missing_pred_reasons: {missing_pred_reasons}")

    if out:
        pred_df.to_csv(out, index=False)
if __name__=='__main__':

    parser = argparse.ArgumentParser()
    parser.add_argument('csv_fpath')
    parser.add_argument('ground_truth_fpath')
    parser.add_argument("--out", help="out put csv file path", default="")
    parser.add_argument("--skip", help="the lines in the ground truth to skip. (.json)", default="")

    args = parser.parse_args()

    eval(args.csv_fpath, args.ground_truth_fpath, args.out, args.skip)

# python python eval.py ./our_result.csv ./osprey.csv --out ./out_result_eval.csv > our_eval_log
# python eval.py ./osprey_processed.csv ./osprey.csv
