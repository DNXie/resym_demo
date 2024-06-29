# the version with majority vote
# after vote_offset.py, vote type  and field name
# TODO: didn't consider heap pred type size.
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
from vote_utils import *
from collections import defaultdict 
import random
random.seed(0)

class Voter():
    def __init__(self, funvardata, voted_offsets, voted_total_size):
        # self.funvardata = funvardata
        self.pred_ptr = False
        # self.stack_name = None
        # self.stack_type = None
        # self.cluster_offsets = {}
        # self.layout_pred = {}
        self.confidence = 1
        # self.init(funvardata)
        self.set_confidence(funvardata, voted_offsets, voted_total_size)

    # def init(self, funvardata):
    #     self.pred_ptr = 'stack' not in funvardata or is_pred_ptr(funvardata['stack'][1])
    #     if 'stack' in funvardata:
    #         self.stack_name, self.stack_type = funvardata['stack']
        
    #     if 'cluster' in funvardata:
    #         self.cluster_offsets = funvardata['stack_offsets']
            
    #     if 'heap' in funvardata:
    #         self.heap_pred = funvardata['heap']

    def set_confidence(self, funvardata, voted_offsets, voted_total_size):
        self.pred_ptr = 'stack' not in funvardata or is_pred_ptr(funvardata['stack'][1])
        if not self.pred_ptr and 'cluster' not in funvardata:
            # no cluster, stack variable, use total size
            assert len(funvardata['stack_offsets']) == 1
            pred_size = funvardata['stack_offsets'][0][1] 
            if pred_size==-1 or voted_total_size == -1 or pred_size == voted_total_size:
                self.confidence += 1 # TODO: only 1?
        else:
            if self.pred_ptr and 'heap' in funvardata:
                target_offsets = funvardata['heap_offsets']
            elif 'cluster' in funvardata:
                target_offsets = funvardata['stack_offsets']
            else:
                return  # a pointer with no heap access
                # assert False, funvardata

            voted_offsets = {int(k): int(v) for k, v in voted_offsets.items()}
            # target_offsets = {int(k): int(v) for k, v in target_offsets.items()}
            for off, size in target_offsets:
                if off in voted_offsets and voted_offsets[off] == size:
                    self.confidence += 1
                else:
                    self.confidence -= 1


class MajorityVote():
    def __init__(self, ):
        self.candidate_values:Dict[str, List[int]] = defaultdict(list)  # {value: [conf1, conf2, ...]}
        self.voted_value = '<unk>'

    def update_voter(self, value, confidence):
        self.candidate_values[value].append(confidence)

    def vote(self, ) -> str:
        max_conf_sum = -1
        max_conf_value = []
        for v, conf_list in self.candidate_values.items():
            curr_conf = sum(conf_list)
            if curr_conf > max_conf_sum:
                max_conf_sum = curr_conf
                max_conf_value = [v]
            elif curr_conf == max_conf_sum:
                max_conf_value.append(v)
            
        if len(max_conf_value) == 1:
            self.voted_value = max_conf_value[0]

        elif len(max_conf_value) == 0:
            # keep it as `<unk>`
            pass
        
        else:

            # consider voters confidence 
            max_conf = -1
            value_w_max_conf = []
            for v in max_conf_value:
                for conf in self.candidate_values[v]:
                    if conf > max_conf:
                        value_w_max_conf = [v]
                    elif conf == max_conf:
                        value_w_max_conf.append(v)
            if len(value_w_max_conf) == 1:
                self.voted_value = value_w_max_conf[0]
            else:
                # random 
                self.voted_value = random.choice(sorted(value_w_max_conf))

        return self.voted_value

def strip_type(type_str:str) -> str:
    # remove struct and *
    type_str = type_str.strip('*')
    type_str = type_str.replace('struct ', '')
    type_str = type_str.replace('const ', '')
    return type_str.strip()


class NameTypeAggregator():
    def __init__(self, eval_data):
        self.eval_data = eval_data
        self.voters:Dict[str, Voter] = {}
        # self.heap_voters:List[Voter] = []
        self.voted_offsets = {}
        self.voted_total_size = -1
        self.create_voters()


    def create_voters(self):
        self.voted_offsets = self.eval_data['final']['voted_offsets']
        # rejected_cluster_fun = [f[0] for f in self.eval_data['final']['rejected_cluster']]
        # rejected_stack_vars = self.eval_data['final']['rejected_stack_vars']
        self.voted_total_size = self.eval_data['final']['total_size']
        for funvar, funvardata in self.eval_data['votes'].items():
            fun, _  = funvar.split('---')
            # if fun in rejected_cluster_fun:
            #     continue
            # is the prediction a pointer type
            self.voters[funvar] = Voter(funvardata, self.voted_offsets, self.voted_total_size)

        # for funvar, voter in self.voters.items():
        #     print(funvar, voter.__dict__)
    # def check_size_valid(self, pred_type:str, voted_size:int) -> bool:
    #     pred_size = get_pred_size(pred_type)
    #     return pred_size == -1 or pred_size == voted_size

    def vote_stack_type(self) -> str:
        # ------------ init vote ------------
        stack_type_vote = MajorityVote()
        for funvar, funvardata in self.eval_data['votes'].items():
            if funvar not in self.voters:
                continue
            curr_voter = self.voters[funvar]
            pred_ptr = 'stack' not in funvardata or is_pred_ptr(funvardata['stack'][1])

            # -------------- update vote for struct name ----------------
            if 'stack' in funvardata:
                
                if pred_ptr or funvardata['pred_size'] == -1 or funvardata['pred_size'] == self.voted_total_size:
                    stack_type_vote.update_voter(strip_type(funvardata['stack'][1]), curr_voter.confidence)

            if 'heap' in funvardata:
                # vote for struct name for once
                for pred_off in funvardata['heap']:
                    pred_size = get_pred_size(strip_type(funvardata['heap'][pred_off]['pred'][1]))
                    if  pred_size == -1 or pred_size == self.voted_total_size:
                        stack_type_vote.update_voter(strip_type(funvardata['heap'][pred_off]['pred'][1]), curr_voter.confidence)
                        break

        # ---------- vote -------------
        stack_type_vote.vote()
        # print(self.voted_offsets)
        # print(stack_type_vote.candidate_values)
        return stack_type_vote.vote()

    def vote_field_name_type(self) -> Dict[str, str]:
        # ------------ init vote ------------
        field_type_vote: Dict[int, MajorityVote] = {}
        for off in self.voted_offsets:
            field_type_vote[off] = {'name': MajorityVote(), 'type': MajorityVote()}


        for funvar, funvardata in self.eval_data['votes'].items():
            if funvar not in self.voters:
                continue
            curr_voter = self.voters[funvar]

            # -------------- update vote for field name and type ----------------
            for pred_off in funvardata.get('heap', {}):
                if pred_off in field_type_vote:
                    if funvardata['heap'][pred_off]['pred_size'] == -1 or funvardata['heap'][pred_off]['pred_size'] == self.voted_offsets[pred_off]:
                        field_type_vote[pred_off]['name'].update_voter(funvardata['heap'][pred_off]['pred'][2], curr_voter.confidence)
                        field_type_vote[pred_off]['type'].update_voter(funvardata['heap'][pred_off]['pred'][3], curr_voter.confidence)

        # ---------- vote -------------
        voted_layout_type = {}
        for off in field_type_vote:
            # print(off, field_type_vote[off]['type'].candidate_values)
            voted_layout_type[off] = {
                'name': field_type_vote[off]['name'].vote(),
                'type': field_type_vote[off]['type'].vote()}
        return voted_layout_type

    def aggregate(self):
        stack_type = self.vote_stack_type()
        field_name_type = self.vote_field_name_type()
        return {
            'stack_type': stack_type,
            'field': field_name_type
        }

def main(eval_dir, save_dir):
    for binfolder in tqdm(os.listdir(eval_dir)):
        init_folder(os.path.join(save_dir, binfolder))
        for f in tqdm(get_file_list(os.path.join(eval_dir, binfolder))):
            if f == 'rejected_stack_cluster.json':
                continue

            # if f!='sub_408BE7---a1.json':
            #     continue
            eval_fpath = os.path.join(eval_dir, binfolder, f)
            eval_data = read_json(eval_fpath)
            # vote_name_data = vote_name(eval_fpath)
            aggregator = NameTypeAggregator(eval_data)
            eval_data['final']['voted_type'] = aggregator.aggregate()
            # eval_data = aggregator.aggregate()
            dump_json(os.path.join(save_dir, binfolder, f), eval_data)
            # exit()

if __name__=='__main__':
    parser = argparse.ArgumentParser()
    # parser.add_argument('prep_dir')
    parser.add_argument('eval_dir')
    # parser.add_argument('group_folder')
    parser.add_argument('save_dir')
    # parser.add_argument('--normalize_type', action='store_true', default=False, help='normalize type to base types')
    args = parser.parse_args()
    
    main(args.eval_dir, args.save_dir)
