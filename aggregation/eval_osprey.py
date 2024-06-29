import argparse
from typing import List, Dict, Union, Set
from tqdm import tqdm
import sys
sys.path.append('../process_data')
sys.path.append('../scripts')
from utils import *
from eval_utils import *
import pandas as pd
from enum import Enum
from tqdm import tqdm
from collections import defaultdict

class VarType(Enum):
    Prim = 1
    Arr = 2
    Struct = 3
    Pointer = 4
    Unk = 5


def parse_osprey(val)-> (Dict[int,int], VarType, int):
    # return list of <offset, size> pair, vartype, and  totoal size
    # if it is primitive, return <0, size>

    if val == 'UNK':
        return {}, VarType.Unk, -1 
    if val == 'Struct<>':
        return {}, VarType.Struct, -1 

    # primitive
    prim_match = re.match(r'^Primitive_(\d+)$', val)
    if prim_match:
        return {0: int(prim_match.group(1))}, VarType.Prim, int(prim_match.group(1))

    # pointer
    pointer_match = re.match(r'^Pointer<.*?>$', val)
    if pointer_match:
        return {0: 8}, VarType.Pointer, 8

    # array
    array_match = re.match(r'^Array<(\d+), (.*?)>$', val)
    if array_match:
        _, _, element_size = parse_osprey(array_match.group(2))
        if element_size > 0:
            arr_len = int(array_match.group(1))
            ret_offsets = {}
            for i in range(arr_len):
                ret_offsets[i*element_size] = element_size
            return ret_offsets, VarType.Arr, element_size*arr_len

    # struct
    struct_match = re.match(r'^Struct<([\d,\s]+)>$', val)
    if struct_match:
        filed_sizes = struct_match.group(1).split(', ')
        ret_offsets = {}
        curr_size = 0
        for fs in filed_sizes:
            ret_offsets[curr_size] = int(fs)
            curr_size += int(fs)
        return ret_offsets, VarType.Struct, curr_size
        
    
    print(f"Cannot parse {val}.")
    return {}, VarType.Unk, -1 
    
def strip_pointer(val:str) -> (str, bool):
    pointer_match = re.match(r'^Pointer<(.*?)>$', val)
    if pointer_match:
        return pointer_match.group(1), True
    else:
        return val, False
  
def eval(csv_fpath, skip, out):
    def _eval_helper(gt, pred, visited:bool) -> (float, float):
        tmp_precision, tmp_recall = evaluator.update(gt, pred)
        if visited:
            visited_eval.update(gt, pred)

        if not visited:
            unvisited_eval.update(gt, pred)
        return tmp_precision, tmp_recall
    
    df = pd.read_csv(csv_fpath)
    df['precision'] = '-'  
    df['recall'] = '-'
    df['skipped'] = '-'

    evaluator = AggregationEvaluator()
    visited_eval = AggregationEvaluator()
    unvisited_eval = AggregationEvaluator()

    skip_gt_indices = read_json(skip) if skip else []
    print(f"Skip {len(skip_gt_indices)} files. ")
    for index, row in tqdm(df.iterrows()):
        if index in skip_gt_indices:
            df.at[index, 'skipped'] = 'skipped'
            continue
        
        visited = df.at[index, 'is_deadcode'] == 'used'
        # parse gt
        gt_type_str, gt_ptr = strip_pointer(df.at[index, 'groundtruth'])
        gt_offsets, gt_type, gt_size = parse_osprey(gt_type_str)

        # parse pred
        pred_type_str, pred_ptr = strip_pointer(df.at[index, 'result'])
        pred_offsets, pred_type, pred_size = parse_osprey(pred_type_str)

        # if gt_offsets == {}:
        #     continue
        if gt_type == VarType.Struct or pred_type == VarType.Struct:
            # if pred_offsets == {}:
                
            if gt_type == pred_type:
                tmp_precision, tmp_recall = _eval_helper(gt_offsets, pred_offsets, visited)
            elif gt_type == VarType.Struct:
                # tmp_precision, tmp_recall = _eval_helper(gt_offsets, {}, visited)
                tmp_precision, tmp_recall = _eval_helper(gt_offsets, pred_offsets, visited)
            elif pred_type == VarType.Struct:
                # tmp_precision, tmp_recall = _eval_helper({}, pred_offsets, visited)
                tmp_precision, tmp_recall = _eval_helper(gt_offsets, pred_offsets, visited)

            df.at[index, 'precision'] = tmp_precision
            df.at[index, 'recall'] = tmp_recall

        else:
            df.at[index, 'skipped'] = 'not_struct'


    print("========= Overall =========")
    evaluator.eval()
    evaluator.print()
    print("========= visited =========")
    visited_eval.eval()
    visited_eval.print()
    print("========= Not visited =========")
    unvisited_eval.eval()
    unvisited_eval.print()

    if out:
        df.to_csv(out, index=False)

if __name__=='__main__':

    parser = argparse.ArgumentParser()
    parser.add_argument('csv_fpath')
    parser.add_argument("--out", help="out put csv file path", default="")
    parser.add_argument("--skip", help="the lines in the ground truth to skip. (.json)", default="")
    args = parser.parse_args()

    eval(args.csv_fpath, args.skip, args.out)


# python eval_osprey.py ./osprey.csv --skip ./skip_gt_indices.json
# 22269it [00:01, 11925.66it/s]
# ========= Overall =========
# precision: 9987/ 26183 = 0.3814
# recall: 9987/ 16585 = 0.6022
# F1: 0.467
# ========= visited =========
# precision: 9670/ 14069 = 0.6873
# recall: 9670/ 12268 = 0.7882
# F1: 0.7343
# ========= Not visited =========
# precision: 317/ 12114 = 0.0262
# recall: 317/ 4317 = 0.0734
# F1: 0.0386

# after
# 22269it [00:02, 7777.08it/s]
# ========= Overall =========
# precision: 9600/ 11086 = 0.866
# recall: 9600/ 16182 = 0.5933
# F1: 0.7042
# ========= visited =========
# precision: 9562/ 11048 = 0.8655
# recall: 9562/ 11891 = 0.8041
# F1: 0.8337
# ========= Not visited =========
# precision: 38/ 38 = 1.0
# recall: 38/ 4291 = 0.0089
# F1: 0.0176
