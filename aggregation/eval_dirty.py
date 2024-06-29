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
from eval_osprey import VarType, parse_osprey, strip_pointer

base_type_config = read_json('/local2/xie342/shared/binary_recovery/config/base_types.json')
ida_type_config = read_json('/local2/xie342/shared/binary_recovery/config/ida_types.json')
backup_types = {
    'gid_t': {0:4},
    '__gid_t': {0:4},
    'time_t': {0:8},
    'size_t': {0:8},
    'struct timespec': {0:8, 8:8},
    'struct stat': {
        0: 8,
        8: 8,
        16: 8,
        24: 4,
        28: 4,
        32: 4,
        36: 4,
        40: 8,
        48: 8,
        56: 8,
        64: 8,
        72: 8,
        80: 8,
        88: 8,
        96: 8,
        104: 8,
        112: 8,
        120: 24
    },
    'struct sigset_t': {0:128},
    'struct timezone': {0:4,4:4},


}


def get_bin2name(files_folder) -> (Dict[str,str], Dict[str,str]):
    bin2name = {}
    name2bin = {}
    for f in get_file_list(files_folder):
        binname, name, groundjsonl = f.split('_')
        bin2name[binname] = name
        name2bin[name] = binname
    return bin2name, name2bin


def find_gt(gt_df, binname, funaddr, varname):
    # Apply a function row-wise to check if the condition matches
    def check_row(row, binname, funaddr, varname):
        # Split the 'func_varoffset' field and get the second part
        func_part = 'sub_' + row['func_varoffset'].split('_')[1].upper()
        # Check all conditions
        return (row['binary_prog'] == binname) and \
               (func_part == funaddr) and \
               (row['varname'] == varname)

    # Apply the check_row function to each row in the dataframe
    target_row = gt_df[gt_df.apply(check_row, axis=1, args=(binname, funaddr, varname))]

    if target_row.empty:
        return None
    else:
        return target_row

def eval(csv_fpath, files_folder, pred_fpath, skip):
    def _eval_helper(gt, pred, visited:bool) -> (float, float):
        tmp_precision, tmp_recall = evaluator.update(gt, pred)
        if visited:
            visited_eval.update(gt, pred)

        if not visited:
            unvisited_eval.update(gt, pred)
        return tmp_precision, tmp_recall
    

    def _get_dirty_pred(pred_data, binhash, fun_addr, varname) -> (str,str):
        # return pred_type, gt_type
        pred_type = ''
        gt_type = ''
        if binhash not in pred_data:
            return pred_type, gt_type

        bindata = pred_data[binhash]
        
        if fun_addr not in bindata:
            return pred_type, gt_type
        fundata = bindata[fun_addr]

        for var, vardata in fundata.items():
            if vardata['tgt_var_name'].strip('@') == varname:
                seen_var.add(f"{binhash}**{fun_addr}**{var}")
                return vardata['retype_pred'], vardata['retype_target']
        
        return pred_type, gt_type

    def _get_dirty_offsets(dirty_pred, gt_offsets):
        dirty_pred = dirty_pred.replace('struct struct', 'struct')
        dirty_pred = dirty_pred.replace('const ', '')
        if '*' in dirty_pred:
            return {0: 8}
        if dirty_pred in base_type_config:
            return {0: base_type_config[dirty_pred][2]}
        if dirty_pred in ida_type_config:
            return {0: ida_type_config[dirty_pred]}
        match = re.match(r'^(\w+)\[(\d+)\]$', dirty_pred)
        if match:
            arr_size = int(match.group(2))
            base_type = match.group(1)
            base_size = -1
            if base_type in ida_type_config:
                base_size = ida_type_config[base_type]
            elif base_type in base_type_config:
                base_size = base_type_config[base_type][2]
            if base_size > 0:
            # else:
            #     base_size = 8
            #     print(dirty_pred)
                offsets = {}
                curr_offset = 0
                for i in range(arr_size):
                    offsets[curr_offset] = base_size
                    curr_offset += base_size
                    
                return offsets


        for tt in backup_types:
            if dirty_pred.startswith(tt):
                return  backup_types[tt]


        print(dirty_pred)
        return  {0: gt_offsets[0]}


    pred_data = read_json(pred_fpath)
    df = pd.read_csv(csv_fpath) 
    skip_gt_indices = read_json(skip) if skip else []
    bin2name, name2bin = get_bin2name(files_folder)
    
    evaluator = AggregationEvaluator()
    visited_eval = AggregationEvaluator()
    unvisited_eval = AggregationEvaluator()

    seen_var = set()  # binhash**sub_xxx**idavar
    # iter1: go over gt first
    for index, row in tqdm(df.iterrows()):
        if index in skip_gt_indices:
            df.at[index, 'skipped'] = 'skipped'
            continue
        bin_prog, fun_varoffset, varname, visited, groundtruth = row['binary_prog'], row['func_varoffset'], row['varname'], row['is_deadcode'], row['groundtruth']
        visited = visited == 'used'
        fun_addr = "sub_" + fun_varoffset.split('_')[1].upper()


        gt_type_str, gt_ptr = strip_pointer(groundtruth)
        gt_offsets, gt_type, gt_size = parse_osprey(gt_type_str)

        if not gt_type == VarType.Struct:
            continue

        
        dirty_pred, dirty_gt = _get_dirty_pred(pred_data, name2bin[bin_prog], fun_addr, varname)
        if not dirty_pred or not dirty_gt or dirty_gt=='<unk>' or dirty_gt=='disappear' or dirty_pred=='<unk>' or dirty_pred=='disappear':
            _eval_helper(gt_offsets, {}, visited) 
        elif dirty_pred == dirty_gt:
            # print(dirty_pred)
            _eval_helper(gt_offsets, gt_offsets, visited)
        else:
            # print(dirty_pred)
            # TODO: estimate
            dirty_pred = dirty_pred.replace('const ','')
            dirty_offsets = _get_dirty_offsets(dirty_pred, gt_offsets)
            _eval_helper(gt_offsets, dirty_offsets, visited)  # TODO

    # exit()
    # iter2: go over the rest of the pred
    for binhash, bindata in pred_data.items():
        for funaddr, fundata in bindata.items():
            if not funaddr.startswith('sub_'):
                continue
            for idavar, vardata in fundata.items():
                if f"{binhash}**{funaddr}**{idavar}" in seen_var:
                    continue
                if ' struct ' in vardata['retype_pred'] or vardata['retype_pred'].startswith('struct'):
                    # TODO: here I didn't consider struct pointers

                    gt_row = find_gt(df, bin2name[binhash], funaddr, vardata['tgt_var_name'].strip('@'))
                    if gt_row is None:
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
                        continue
                    
                    gt_type_str, gt_ptr = strip_pointer(df.at[select_gt_idx, 'groundtruth'])
                    gt_offsets, gt_type, gt_size = parse_osprey(gt_type_str)
                    visited = df.at[select_gt_idx, 'is_deadcode'] == 'used'

                    # print(vardata['retype_pred'])

                    # TODO: estimate
                    pred_offsets = {i:1 for i in range(len(vardata['retype_pred'].split(';')))}
                    _eval_helper({0:1}, pred_offsets, visited)



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
    parser.add_argument('csv_fpath')
    parser.add_argument('files_folder')
    parser.add_argument('pred_fpath')
    # parser.add_argument("--out", help="out put csv file path", default="")
    parser.add_argument("--skip", help="the lines in the ground truth to skip. (.json)", default="")
    args = parser.parse_args()

    eval(args.csv_fpath, args.files_folder, args.pred_fpath, args.skip)


# python eval_dirty.py ./osprey_results/osprey.csv /local2/xie342/shared/dataset/dirty/osprey-dirty_processed/files /local2/xie342/shared/dataset/dirty/osprey-dirty_processed/pred.json --skip ./osprey_results/skip_gt_indices.json



# 0it [00:00, ?it/s]/local2/xie342/shared/binary_recovery/aggregation/eval_dirty.py:162: FutureWarning: Setting an item of incompatible dtype is deprecated and will raise in a future error of pandas. Value 'skipped' has dtype incompatible with float64, please explicitly cast to a compatible dtype first.
#   df.at[index, 'skipped'] = 'skipped'
# 1814it [00:00, 5692.23it/s]qboolean
# I
# 4875it [00:00, 7587.41it/s]qboolean
# 6749it [00:00, 8603.66it/s]I
# 9398it [00:01, 8373.97it/s]qboolean
# 10238it [00:01, 8327.20it/s]qboolean
# I
# 13117it [00:01, 9208.96it/s]link
# 14944it [00:01, 8715.64it/s]qboolean
# 22269it [00:02, 8423.35it/s]
# ========= Overall =========
# precision: 534/ 979 = 0.5455
# recall: 534/ 16183 = 0.033
# F1: 0.0622
# Only size wrong: 190 / number of wrong pred 445 = 0.427
# ========= visited =========
# precision: 289/ 601 = 0.4809
# recall: 289/ 11892 = 0.0243
# F1: 0.0463
# Only size wrong: 60 / number of wrong pred 312 = 0.1923
# ========= Not visited =========
# precision: 245/ 378 = 0.6481
# recall: 245/ 4291 = 0.0571
# F1: 0.105
# Only size wrong: 130 / number of wrong pred 133 = 0.9774
