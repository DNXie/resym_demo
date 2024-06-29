import argparse
from typing import List, Dict, Union, Set, Any
from tqdm import tqdm
import sys
sys.path.append('../process_data')
sys.path.append('../scripts')
from utils import *
from eval_utils import *
from vote_utils import *
import re
import os
from gen_csv import get_fun_clusters
from collections import defaultdict
from gen_csv import is_struct, parse_funvar
from eval_our import strip_type
import pandas as pd
from eval_our import strip_type

path_prefix = '/local2/xie342/shared/dataset/osprey/align_init'
VISITED = 'unvisited'
def main(prep_folder, eval_csv_fpath, visited=VISITED):
    # visited can be 'all' 'visited' or 'unvisited'
    eval_df = pd.read_csv(eval_csv_fpath)


    missing_pred_cnt = 0
    # for those missing pred cases:
    no_align_file = 0
    no_train_file = 0
    no_gt_var = 0

    all_evaluated_fields = defaultdict(dict) # {bin: {struct name : {list(offset)}}}
    accessed_fileds = defaultdict(dict) # {bin: {struct name : {set(offset)}}}
    # 1. get all evaluated fileds
    for index, row in tqdm(eval_df.iterrows()):
        if row['gt_layout'] == 'missing':
            continue

        include_this_row = True
        if visited == 'visited' and row['is_deadcode'] != 'used':
            include_this_row = False
        if visited == 'unvisited' and row['is_deadcode'] != 'unused':
            include_this_row = False
        if not include_this_row:
            continue



        binname, funaddr, var = row['binary_prog'], row['funaddr'], row['var']

        if row['result_layout'] != 'missing':
            prep_fpath = os.path.join(prep_folder, binname + '_ground.json')
            
            prep_data = read_json(prep_fpath)
            fundata = prep_data[funaddr]
            gt_type = None
            if 'stack' in fundata and var in fundata['stack']['ground_truth']:
                gt_type = strip_type(fundata['stack']['ground_truth'][var][1])
            else:
                for expr, expr_data in fundata['heap']['parsed'].items():
                    if expr not in fundata['heap']['ground_truth']:
                        continue
                    if expr_data['varName'] == var:
                        gt_type = strip_type(fundata['heap']['ground_truth'][expr][1])
                        break
            assert gt_type is not None

            if binname in all_evaluated_fields and gt_type in all_evaluated_fields[binname]:
                continue
            try:
                all_evaluated_fields[binname][gt_type] = list(json.loads(row['gt_layout']).keys())
            except:
                # primitive
                pass
        else:
            missing_pred_cnt += 1
            align_init_fpath = os.path.join(path_prefix, binname + '_ground', binname + '_ground-' + funaddr.split('_')[1] + '.json') 
            gt_type = None 
            if os.path.exists(align_init_fpath):
                align_init_data = read_json(align_init_fpath)
                for vardata in align_init_data['argument'] + align_init_data['variable']:
                    if 'aligned' in vardata and vardata['aligned']['Attr']['DW_AT_name'] == row['varname']:
                        gt_type = strip_type(vardata['aligned']['Attr']['DW_AT_type'])
                        try:
                            all_evaluated_fields[binname][gt_type] = list(json.loads(row['gt_layout']).keys())
                        except: 
                            pass
            if gt_type is None:
                print(align_init_fpath, var)

            # failure analysis 
            align_fpath = os.path.join(path_prefix.replace('_init', ''), binname + '_ground', binname + '_ground-' + funaddr.split('_')[1] + '.json') 
            if not os.path.exists(align_fpath):
                no_align_file += 1
            # else:
            #     # print(align_fpath, row['varname'])
            #     align_


            train_fpath = os.path.join(path_prefix.replace('align_init', 'train'), binname + '_ground', binname + '_ground-' + funaddr.split('_')[1] + '.json') 
            if not os.path.exists(train_fpath):
                no_train_file += 1
            else:
                # print(train_fpath, row['varname'])
                train_data = read_json(train_fpath)
                stack_gt, _ = parse_stack_ground_truth(train_data['output'])
                all_gt_name = [v[0] for k, v in stack_gt.items()]
                if row['varname'] not in all_gt_name:
                    no_gt_var += 1

    # 2. get all accessed fields
    for b in all_evaluated_fields:
        accessed_fileds[b] = defaultdict(set)

    for binname in tqdm(all_evaluated_fields):
        prep_fpath = os.path.join(prep_folder, binname + '_ground.json')
        prep_data = read_json(prep_fpath)
        for fun, fundata in prep_data.items():
            # stack
            if 'stack' in fundata:
                if 'compelx_var' in fundata and fundata['compelx_var'].get('struct', []):
                    for cluster in fundata['compelx_var']['struct']:
                        head_type_gt = strip_type(fundata['stack']['ground_truth'][cluster[0]][1])
                        if head_type_gt not in evaluated_fileds[binname]:
                            continue
                        
                        curr_size = 0
                        for var in cluster:
                            accessed_fileds[binname][head_type_gt].add(curr_size)
                            curr_size += fundata['ida_size'][var]


            # heap
            if 'heap' in fundata:
                for expr, expr_data in fundata['heap']['parsed'].items():
                    if expr not in fundata['heap']['ground_truth']:
                        continue
                    gt_type = strip_type(fundata['heap']['ground_truth'][expr][1])
                    if gt_type not in all_evaluated_fields[binname]:
                        continue  # may be array

                    accessed_fileds[binname][gt_type].add(int(expr_data['calculated_offset']))


    num_evaluated_fields = 0
    num_accessed_fileds = 0
    for b, f in all_evaluated_fields.items():
        for fun, offsets in f.items():
            num_evaluated_fields += len(offsets)


    for b, f in accessed_fileds.items():
        for fun, offsets in f.items():
            num_accessed_fileds += len(offsets)


    rate = round(safe_division(num_accessed_fileds, num_evaluated_fields), 4)
    print(f"num_accessed_fileds/num_evaluated_fields = {num_accessed_fileds} / {num_evaluated_fields} = {rate}")
    print(f"rate of never accessed fields = {1-rate}")
    print("missing_pred_cnt", missing_pred_cnt)
    print("of the missing pred case, no_align_file", no_align_file)
    print("of the missing pred case, no_train_file", no_train_file)
    print("of the missing pred case, no_gt_var", no_gt_var)



if __name__=='__main__':

    parser = argparse.ArgumentParser()
    parser.add_argument('prep_folder')
    parser.add_argument('eval_csv_fpath')

    args = parser.parse_args()

    main(args.prep_folder, args.eval_csv_fpath)



# python osprey_accessed_fileds.py /local2/xie342/shared/dataset/aggregation/coreutils/prep /local2/xie342/shared/binary_recovery/aggregation/osprey_results/our_result_eval.csv
