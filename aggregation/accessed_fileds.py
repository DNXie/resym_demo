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


get_fpath_from_train_prefix = '/local2/xie342/shared/dataset'
def all_evaluated_fields(prep_data, prep_fname, eval_folder, align_init_folder, skip_arr=True):
    evaluated_fields:Dict[str, List[int]] = {}   # struct name -> offsets 
    def _iter_stack(fun, fundata):
        cluster_gt = get_fun_clusters(fundata['stack']['ground_truth'], fundata['stack']['order'])
        array_clusters = fundata['stack']['complex_var'].get('array', [])
        arr_heads = [c[0] for c in array_clusters]
        cluster_gt = {c[0]: c for c in cluster_gt if c not in arr_heads and skip_arr}
        for head_gt in cluster_gt:
            align_init_fpath = fundata['stack']['fpath'].replace('/train/', '/align_init/')
            if not os.path.exists(align_init_fpath):
                assert False, align_init_fpath

            gt_type = strip_type(get_gt_type(align_init_fpath, head_gt))
            if gt_type in evaluated_fields:
                continue

            stack_layout, _, _, is_gt_arr, _ = get_gt_layout(align_init_fpath, head_gt)
            if is_gt_arr:
                continue

            evaluated_fields[gt_type] = [int(k) for k in stack_layout]

    def _iter_heap(fun, fundata):
        relevant_vars = set()
        for expr, expr_data in fundata['heap']['parsed'].items():
            if expr not in fundata['heap']['inference']:
                continue

            var = expr_data['varName']
            if var in relevant_vars:
                continue
            relevant_vars.add(var)

            align_init_fpath = get_fpath_from_train(fundata['heap']['fpath'], 'align_init', path_prefix=get_fpath_from_train_prefix)
            if not os.path.exists(align_init_fpath):
                assert False, align_init_fpath

            gt_type = strip_type(get_gt_type(align_init_fpath, var))
            if gt_type in evaluated_fields:
                continue

            _, heap_layout, is_gt_ptr, _, _ = get_gt_layout(align_init_fpath, var)
            if skip_arr and is_gt_ptr and not heap_layout:
                # array
                continue
            evaluated_fields[gt_type] = [int(k) for k in heap_layout]

    def _iter_group(group_data):
        for funvar, funvardata in group_data['votes'].items(): 
            fun, var = parse_funvar(funvar)
            funaddr = fun.replace('sub_', '')
            align_init_fpath = os.path.join(align_init_folder, author, proj, f"{binname}-{funaddr}.json")
            if not os.path.exists(align_init_fpath):
                # not possible .. 
                print(f"Cannot find the ground truth file: {align_init_fpath}")
                continue


            gt_type = strip_type(get_gt_type(align_init_fpath, var))
            if gt_type in evaluated_fields:
                continue
            stack_layout, heap_layout, is_gt_ptr, is_gt_arr, _ = get_gt_layout(align_init_fpath, var, consider_arr=False)
            if is_gt_arr:
                    continue
            if 'stack' in funvardata and not is_pred_ptr(funvardata['stack'][1]):
                if skip_arr and is_gt_arr:
                    continue
                if not stack_layout:
                    continue
                evaluated_fields[gt_type] = [int(k) for k in stack_layout]
            else:
                if skip_arr and is_gt_ptr and not heap_layout:
                    continue
                evaluated_fields[gt_type] = [int(k) for k in heap_layout]

    author, proj, binname = prep_fname.split('**')
    # iterate group first
    for f in get_file_list(os.path.join(eval_folder, prep_fname)):
        group_data = read_json(os.path.join(eval_folder, prep_fname, f))
        _iter_group(group_data)
    

        
    for fun, fundata in prep_data.items():
        if 'stack' in fundata:
            _iter_stack(fun, fundata)
        if 'heap' in fundata:
            _iter_heap(fun, fundata)
    
    return evaluated_fields


def cnt_accessed_field(prep_data, evaluated_fileds):
    accessed_fileds:Dict[str, Set[int]] = defaultdict(set)
    for fun, fundata in prep_data.items():
        # stack
        if 'stack' in fundata:
            if 'compelx_var' in fundata and fundata['compelx_var'].get('struct', []):
                for cluster in fundata['compelx_var']['struct']:
                    head_type_gt = strip_type(fundata['stack']['ground_truth'][cluster[0]][1])
                    if head_type_gt not in evaluated_fileds:
                        assert False
                        continue
                    
                    curr_size = 0
                    for var in cluster:
                        accessed_fileds[head_type_gt].add(curr_size)
                        curr_size += fundata['ida_size'][var]


        # heap
        if 'heap' in fundata:
            for expr, expr_data in fundata['heap']['parsed'].items():
                if expr not in fundata['heap']['ground_truth']:
                    continue
                gt_type = strip_type(fundata['heap']['ground_truth'][expr][1])
                if gt_type not in evaluated_fileds:
                    continue  # may be array

                accessed_fileds[gt_type].add(int(expr_data['calculated_offset']))

    return accessed_fileds

def main(prep_folder, eval_folder, align_init_folder):
    num_evaluated_fields = 0
    num_accessed_fileds = 0
    for projfile in tqdm(get_file_list(prep_folder)):
        if not projfile.endswith('.json'):
            continue
        prep_data = read_json(os.path.join(prep_folder, projfile))
        filename = projfile.replace('.json', '')
        evaluated_fields = all_evaluated_fields(prep_data, filename, eval_folder, align_init_folder)
        accessed_fileds = cnt_accessed_field(prep_data, evaluated_fields)


        num_evaluated_fields += sum([len(v) for k, v in evaluated_fields.items()])
        num_accessed_fileds += sum([len(v) for k, v in accessed_fileds.items()])

    rate = round(safe_division(num_accessed_fileds, num_evaluated_fields), 4)
    print(f"num_accessed_fileds/num_evaluated_fields = {num_accessed_fileds} / {num_evaluated_fields} = {rate}")
    print(f"rate of never accessed fields = {1-rate}")
        

if __name__=='__main__':

    parser = argparse.ArgumentParser()
    parser.add_argument('prep_folder')
    parser.add_argument('eval_folder')
    parser.add_argument('align_init_folder')

    args = parser.parse_args()

    main(args.prep_folder, args.eval_folder, args.align_init_folder)



# python accessed_fileds.py /local2/xie342/shared/dataset/aggregation/gh-dataset/prep /local2/xie342/shared/dataset/aggregation/gh-dataset/final /local2/xie342/shared/dataset/gh-dataset-sampled/align_init
