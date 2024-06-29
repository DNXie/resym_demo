# TODO: consider rejected vars
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
import pandas as pd

def strip_type(type_str):
    if type_str is None:
        return ""
    type_str = type_str.replace('const ', '')
    type_str = type_str.replace('struct ', '')
    type_str = type_str.replace('*', '')
    return type_str.strip()


get_fpath_from_train_prefix = '/local2/xie342/shared/dataset'
def eval(prep_folder, eval_folder, align_init_folder, skip_arr=True):

    def _eval_stack(fun, fundata):
        cluster_pred = get_fun_clusters(fundata['stack']['inference'], fundata['stack']['order'])
        cluster_gt = get_fun_clusters(fundata['stack']['ground_truth'], fundata['stack']['order'])

        array_clusters = fundata['stack']['complex_var'].get('array', [])
        arr_heads = [c[0] for c in array_clusters]


        cluster_pred = {c[0]: c for c in cluster_pred}  # {head : cluster (list)}
        cluster_gt = {c[0]: c for c in cluster_gt if c not in arr_heads and skip_arr}
        
        

        for head_pred in cluster_pred:
            key = f'{filename}**{fun}**{head_pred}'
            if key in seen_var:
                # print(f"seen {key}")
                continue
            seen_var.add(key) 

            if skip_arr and head_pred in arr_heads:
                continue

            align_fpath = fundata['stack']['fpath'].replace('/train/', '/align_init/')
            if not os.path.exists(align_fpath):
                assert False, align_fpath
            stack_layout, _, _, is_gt_arr, _ = get_gt_layout(align_fpath, head_pred)
            if skip_arr and is_gt_arr:
                continue

            pred_layout = {}
            curr_offset = 0
            for v in cluster_pred[head_pred]:
                pred_layout[curr_offset] = fundata['ida_size'][v]
                curr_offset += fundata['ida_size'][v]


            offset_evaluator.update({k:v['size'] for k, v in stack_layout.items()}, pred_layout)
        
        for head_gt in cluster_gt:
            if head_gt in cluster_pred:
                continue

            if skip_arr and head_gt in arr_heads:
                continue

            key = f'{filename}**{fun}**{head_gt}'
            if key in seen_var:
                continue
            seen_var.add(key)

            align_fpath = fundata['stack']['fpath'].replace('/train/', '/align_init/')
            if not os.path.exists(align_fpath):
                assert False, align_fpath
            stack_layout, _, _, is_gt_arr, _ = get_gt_layout(align_fpath, head_gt)
            if is_gt_arr:
                continue

            pred_layout = {}

            try:
                pred_size = get_pred_size(fundata['stack']['inference'][head_gt][1])
            except:
                pred_size = fundata['ida_size'][head_gt]

            if pred_size > 0:
                pred_layout[0] = pred_size
            else:
                pred_layout[0] = fundata['ida_size'][head_gt]


            offset_evaluator.update({k:v['size'] for k, v in stack_layout.items()}, pred_layout)
            
        # update name evaluator
        for head_gt in cluster_gt:
            if skip_arr and head_gt in arr_heads:
                continue

            align_fpath = fundata['stack']['fpath'].replace('/train/', '/align_init/')
            if not os.path.exists(align_fpath):
                assert False, align_fpath
            stack_layout, _, _, is_gt_arr, _ = get_gt_layout(align_fpath, head_gt)
            if skip_arr and is_gt_arr:
                continue
            
            struct_type_evaluator.update(fundata['stack']['ground_truth'][head_gt], fundata['stack']['inference'].get(head_gt, '-'))

            for offset in stack_layout:
                field_name_evaluator.update(stack_layout[offset]['name'], '-')
                field_type_evaluator.update(stack_layout[offset]['type'], '-')
             
    def _eval_heap(fun, fundata):
        # ----------- 1. get pred offsets for all vars ------------
        heap_pred_offsets = defaultdict(dict) # {var:{offset:size}}
        var2oneExpr = {}  # {var: one of the expr}
        for expr, expr_data in fundata['heap']['parsed'].items():
            if expr not in fundata['heap']['inference']:
                continue
            var = expr_data['varName']
            offset = expr_data['calculated_offset']
            ida_size = expr_data['exprPointeeSize']
            # print(os.path.join(prep_folder, projfile), fun)
            var2oneExpr[var] = expr

            # print(fundata['heap']['inference'][expr])
            pred_size = get_pred_size(fundata['heap']['inference'][expr][3])
            size = pred_size if pred_size>0 else ida_size

            heap_pred_offsets[var][int(offset)] = {
                'size': int(size), 
                'name': fundata['heap']['inference'][expr][2],
                'type': fundata['heap']['inference'][expr][3],
                }

        # ------- 2. for each var, get gt and compare ---------
        for var in heap_pred_offsets:
            key = f'{filename}**{fun}**{var}'
            if key in seen_var:
                # print(f"seen {key}")
                continue
            seen_var.add(key)

            align_fpath = get_fpath_from_train(fundata['heap']['fpath'], 'align_init', path_prefix=get_fpath_from_train_prefix)
            if not os.path.exists(align_fpath):
                assert False, align_fpath

            _, heap_layout, is_gt_ptr, _, _ = get_gt_layout(align_fpath, var)
            if skip_arr and is_gt_ptr and not heap_layout:
                # array
                continue
            
            offset_evaluator.update(
                {k:v['size'] for k, v in heap_layout.items()}, 
                {k:v['size'] for k, v in heap_pred_offsets[var].items()})
            
            # update name eval
            gt_type_name = fundata['heap']['ground_truth'][var2oneExpr[var]][1]
            pred_type_name = fundata['heap']['inference'][var2oneExpr[var]][1]
            struct_type_evaluator.update(gt_type_name, pred_type_name)
            for offset in heap_layout:
                if offset in heap_pred_offsets[var]:
                    field_name_evaluator.update(
                        heap_layout[offset]['name'], 
                        heap_pred_offsets[var][offset]['name']
                        )
                    field_type_evaluator.update(
                        heap_layout[offset]['type'], 
                        heap_pred_offsets[var][offset]['type']
                        )
                else:
                    field_name_evaluator.update(heap_layout[offset]['name'], '-')
                    field_type_evaluator.update(heap_layout[offset]['name'], '-')

    def _eval_group(group_data):
        final_type = group_data['final']['voted_type']['stack_type']
        final_field = group_data['final']['voted_type']['field']
        final_layout = group_data['final']['voted_offsets']
        for funvar, funvardata in group_data['votes'].items():
            fun, var = parse_funvar(funvar)
            author, proj, binname = binfolder.split('**')

            fun, var = parse_funvar(funvar) 
            key = f'{binfolder}**{fun}**{var}'
            if key in seen_var:
                continue
            seen_var.add(key)


            funaddr = fun.replace('sub_', '')
            align_init_fpath = os.path.join(align_init_folder, author, proj, f"{binname}-{funaddr}.json")
            if not os.path.exists(align_init_fpath):
                # not possible .. 
                print(f"Cannot find the ground truth file: {align_init_fpath}")
                continue

            gt_type = strip_type(get_gt_type(align_init_fpath, var))
            stack_layout, heap_layout, is_gt_ptr, is_gt_arr, _ = get_gt_layout(align_init_fpath, var, consider_arr=False)
            if skip_arr and is_gt_arr:
                continue

            stack_offsets = {k : v['size'] for k, v in stack_layout.items()}
            heap_offsets = {k : v['size'] for k, v in heap_layout.items()}

            if 'stack' in funvardata and not is_pred_ptr(funvardata['stack'][1]):
                
                if skip_arr and is_gt_arr:
                    continue
                if not stack_offsets:
                    continue

                struct_type_evaluator.update(gt_type, strip_type(final_type))

                offset_evaluator.update(stack_offsets, final_layout)
                for offset in stack_layout:
                    if str(offset) in final_field:
                        pred_name = final_field[str(offset)]['name']
                        pred_type = final_field[str(offset)]['type']
                    else:
                        pred_name = '-'
                        pred_type = '-'

                    field_name_evaluator.update(stack_layout[offset]['name'], pred_name)
                    field_type_evaluator.update(stack_layout[offset]['type'], pred_type)

            else:
                
                if skip_arr and is_gt_ptr and not heap_layout:
                    continue
                    # assert False, f"{funvar}, {os.path.join(eval_folder, binfolder, group_f)}"
                
                struct_type_evaluator.update(gt_type, strip_type(final_type))

                offset_evaluator.update(heap_offsets, final_layout)
                for offset in heap_layout:
                    if str(offset) in final_field:
                        # print('in')
                        pred_name = final_field[str(offset)]['name']
                        pred_type = final_field[str(offset)]['type']
                    else:
                        pred_name = '-'
                        pred_type = '-'

                    field_name_evaluator.update(heap_layout[offset]['name'], pred_name)
                    field_type_evaluator.update(heap_layout[offset]['type'], pred_type)


    offset_evaluator = AggregationEvaluator()
    struct_type_evaluator = NameEvaluator()
    field_name_evaluator = NameEvaluator()
    field_type_evaluator = NameEvaluator()

    seen_var = set()
    # 1. iterate groups
    for binfolder in tqdm(os.listdir(eval_folder), desc='Eval group'):
        for group_f in get_file_list(os.path.join(eval_folder, binfolder)):
            group_data = read_json(os.path.join(eval_folder, binfolder, group_f))
            _eval_group(group_data)

    # 2. iterate the rest of the prediction
    for projfile in tqdm(get_file_list(prep_folder), desc='The rest of the prediction'):
        if not projfile.endswith('.json'):
            continue
        proj_data = read_json(os.path.join(prep_folder, projfile))
        filename = projfile.replace('.json', '')
        author, proj, binname = filename.split('**')
        for fun, fundata in proj_data.items():
            if 'stack' in fundata:
                _eval_stack(fun, fundata)
            if 'heap' in fundata:
                _eval_heap(fun, fundata)

    print('=========offset==========')
    offset_evaluator.eval()
    offset_evaluator.print()
    print('=========struct type==========')
    struct_type_evaluator.print()
    print('=========field name==========')
    field_name_evaluator.print()
    print('=========field type==========')
    field_type_evaluator.print()

if __name__=='__main__':

    parser = argparse.ArgumentParser()
    parser.add_argument('prep_folder')
    parser.add_argument('eval_folder')
    parser.add_argument('align_init_folder')

    args = parser.parse_args()

    eval(args.prep_folder, args.eval_folder, args.align_init_folder)


# python eval.py /local2/xie342/shared/dataset/aggregation/gh-dataset/prep /local2/xie342/shared/dataset/aggregation/gh-dataset/final /local2/xie342/shared/dataset/gh-dataset-sampled/align_init   