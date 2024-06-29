import argparse
from typing import List, Dict, Union, Set
from tqdm import tqdm
import sys
sys.path.append('../process_data')
sys.path.append('../scripts')
sys.path.append('../stack_vote')
from utils import *
from eval_utils import *
from vote_utils import *
from collections import defaultdict 
import shutil


get_fpath_from_train_prefix='/local2/xie342/shared/dataset'



def normalize(type_str:str, base_type_config:Dict, strip_only=False) -> str:
    # type_str: is a type string, no "*" or array size should be involved
    # consider removing signed/unsigned
    if not base_type_config:
        return type_str
    if not type_str:
        return type_str
    stripped_typestr = type_str.replace('const', '').strip()
    if strip_only:
        return stripped_typestr
    # assert re.search(r'[\*\[\]]', stripped_typestr) is None, stripped_typestr
    if stripped_typestr not in base_type_config:
        return stripped_typestr
    else:
        _, _, _, normalized_typestr = base_type_config[stripped_typestr]
        return normalized_typestr



def process_struct_field_type(typename, base_type, point_to_type, base_type_config:Dict):
    if not base_type_config:
        return typename
    if not point_to_type and base_type:
        ret = base_type
    else:
        ret = typename
    return normalize(ret, base_type_config)



def get_ground_truth(fun, var, train_fpath, pred_ptr, base_type_config):

    ground_truth_data = {}
    # if base_type_config:
    #     align_fpath = get_fpath_from_train(train_fpath, 'align_normalized', path_prefix=get_fpath_from_train_prefix)
    # else:
    align_fpath = get_fpath_from_train(train_fpath, 'align_init', path_prefix=get_fpath_from_train_prefix)
    stack_layout, heap_layout, is_gt_ptr, _, gt_type = get_gt_layout(align_fpath, var.strip('&'), consider_arr = True)

    if not pred_ptr:
        return stack_layout, gt_type
    else:
        return heap_layout, gt_type


def get_fun_clusters(funaddr:str, funstackdata:Dict, order:List)-> List[List]:
    last_not_dash = None
    curr_cluster = []
    cluster = []
    for var in order:
        # print(var)
        if var not in funstackdata:
            print(f"No inference of {funaddr}---{var} is found.")
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
    # if funaddr == 'sub_401970':
    #     print(funstackdata)
    #     print('sub_401970', cluster)
    return cluster


def get_vote(fundata, var, funaddr):
    def _relevant_cluster(all_cluster, var):
        for cluster in all_cluster:
            if var == cluster[0]:  # only when var is the head
                return cluster
        return None

    if 'stack' in fundata:
        cluster_pred = get_fun_clusters(funaddr, fundata['stack']['inference'], fundata['stack']['order'])
        cluster_gt = get_fun_clusters(funaddr, fundata['stack']['ground_truth'], fundata['stack']['order'])
    else:
        cluster_pred, cluster_gt = [], []
        

    if var.startswith('&'):
        var = var.strip('&')
    vote_data = {}
    # print(funaddr)
    vote_data['funname'] = fundata['funname']
    
    # stack prediction
    # fundata['stack']['inference'] could be None if mismatch
    if 'stack' in fundata and fundata['stack']['inference'] and var in fundata['stack']['inference']:
        stack_offsets:List[List[int]] = []   # list of <offset, size> pair

        vote_data['ida_type'] = fundata['ida_type'][var]
        vote_data['ida_size'] = fundata['ida_size'][var]

        vote_data['stack'] = fundata['stack']['inference'][var]
        vote_data['stack_gt'] = fundata['stack']['ground_truth'][var]

        pred_size = get_pred_size(fundata['stack']['inference'][var][1])
        vote_data['pred_size'] = pred_size

        vote_data['stack_fpath'] = fundata['stack']['fpath']

        var_cluster_pred = _relevant_cluster(cluster_pred, var)
        var_cluster_gt = _relevant_cluster(cluster_gt, var)
        if var_cluster_pred:
            vote_data['cluster'] = [[v, fundata['ida_type'][v][0], fundata['ida_size'][v]] for v in var_cluster_pred]
            curr_offset = 0
            for c in vote_data['cluster']:
                stack_offsets.append([curr_offset, c[2]])
                curr_offset += c[2]
        else:
            if pred_size > 0:
                stack_offsets.append([0, pred_size])
            else:
                stack_offsets.append([0, vote_data['ida_size']])
        if var_cluster_gt:
            vote_data['cluster_gt'] = [[v, fundata['ida_type'][v][0], fundata['ida_size'][v]] for v in var_cluster_gt]

        vote_data['stack_offsets'] = stack_offsets
    # heap prediction
    heap_data = {}
    # fundata['heap']['inference'] could be None if mismatch
    if 'heap' in fundata and fundata['heap']['inference']:
        heap_offsets:List[List[int]] = []   # list of <offset, size> pair
        for heap_expr in fundata['heap']['parsed']:
            if heap_expr not in fundata['heap']['inference']:
                # some of the expr were removed due to duplicated (var, offset) pairs
                continue
            if var == fundata['heap']['parsed'][heap_expr]['varName']:
                offset = int(fundata['heap']['parsed'][heap_expr]['calculated_offset'])
                # print(fundata['heap'])
                heap_data[offset] = {}
                heap_data[offset]['pred'] = fundata['heap']['inference'][heap_expr]
                heap_data[offset]['ida_size'] = fundata['heap']['parsed'][heap_expr]['exprPointeeSize']
                heap_data[offset]['pred_size'] = get_pred_size(fundata['heap']['inference'][heap_expr][3])
                # heap_data[offset]['pred_size'] = 
                if heap_data[offset]['pred_size'] > 0:
                    heap_offsets.append([offset, heap_data[offset]['pred_size']])
                else:
                    heap_offsets.append([offset, heap_data[offset]['ida_size']])

    if heap_data:
        vote_data['heap'] = heap_data
        vote_data['heap_offsets'] = heap_offsets 

        vote_data['heap_fpath'] = fundata['heap']['fpath']

    # assert vote_data  # not empty
    return vote_data

def process_votes(all_vote_data) -> (Dict, int, int):
    def _inc_cnt(d, key):
        if key not in d:
            d[key] = 0
        d[key] += 1 
        return d
    def _normalize_type(tt):
        return tt.replace('const', '').strip()


    # processed = {'name': {}, 'type': {}, 'layout': {}}
    processed_layout = {}
    # num_layout_vote = 0
    # stack_layout_vote = 0
    for funvar, vote in all_vote_data.items():
        fun, var = funvar.split('---')
        if 'stack' in vote:
            # _inc_cnt(processed['name'], vote['stack'][0])
            # if var.startswith('&'):
            #     _inc_cnt(processed['type'], _normalize_type(vote['stack'][1] + '*'))
            # else:
            #     _inc_cnt(processed['type'], _normalize_type(vote['stack'][1]))
            
            if 'cluster' in vote and var.replace('&', '') == vote['cluster'][0][0] :
                
                # num_layout_vote += 1
                # stack_layout_vote += 1
                curr_offset = 0
                processed_layout[curr_offset] = defaultdict(dict)
                # _inc_cnt(processed_layout[curr_offset]['name'], '-')
                # _inc_cnt(processed_layout[curr_offset]['type'], '-')
                _inc_cnt(processed_layout[curr_offset], vote['ida_size'])

                curr_offset = vote['ida_size']


                for field in vote['cluster']:
                    if curr_offset not in processed_layout:
                        processed_layout[curr_offset] = defaultdict(dict)
                    # _inc_cnt(processed_layout[curr_offset]['name'], '-')
                    # _inc_cnt(processed_layout[curr_offset]['type'], '-')
                    _inc_cnt(processed_layout[curr_offset], field[2])
                    curr_offset += field[2]
        if 'heap' in vote:
            # num_layout_vote += 1
            for offset, heap_pred in vote['heap'].items():
                if offset not in processed_layout:
                    processed_layout[offset] = defaultdict(dict)
                # _inc_cnt(processed['name'], heap_pred['pred'][0])
                # _inc_cnt(processed['type'], _normalize_type(heap_pred['pred'][1]))
                # _inc_cnt(processed_layout[offset]['name'], heap_pred['pred'][2])
                # _inc_cnt(processed_layout[offset]['type'], _normalize_type(heap_pred['pred'][3]))
                _inc_cnt(processed_layout[offset], heap_pred['ida_size'])

    return processed_layout # , num_layout_vote, stack_layout_vote
        
def main(equiv_vars_dir, prep_dir, save_dir, normalize_type=True):
    if os.path.exists(save_dir):
        shutil.rmtree(save_dir)
    init_folder(save_dir)


    base_type_config = read_json('../config/base_types.json')  if normalize_type else None
    # for each project
    for proj_equiv_var_fname in tqdm(get_file_list(equiv_vars_dir)):
        
        projname = proj_equiv_var_fname.replace('.json',  '')
        print(f"---------------------{projname}---------------------")
        
        try:
            proj_prep_data = read_json(os.path.join(prep_dir, proj_equiv_var_fname))
            proj_equiv_vars = read_json(os.path.join(equiv_vars_dir, proj_equiv_var_fname))
        except:
            print(f"Prep and equiv vars file not found, Skip.")
            continue
        if not proj_equiv_vars:  # empty list
            continue 
        print(os.path.join(save_dir, projname))
        init_folder(os.path.join(save_dir, projname))
    
        # for each groups of equivalent variables
        for represent, equiv_var_list in proj_equiv_vars.items():
            # if represent != 'sub_4F7FB8---a1':
            #     continue
            group_data = {}

            # 1. get the ground truth
            use_idx = 0
            while use_idx < len(equiv_var_list):
                if use_idx == len(equiv_var_list):
                    print(f"Fail to get ground truth for cluster {represent}")
                    group_data['ground_truth'] = {}
                    break
                first_funvar = equiv_var_list[use_idx]
                funname, var = first_funvar.split('---')
                if funname not in proj_prep_data:
                    # some functions are only in callgraph (being called) but not in the training/testing set
                    print(f"{funname} not in {os.path.join(prep_dir, proj_equiv_var_fname)}")
                    use_idx += 1
                    continue
                # if var.strip('&') not in proj_prep_data[funname]['stack']['inference']:
                #     use_idx += 1
                #     continue
                train_fpath = proj_prep_data[funname]['stack']['fpath'] if 'stack' in proj_prep_data[funname] else proj_prep_data[funname]['heap']['fpath']
                try:
                    pred_ptr = 'stack' not in proj_prep_data[funname] or is_pred_ptr(proj_prep_data[funname]['stack']['inference'][var.strip('&')][1])
                except:
                    use_idx += 1
                    continue
                # print("!!!!!!!!!!!train_fpath", train_fpath)
                ground_truth, gt_type = get_ground_truth(funname, var, train_fpath, pred_ptr, base_type_config)
                if not ground_truth:
                    # no ground truth. reason: the var has no aligned info
                    use_idx += 1
                    continue
                else:
                    group_data['ground_truth'] = {
                        'layout': ground_truth, 
                        'type': gt_type, 
                        'source': first_funvar,
                    }
                    break


            if use_idx == len(equiv_var_list):
                # none of the var in the list has ground truth
                continue 

            # 2. get info for each vote
            group_data['votes'] = {}
            num_vote = 0 
            for funvar in equiv_var_list:
                # print(funvar)
                funaddr, var = funvar.split('---')
                if funaddr not in proj_prep_data:
                    continue 
                
                # print(funaddr)
                vote_data = get_vote(proj_prep_data[funaddr], var, funaddr)
                if vote_data:  # if not empty
                    group_data['votes'][funvar] = vote_data
                    num_vote += 1

            if num_vote > 1:
                group_data['num_vote'] = num_vote
                group_data['processed_layout'] = process_votes(group_data['votes'])
                # TODO:
                if group_data['processed_layout']:
                    # only save those have layout votes (heap votes)
                    dump_json(os.path.join(save_dir, projname, represent+'.json'), group_data)
                # else:
                #     print(f"no layout: {os.path.join(save_dir, projname, represent+'.json')}")
                #     dump_json(os.path.join(save_dir, projname, represent+'.json'), group_data)
            

if __name__=='__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('equiv_vars_dir')
    parser.add_argument('prep_dir')
    parser.add_argument('save_dir')
    parser.add_argument('--normalize_type', action='store_true', default=False, help='normalize type to base types')
    args = parser.parse_args()
    
    main(args.equiv_vars_dir, args.prep_dir, args.save_dir, args.normalize_type)

# python group_info.py ../../dataset/aggregation/equiv_vars ../../dataset/aggregation/prep ../../dataset/aggregation/group_data --normalize_type
