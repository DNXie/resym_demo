import argparse
import json
from typing import List, Dict, Set, Any, Union
import os
from tqdm import tqdm
import sys
sys.path.append('../process_data')
sys.path.append('../scripts')
from utils import *
from eval_utils import *
from collections import defaultdict 
from vote_offset import guess_offset, early_reject
from collections import defaultdict


def get_fun_clusters(funstackdata:Dict, order:List)-> List[List]:
    last_not_dash = None
    curr_cluster = []
    cluster = []
    for var in order:
        if var not in funstackdata:
            continue
        if funstackdata[var] == ['-', '-']:
            if not curr_cluster and last_not_dash!=None:
                curr_cluster.append(last_not_dash)
            curr_cluster.append(var)
        else:
            last_not_dash = var
            if curr_cluster:
                cluster.append(curr_cluster)
            curr_cluster = []

    if curr_cluster:
        cluster.append(curr_cluster)
    return cluster



def parse_funvar(funvar):
    fun, var = funvar.split('---')
    if var.startswith('&'):
        var = var[1:]
    return fun, var

def if_var_ptr(funvar, funvardata) -> bool:
    if '&' in funvar:
        return False
    if 'cluster' in funvardata:
        return False
    return True

def is_struct(final_offsets:Dict) -> bool:
    if len(list(final_offsets.keys())) == 1 and ("0" in final_offsets or 0 in final_offsets):
        return False
    return True


# def convert_offsets(final_offsets:Dict) -> str:
#     # convert the final offsets (dict) to osprey style
#     curr_offset = 0
#     offsets = []
#     for o in sorted(list(final_offsets.keys())):
#         if o > curr_offset:
#             offset

def get_varname_gt(funvardata):
    try:
        return funvardata['stack_gt'][0]
    except:
        return None

def get_cluster_offset(fundata, cluster:List) -> Dict:
    def _next_offset(offsets:Dict, curr_offset:int) -> int:
        all_offsets = sorted(list(offsets.keys()))
        try:
            return all_offsets[all_offsets.index(curr_offset) + 1]
        except:
            return -1

    curr_size = 0
    offsets = {}
    for var in cluster:
        offsets[curr_size] = fundata['ida_size'][var]
        if fundata['ida_size'][var] < 0:
            print('hh')
        curr_size += fundata['ida_size'][var]

    # guess the size for "-1":
    for curr_offset, size in offsets.items():
        if size == -1:
            next_offset = _next_offset(offsets, curr_offset)
            if next_offset > 0:
                guess_size = min(MAX_GUESS_SIZE, next_offset - curr_offset)
                offsets[curr_offset] = guess_size
    return offsets


def get_heap_offset(fundata) -> Dict[str, Dict]:
    # return {var: {offsets..}, var2: {offsets..}}
    offsets = defaultdict(dict)
    for expr, expr_data in fundata['heap']['parsed'].items():
        offsets[expr_data['varName']][expr_data['calculated_offset']] = expr_data['exprPointeeSize']
    return offsets


def main(prep_dir, equiv_vars_dir, prep_eval_folder, save_fpath):
    csv_file = [['binary_prog', 'funname', 'funaddr', 'var', 'varname', 'result_layout', 'result_ptr', 'iter']]
    for binfile in get_file_list(prep_dir):
        # print(os.path.join(prep_dir, binfile))
        binname = binfile.split('.')[0]# .replace('_ground', '')
        binname_stripped = binname.replace('_ground', '')
        prepdata = read_json(os.path.join(prep_dir, binfile))
        equiv_vars = read_json(os.path.join(equiv_vars_dir, binfile))
        bin_prep_eval_folder = os.path.join(prep_eval_folder, binname)

        # print("prep_eval_folder", bin_prep_eval_folder)
        seen_funvar = set()   # no &, just funname---varname
        # iter1: group variables
        for group_f in get_file_list(bin_prep_eval_folder):
            if group_f == 'rejected_stack_cluster.json':
                continue
            group_data = read_json(os.path.join(bin_prep_eval_folder, group_f))
            
            for funvar, funvardata in group_data['votes'].items():
                fun, var = parse_funvar(funvar)
                seen_funvar.add(f'{fun}---{var}')
            
            final_offsets = group_data['final']['voted_offsets']

            if not is_struct(final_offsets):  # if it is a primitive type
                continue

            # offsets_osprey_style = convert_offsets(final_offsets)
                
            for funvar, funvardata in group_data['votes'].items():
                fun, var = parse_funvar(funvar)
                var_is_ptr = if_var_ptr(funvar, funvardata)
                varname_gt = get_varname_gt(funvardata)
                if varname_gt is None: 
                    # assert False, os.path.join(save_folder, binname)
                    print(f"{os.path.join(bin_prep_eval_folder, group_f)}   {fun}, {var}")
                    continue
                # if var_is_ptr:
                csv_file.append([
                    binname_stripped, funvardata['funname'], fun, var, varname_gt,
                    json.dumps(final_offsets), var_is_ptr, 1
                    ])

        # iter2: iter the rest of unseen variables 
        # 2.1: get rejected cluster first
        rejected_clusters = read_json(os.path.join(bin_prep_eval_folder, 'rejected_stack_cluster.json'))
        rejected_head = defaultdict(list) # funname: [head1, head2...]
        for f, _, cluster  in rejected_clusters:
            rejected_head[f].append(cluster[0])

        for fun, fundata in prepdata.items():
            # funname = fundata['funname']
            # print(fun)

            # process heap first, heap has higher priority and confidence
            if 'heap' in fundata:
                heap_offsets = get_heap_offset(fundata)
                # ------------
                for var in heap_offsets:
                    if f'{fun}---{var}' in seen_funvar:
                        continue

                    if early_reject(heap_offsets[var], False):
                        continue

                    seen_funvar.add(f'{fun}---{var}')
                    if 'stack' in fundata:
                        varname_gt = fundata['stack']['ground_truth'][var][0]
                        csv_file.append([
                            binname_stripped, fundata['funname'], fun, var, varname_gt,
                            json.dumps(guess_offset(heap_offsets[var])), True, 2
                        ])


            if 'stack' in fundata:
                cluster_pred = get_fun_clusters(fundata['stack']['inference'], fundata['stack']['order'])
                # cluster_gt = get_fun_clusters(fundata['stack']['ground_truth'], fundata['stack']['order'])
                for cp in cluster_pred:
                    head = cp[0]
                    if f'{fun}---{head}' in seen_funvar:
                        continue
                    seen_funvar.add(f'{fun}---{head}')

                    if fun in rejected_head and head in rejected_head[fun]:
                        continue
        
                    varname_gt = fundata['stack']['ground_truth'][head][0]
                    offsets = get_cluster_offset(fundata, cp)
                    csv_file.append([
                        binname_stripped, fundata['funname'], fun, head, varname_gt,
                        json.dumps(offsets), False, 3
                    ])

    write_csv(save_fpath, csv_file)


if __name__=='__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('prep_dir')
    parser.add_argument('equiv_vars_dir')
    parser.add_argument('prep_eval_folder')
    parser.add_argument('save_fpath')

    args = parser.parse_args()

    main(args.prep_dir, args.equiv_vars_dir, args.prep_eval_folder, args.save_fpath)