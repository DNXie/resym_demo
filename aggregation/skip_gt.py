# get a list of vars to skip
# fun not found, var not found, 

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
import re
from tqdm import tqdm
from eval_osprey import parse_osprey, strip_pointer, VarType
from gen_csv import get_fun_clusters
from collections import defaultdict
from typing import Set


aggregation_folder = '/local2/xie342/shared/dataset/aggregation/coreutils'
train_data = '/local2/xie342/shared/dataset/osprey'

def deduplicate(df) -> Set:
    seen_funname = set()
    skip_idx = set()
    for index, row in tqdm(df.iterrows()):
        funname = df.at[index, 'funname']
        if funname not in seen_funname:
            seen_funname.add(funname)
        else:
            skip_idx.add(index)
    return skip_idx

def find_var(binname, funname, varname_gt) -> (bool, str):
    def _find_var_in_align_init(align_init_fpath, varname_gt) -> bool:
        align_data = read_json(align_init_fpath)
        for vardata in align_data['variable']:
            if 'aligned' in vardata and vardata['aligned']['Attr']['DW_AT_name'] == varname_gt:
                return True
        return False

    def _find_fun() -> Union[None, str]:
        align_init_folder = os.path.join(train_data, 'align_init', binname + '_ground')
        for f in get_file_list(align_init_folder):
            align_init_data = read_json(os.path.join(align_init_folder, f))
            if align_init_data['funname'] == funname:
                return os.path.join(align_init_folder, f)
        return None
    

    align_init_fpath = _find_fun()
    if align_init_fpath is None:
        return False, 'fun_not_found'

    if not _find_var_in_align_init(align_init_fpath, varname_gt):
        return False, 'var_not_found'

    return True, ''

def main(ground_truth_fpath, out_fpath):
    skip_cnt = defaultdict(int)
    gt_df = pd.read_csv(ground_truth_fpath)
    skip_row_idx = set()
    skip_row_by_category = defaultdict(list)

    # 1. skip fun/var that are not found
    for index, row in tqdm(gt_df.iterrows()):
        binname, funname, varname = gt_df.at[index, 'binary_prog'], gt_df.at[index, 'funname'], gt_df.at[index, 'varname']

        var_found, msg = find_var(binname, funname, varname)
        if not var_found:
            skip_row_idx.add(index)
            skip_cnt[msg] += 1
            skip_row_by_category[msg].append(index)

        # 2. bin = expr
        if binname == 'expr':
            skip_row_idx.add(index)
            skip_cnt['skip_bin'] += 1
            skip_row_by_category['skip_bin'].append(index)

        # 3. if gt is struct<> (or pointer to)
        gt_type_str, gt_ptr = strip_pointer(gt_df.at[index, 'groundtruth'])
        gt_offsets, gt_type, gt_size = parse_osprey(gt_type_str)
        if gt_type == VarType.Struct and gt_offsets == {}:
            skip_row_idx.add(index)
            skip_cnt['empty_layout'] += 1
            skip_row_by_category['empty_layout'].append(index)
            

    # # 4. deduplicate
    # dup_idx = deduplicate(gt_df)
    # skip_cnt['deduplicate'] += len(dup_idx)
    # skip_row_idx.update(dup_idx)

    dump_json(out_fpath, list(skip_row_idx))
    print(skip_cnt)

    dump_json('./results/skip_details.json', skip_row_by_category)

if __name__=='__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('ground_truth_fpath')
    parser.add_argument('out_fpath')
    args = parser.parse_args()

    main(args.ground_truth_fpath, args.out_fpath)


# defaultdict(<class 'int'>, {'var_not_found': 2863, 'fun_not_found': 3557, 'empty_layout': 39, 'skip_bin': 150}) 