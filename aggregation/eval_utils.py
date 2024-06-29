import re 
from typing import List, Dict, Union, Set
import json
import os 
from collections import OrderedDict
# from sentence_transformers import SentenceTransformer, util

# model = SentenceTransformer('sentence-transformers/all-roberta-large-v1').cuda() 


def safe_division(m,n):
    if n == 0:
        return 0
    else:
        return round(m/n, 4)
         
def parse_stack_ground_truth(line_ground_truth:str, verbose=True) -> (Dict, List):
    vars_gt = {}
    gt_var_order = []   # variable order
    for var in line_ground_truth.strip().split('\n'):
        varname, labels = var.split(': ')
        vars_gt[varname] = labels.split(', ')
        gt_var_order.append(varname)
        if len(vars_gt[varname]) != 2:
            debug_print(verbose, f"[SKIP] : {ground_truth}")
            return None, []
    return vars_gt, gt_var_order


def parse_stack_pred(line_pred:str, train_fpath:str='', verbose=True) -> Dict:
    vars_pred = {}
    
    try:
        for var in line_pred.strip().split('\n'):
            varname, labels = var.split(': ')
            vars_pred[varname] = labels.split(', ')
            assert len(vars_pred[varname]) == 2

    except Exception as e:
        debug_print(verbose, f"!Cannot parse {train_fpath}: {var}")
        return None

    
    return vars_pred


def parse_stack(line_ground_truth:str, line_pred:str, train_fpath:str='', verbose:bool=True) -> (Dict, Dict, List, bool):
    mismatch = False
    vars_gt, gt_var_order = parse_stack_ground_truth(line_ground_truth, verbose)
    vars_pred = parse_stack_pred(line_pred, train_fpath, verbose)
    if not vars_gt:
        # ground truth ill-formatted, skip
        # this doesn't count as mismatch
        return None, None, [], False
    
    if not vars_pred:
        mismatch = True


    elif len(vars_gt) != len(vars_pred):
        mismatch = True
        extra_var = []
        for var in vars_pred:
            if var not in vars_gt:
                extra_var.append(var)
        if extra_var:
            debug_print(verbose, f"[EXTRA var] Cannot parse {train_fpath}: {extra_var}")
            for var in extra_var:
                vars_pred.pop(var)
        else:
            debug_print(verbose, f"Cannot parse {train_fpath}: {len(vars_gt)}!={len(vars_pred)}")

            
    return vars_gt, vars_pred, gt_var_order, mismatch

def debug_print(verbose, msg):
    if verbose:
        print(msg)

def get_file_list(dir_addr):

    files = []
    for _,_, filenames in os.walk(dir_addr):
        files.extend(filenames)
        break

    if '.DS_Store' in files:
        files.remove('.DS_Store')

    return files

def read_file(path, readlines=True) -> str:
    with open(path, "r") as f:
        if readlines:
            ret = f.readlines()  # -> List[str]
        else:
            ret = f.read()  # -> str
    return ret

def write_file(path, content):
    with open(path, 'w') as f:
        f.write(content)

def read_json(path):
    with open(path, 'r') as f:
        data = json.load(f)
    return data

def dump_json(path, data):
    with open(path, "w") as f:
        json.dump(data, f)

class AggregationEvaluator():
    # eval for perfect match
    def __init__(self, base_type_config=None):
        self.correct = 0
        self.num_label = 0
        self.num_pred = 0

        self.only_size_wrong = 0
        self.wrong_pred = 0

        self.recall = 0
        self.precision = 0
        self.f1 = 0
        
    def inc_total(self, n):
        self.total += n
    
    def update(self, ground_truth:Dict, prediction: Dict) -> (float, float):
        ground_truth = {int(k): int(v) for k, v in ground_truth.items()}
        prediction = {int(k): int(v) for k, v in prediction.items()}

        
        tmp_num_pred = len(list(prediction.keys()))
        tmp_num_label = len(list(ground_truth.keys()))
        self.num_label += tmp_num_label
        self.num_pred += tmp_num_pred

        tmp_correct_cnt = 0

        for off, size in prediction.items():
            if off in ground_truth:
                if  ground_truth[off] == size:
                    self.correct += 1
                    tmp_correct_cnt += 1 
                else:
                    self.only_size_wrong += 1
            

        return safe_division(tmp_correct_cnt, tmp_num_pred), safe_division(tmp_correct_cnt, tmp_num_label)
        

    def eval(self,):
        # self.sem_evaluator.eval()
        self.precision = safe_division(self.correct, self.num_pred)
        self.recall = safe_division(self.correct, self.num_label)
        self.f1 = safe_division(2 * (self.precision * self.recall), (self.precision + self.recall))
        self.wrong_pred = self.num_pred - self.correct
        
    def print(self,):
        print(f'precision: {self.correct}/ {self.num_pred} = {self.precision}')
        print(f'recall: {self.correct}/ {self.num_label} = {self.recall}')
        print(f'F1: {self.f1}')
        print(f'Only size wrong: {self.only_size_wrong} / number of wrong pred {self.wrong_pred} = {round(safe_division(self.only_size_wrong, self.wrong_pred), 4)}')
        
class SemEvaluator():
    #semantic
    def __init__(self, ):
        self.score = 0
        self.total = 0
        self.gt = []
        self.pred = []
        self.scores = []
        self.avg_score:float = 0

    def add(self, it_gt, it_pred):
        self.gt.append(it_gt)
        self.pred.append(it_pred)
        self.total += 1


    def eval(self, ):
        def _remove_indices(l, indices):
            return [item for idx, item in enumerate(l) if idx not in indices]

        # num_identical = 0
        identical_idx = []
        for i in range(len(self.gt)):
            if self.gt[i] == self.pred[i]:
                identical_idx.append(i)
                self.scores.append(1)

        
        tmp_scores = cosine_sim_in_batches(
            _remove_indices(self.gt, identical_idx),
            _remove_indices(self.pred, identical_idx)
        )
        assert len(tmp_scores) == len(self.gt) - len(identical_idx)

        self.scores += tmp_scores
        self.avg_score = sum(self.scores)/self.total

class simple_counter():
    # eval for perfect match
    def __init__(self, base_type_config=None):
        self.name_correct = 0
        self.name_correct_loose = 0
        self.type_correct = 0
        self.type_correct_normalize = 0 # consider normalized type only
        self.type_correct_loose = 0
        self.all_correct = 0
        self.all_correct_loose = 0
        self.total = 0
        self.base_type_config = base_type_config
        
        # self.sem_evaluator = SemEvaluator()

        # metric
        self.name_acc = 0
        self.name_loose_acc = 0 
        self.type_acc = 0
        self.type_normalize_acc = 0
        self.type_loose_acc = 0
        self.all_correct_acc = 0

    def inc_total(self, n):
        self.total += n
    
    def update(self, fid,  label: Dict[str,List], pred: Dict[str,List]):
        all_correct = True
        for var in label:
            if var not in pred:
                continue
            
            this_correct = self.update_per_var(fid, label[var], pred[var])
            if not this_correct:
                all_correct = False
        
        return all_correct

    def update_per_var(self, fid,  var_label: List[str], var_pred:  Union[None, List[str]]):
        if not var_pred:
            return 

        if var_label[0] == var_pred[0]:
            self.name_correct += 1
        
        if loose_name_eval(var_label[0], var_pred[0]):
            self.name_correct_loose += 1
            
        if var_label[1] == var_pred[1]:
            self.type_correct += 1

        if loose_type_eval_normalize(var_label[1], var_pred[1], self.base_type_config):
            self.type_correct_normalize += 1


        if loose_type_eval(var_label[1], var_pred[1], self.base_type_config):
            self.type_correct_loose += 1

        if var_label == var_pred:
            self.all_correct += 1
            return True
        else:
            return False


    def eval(self,):
        # self.sem_evaluator.eval()
        self.name_acc = safe_division(self.name_correct, self.total)
        self.name_loose_acc = safe_division(self.name_correct_loose, self.total) 
        self.type_acc = safe_division(self.type_correct, self.total)
        self.type_normalize_acc = safe_division(self.type_correct_normalize, self.total)
        self.type_loose_acc = safe_division(self.type_correct_loose, self.total) 
        self.all_correct_acc = safe_division(self.all_correct, self.total)
        
    def print(self,):
        print(f'name_correct: {self.name_correct}/ {self.total} = {safe_division(self.name_correct, self.total)}')
        if self.base_type_config:
            print(f'name_correct_loose: {self.name_correct_loose}/ {self.total} = {safe_division(self.type_correct, self.total)}')
        # print(f'name_correct_score: {self.sem_evaluator.avg_score}')
        print(f'type_correct: {self.type_correct}/{self.total} = {safe_division(self.type_correct, self.total)}')
        if self.base_type_config:
            print(f'type_correct_normalize: {self.type_correct_normalize}/{self.total} = {safe_division(self.type_correct_normalize, self.total)}')
            print(f'type_correct_loose: {self.type_correct_loose}/{self.total} = {safe_division(self.type_correct_loose, self.total) }')
        print(f'all_correct: {self.all_correct}/{self.total} = {safe_division(self.all_correct, self.total)}')
        # print(f'all_correct_loose: {self.all_correct_loose}/{self.total} = {round(self.all_correct_loose/self.total, 4)}')

class NameEvaluator():
    # only report accuracy
    def __init__(self, base_type_config=None):
        self.correct = 0
        self.total = 0

    def update(self, label, pred) -> bool:
        self.total += 1
        if label == pred:
            self.correct += 1 
            return True
        return False
        
    def print(self,):
        print(f"Accuracy: {self.correct}/{self.total} = {round(safe_division(self.correct, self.total), 4)}")

class Cluster():
    def __init__(self, head_var:str, all_var:List[str], name:str, tp:str):
        self.head_var = head_var   # v1
        self.all_var = all_var   # v1, v2, v3
        self.name = name
        self.type = tp
        self.is_struct = self.set_is_struct()

    def set_is_struct(self):
        return self.type.startswith('struct ')
    
    def add_var(self, varname):
        if varname not in self.all_var:
            self.all_var.append(varname)

    def comp_bound(self, other_cluster)-> bool:
        # compare if this cluster and other_cluster have the same boundary
        return self.head_var == other_cluster.head_var and set(self.all_var) == set(other_cluster.all_var) 

    def comp_type(self, other_cluster)-> bool:
        # compare if this cluster and other_cluster have the same type (array/struct)
        return self.is_struct == other_cluster.is_struct

    def comp_perfect_match(self, other_cluster, consider_type:bool)-> bool:
        if consider_type:
            return self.comp_bound(other_cluster) and self.comp_type(other_cluster)
        else:
            return self.comp_bound(other_cluster)

class Logger ():
    def __init__(self):
        self.data = {
            'has_correct': [],
            'has_fp': [],
            'has_fn': [],
            'ill_format': []
        }
    def update(self, label, id):
        if label not in self.data:
            print('ERROR')
            exit()
        if id not in self.data[label]:
            self.data[label].append(id)
    
class complex_eval_counter():
    def __init__(self,):
        self.num_correctly_pred = 0
        self.num_label = 0   # number of array/struct varibales (v1 v2 v3 -> arr[3] are counted as ONE)
        self.num_pred = 0
        self.num_head_correct = 0 # the array/struct head is correctly predicted (i.e., the second one is "-")
        self.loose_num_correctly_pred = 0  # allow overflow (e.g., v1-v10 all predicted as the same arr, but the label is only v1-v3)
        self.precision = 0
        self.recall = 0
        self.f1 = 0
    def print(self, ):
        self.precision = self.num_correctly_pred/self.num_pred
        self.recall = self.num_correctly_pred/self.num_label
        self.f1 = safe_division(2 * (self.precision * self.recall), (self.precision + self.recall))
        print(f'precision: {self.num_correctly_pred}/ {self.num_pred} = {round(self.precision, 4)}')
        print(f'head precision: {self.num_head_correct}/ {self.num_pred} = {round(self.num_head_correct/self.num_pred, 4)}')
        print(f'recall: {self.num_correctly_pred}/ {self.num_label} = {round(self.recall, 4)}')
        print(f'head recall: {self.num_head_correct}/ {self.num_label} = {round(self.num_head_correct/self.num_label, 4)}')
        print(f'F1: {round(self.f1, 4)}')

class complex_var_evaluator():
    def __init__(self,):
        self.counter = complex_eval_counter()
        self.array_counter = complex_eval_counter()
        self.struct_counter = complex_eval_counter()
        self.type_correct = 0   # can distinguish array or struct
        self.num_pred = 0
    
    def eval(self, i, vars_gt, vars_pred, gt_var_order, target_varlist, logger=None, consider_type=True):
        # consider_type: separate array and struct when eval perfect match
        # this eval does not consider name and type name, only consider array/struct and their boundary
        gt_var_cluster:Dict[str, Cluster]  = {}  # ground_truth. head_var : cluster obj
        # 1. build gt_var_cluster
        for var_list in target_varlist:  # e.g., [v1 v2 v3]
            cluster_head, _ = get_cluster_head(var_list, gt_var_order)
            gt_var_cluster[cluster_head] = Cluster(
                cluster_head, 
                var_list, 
                vars_gt[cluster_head][0], 
                vars_gt[cluster_head][1]
                )
                
        if len(list(gt_var_cluster.keys()))!=len(target_varlist):
            assert False
            print(f"{i}: {len(list(var_map.keys()))}!={len(target_varlist)} (target_varlist: {target_varlist}). \nvar_map: {var_map}")
            return -1
            # e.g., /local2/xie342/shared/dataset/benchmark-coreutils/align/4aece6.json
            # v31&v32 and v35&v36 have the same struct obj name in two branches of a switch statement

        assert len(list(gt_var_cluster.keys()))==len(target_varlist)

        # update counter
        self.counter.num_label += len(target_varlist)
        for gt_head_var, gt_cluster in gt_var_cluster.items():
            if gt_cluster.is_struct:
                self.struct_counter.num_label += 1
            else:
                self.array_counter.num_label += 1
        
        

        # 2. build pred_var_cluster
        pred_var_cluster:Dict[str, Cluster]  = {}  # predicted. head_var : cluster obj
        last_not_dash = None      # the last previous var that is not dash, i.e., the head or a normal var
        for var in gt_var_order:  # e.g., v1
            if var not in vars_pred:
                continue
            pred_name, pred_type = vars_pred[var][0], vars_pred[var][1]

            if pred_name == '-':
                if last_not_dash is not None and not last_not_dash.startswith('a'):
                    if last_not_dash not in pred_var_cluster:
                        pred_var_cluster[last_not_dash] = Cluster(
                            last_not_dash,
                            [last_not_dash, var],
                            vars_pred[last_not_dash][0], 
                            vars_pred[last_not_dash][1]
                        )
                    else:
                        pred_var_cluster[last_not_dash].add_var(var)
               
            else:
                last_not_dash = var

        # check
        if not vars_pred:
            assert len(list(pred_var_cluster.keys())) == 0

        # update counters
        self.counter.num_pred += len(list(pred_var_cluster.keys()))
        for pred_head_var, pred_cluster in pred_var_cluster.items():
            if consider_type:
                if pred_cluster.is_struct:
                    self.struct_counter.num_pred += 1
                else:
                    self.array_counter.num_pred += 1
            else:
                self.array_counter.num_pred += 1
                self.struct_counter.num_pred += 1


        # 3. update num_correctly_pred
        for pred_head_var, pred_cluster in pred_var_cluster.items():
            for gt_head_var, gt_cluster in gt_var_cluster.items():
                if pred_cluster.comp_perfect_match(gt_cluster, consider_type):
                    self.counter.num_correctly_pred += 1
                    if consider_type:
                        if pred_cluster.is_struct:  
                            # no need to check if type are the same, perfect_match already considers `consider_type`
                            self.struct_counter.num_correctly_pred += 1
                            # print(i)
                        else:
                            self.array_counter.num_correctly_pred += 1
                    else:
                        if gt_cluster.is_struct:
                            self.struct_counter.num_correctly_pred += 1
                        else:
                            self.array_counter.num_correctly_pred += 1
                        

       
        # 4. update self.num_head_correct
        for pred_head_var, pred_cluster in pred_var_cluster.items():
            if pred_head_var in gt_var_cluster:
                if consider_type:
                    if pred_cluster.comp_type(gt_var_cluster[pred_head_var]):
                        self.counter.num_head_correct += 1
                        if pred_cluster.is_struct:  
                            self.struct_counter.num_head_correct += 1
                        else:
                            self.array_counter.num_head_correct += 1
                else:
                    self.counter.num_head_correct += 1
                    if gt_var_cluster[pred_head_var].is_struct:
                        self.struct_counter.num_head_correct += 1
                    else:
                        self.array_counter.num_head_correct += 1
                    
        # 5. evaluate distinguish array vs struct
        for pred_head_var, pred_cluster in pred_var_cluster.items():
            if pred_head_var in gt_var_cluster:
                if pred_cluster.is_struct == gt_var_cluster[pred_head_var].is_struct:
                    self.type_correct += 1
        self.num_pred += len(list(pred_var_cluster.keys()))
       
        return -1

    def print(self,):
        print('===========combined===========')
        self.counter.print()
        print('===========array===========')
        self.array_counter.print()
        print('===========struct===========')
        self.struct_counter.print()
        print(f"Type correct (distinguish array from struct: ) {self.type_correct}/{self.num_pred} = {round(safe_division(self.type_correct, self.num_pred), 4)}")

class HeapCounter():
    # eval for perfect match
    def __init__(self, base_type_config=None):
        self.var_name_correct = 0
        self.var_type_correct = 0
        self.var_type_correct_normalize = 0
        self.var_type_correct_loose = 0
        self.field_name_correct = 0
        self.field_type_correct = 0
        self.field_type_correct_normalize = 0
        self.field_type_correct_loose = 0
        self.object_type_correct = 0 # whether it is a struct or array
        self.both_type_correct = 0
        self.both_type_correct_loose = 0
        self.all_correct = 0
        self.total = 0
        self.base_type_config = base_type_config

        # metric
        self.var_name_acc = 0
        self.var_type_acc = 0
        self.var_type_normalize_acc = 0
        self.var_type_loose_acc = 0
        self.field_name_acc = 0
        self.field_type_acc = 0
        self.field_type_normalize_acc = 0
        self.field_type_loose_acc = 0
        self.object_type_acc = 0
        self.all_correct_acc = 0

    def inc_total(self, n=1):
        self.total += n
    
    def update(self, fid, label: List, pred: List):
        assert len(label) == 4
        assert len(pred) ==4

        if label[0] == pred[0]:
            self.var_name_correct += 1
        if label[1] == pred[1]:
            self.var_type_correct += 1

        if loose_type_eval_normalize(label[1], pred[1], self.base_type_config):
            self.var_type_correct_normalize += 1

        if loose_type_eval(label[1], pred[1], self.base_type_config):
            self.var_type_correct_loose += 1
        # else:
        #     print(fid)

        if label[2] == pred[2]:
            self.field_name_correct += 1
        if label[3] == pred[3]:
            self.field_type_correct += 1
        
        if loose_type_eval_normalize(label[3], pred[3], self.base_type_config):
            self.field_type_correct_normalize += 1


        if loose_type_eval(label[3], pred[3], self.base_type_config):
            self.field_type_correct_loose += 1



        if label[1] == pred[1] and label[3] == pred[3]:
            self.both_type_correct += 1

        if loose_type_eval(label[1], pred[1], self.base_type_config) and loose_type_eval(label[3], pred[3], self.base_type_config):
            self.both_type_correct_loose += 1


        if label[2] == '-' or pred[2] == '-':
            if label[2] == pred[2]:
                self.object_type_correct +=1


        if label == pred:
            self.all_correct += 1
            return True
        return False
    
    def eval(self):
        self.var_name_acc = round(self.var_name_correct/self.total, 4)
        self.var_type_acc = round(self.var_type_correct/self.total, 4)
        self.var_type_normalize_acc = round(self.var_type_correct_normalize/self.total, 4)
        self.var_type_loose_acc = round(self.var_type_correct_loose/self.total, 4)
        self.field_name_acc = round(self.field_name_correct/self.total, 4)
        self.field_type_acc = round(self.field_type_correct/self.total, 4)
        self.field_type_normalize_acc = round(self.field_type_correct_normalize/self.total, 4)
        self.field_type_loose_acc = round(self.field_type_correct_loose/self.total, 4)
        self.all_correct_acc = round(self.all_correct/self.total, 4)
        self.object_type_acc = round(self.object_type_correct/self.total, 4)
    def print(self,):
        
        print(f'var_name_correct: {self.var_name_correct}/ {self.total} = {round(self.var_name_correct/self.total, 4)}')
        
        print(f'var_type_correct: {self.var_type_correct}/ {self.total} = {round(self.var_type_correct/self.total, 4)}')
        
        if self.base_type_config:
            print(f'var_type_correct_normalize: {self.var_type_correct_normalize}/ {self.total} = {round(self.var_type_correct_normalize/self.total, 4)}')
            print(f'var_type_correct_loose: {self.var_type_correct_loose}/ {self.total} = {round(self.var_type_correct_loose/self.total, 4)}')
        
        print(f'field_name_correct: {self.field_name_correct}/ {self.total} = {round(self.field_name_correct/self.total, 4)}')
        
        print(f'field_type_correct: {self.field_type_correct}/ {self.total} = {round(self.field_type_correct/self.total, 4)}')
        if self.base_type_config:
            print(f'field_type_correct_normalize: {self.field_type_correct_normalize}/ {self.total} = {round(self.field_type_correct_normalize/self.total, 4)}')
            print(f'field_type_correct_loose: {self.field_type_correct_loose}/ {self.total} = {round(self.field_type_correct_loose/self.total, 4)}')
        print(f'both_type_correct: {self.both_type_correct}/ {self.total} = {round(self.both_type_correct/self.total, 4)}')
        if self.base_type_config:
            print(f'both_type_correct_loose: {self.both_type_correct_loose}/ {self.total} = {round(self.both_type_correct_loose/self.total, 4)}')
        
        print(f'object_type_acc: {self.object_type_correct}/{self.total} = {round(self.object_type_correct/self.total, 4)}')

        print(f'all_correct: {self.all_correct}/{self.total} = {round(self.all_correct/self.total, 4)}')


def normalize_global_variables(code):
    # Regex pattern to match global variables
    pattern = r'\b[qd]word_[A-Z0-9]+\b'

    # Find all global variables in order of appearance
    globals_found = re.findall(pattern, code)
    
    # Use OrderedDict to preserve order and remove duplicates
    ordered_globals = OrderedDict.fromkeys(globals_found)

    # Dictionary to map global variables to their new names
    replacement_map = {var: f'GLOBAL_VAR{index+1}' for index, var in enumerate(ordered_globals)}

    # Replace each global variable in the code
    for original, new in replacement_map.items():
        code = re.sub(r'\b{}\b'.format(original), new, code)

    return code

def get_fpath_from_train(train_fpath:str, folder:str, verbose:bool=False, path_prefix:str='/local2/xie342/shared/dataset', ext=None)->str:
    ret_fpath = None
    if '/decompiled_files/' in train_fpath:
        ret_fpath = train_fpath.replace('/decompiled_files/', f'/{folder}/')
    elif '/train/' in train_fpath:
        ret_fpath = train_fpath.replace('/train/', f'/{folder}/')
    elif '/train_heap/' in train_fpath:
        ret_fpath = train_fpath.replace('/train_heap/', f'/{folder}/')

    else:
        assert False, train_fpath
    
    if ext is not None:
        ret_fpath = ret_fpath.replace('.c', ext)

    ret_fpath = os.path.join(path_prefix, ret_fpath)
    # print("ret_fpath", ret_fpath)
    if os.path.exists(ret_fpath):
        return ret_fpath
    else:
        if verbose:
            print('Cannot find file '+ ret_fpath)
        return None





def code_in_train(train_fpath:str, all_in_train_code:Union[List,Set]) -> bool:
    if not isinstance(all_in_train_code, set):
        all_in_train_code = set(all_in_train_code)
    unstripped_code_fpath = get_fpath_from_train(train_fpath, 'unstripped_decompiled_files', ext = '.c')
    if not unstripped_code_fpath:
        return False
    code = read_file(unstripped_code_fpath, readlines=True)
    code = "\n".join(code[1:])
    normalized_code = normalize_global_variables(code).strip()

    # dirty_train_data = read_json(dirty_train_fpath)
    # code = dirty_train_data['input'].split('```')[1].strip()
    if normalized_code in all_in_train_code:
        return True
    return False

def get_cluster_head(all_var:List[str], gt_var_order:List[str]):
    # all_var: [v2,v1,v3]
    # gt_var_order: [v1, v2, v3, v4, v5 ...]
    # return v1, 1
    first_var = None
    first_var_index = 10000
    for var in all_var:
        if var not in gt_var_order:
            continue
        tmp_var_index = gt_var_order.index(var)
        if tmp_var_index < first_var_index:
            first_var_index = tmp_var_index
            first_var = var 

    return first_var, first_var_index

def cosine_sim_in_batches(gt: List[str], pred: List[str], batch_size: int = 32) -> List[float]:
    # Initialize an empty list to store cosine similarity scores
    cosine_scores = []

    # Process the sentences in batches
    for i in range(0, len(gt), batch_size):
        # Extract the current batch for ground truth and predictions
        gt_batch = gt[i:i + batch_size]
        pred_batch = pred[i:i + batch_size]
        
        # Check if last batch might be smaller than batch_size
        current_batch_size = min(batch_size, len(gt) - i)
        
        # Encode the current batch
        gt_embeddings = model.encode(gt_batch, convert_to_tensor=True, show_progress_bar=False)
        pred_embeddings = model.encode(pred_batch, convert_to_tensor=True, show_progress_bar=False)
        
        # Calculate cosine similarity for the current batch
        cos_scores_batch = util.cos_sim(gt_embeddings, pred_embeddings)
        
        # Flatten the cos_scores_batch to a 1D list and extend the main cosine_scores list
        cosine_scores.extend(cos_scores_batch[i][i] for i in range(current_batch_size))

    # Convert each tensor to float and return the list
    return [float(score) for score in cosine_scores]

def cosine_sim(gt:str, pred:str) -> float:

    # return list of index
    
    gt_embedding = model.encode(gt, convert_to_tensor=True)
    pred_embedding = model.encode(pred, convert_to_tensor=True)
    cos_score = util.cos_sim(gt_embedding, pred_embedding)[0]

    return float(cos_score[0])

def pascal_case_split(identifier) -> List[str]:
    # camel case
    matches = re.finditer('.+?(?:(?<=[a-z])(?=[A-Z])|(?<=[A-Z])(?=[A-Z][a-z])|$)', identifier)
    return [m.group(0) for m in matches]

def is_struct(typename):
    return typename.startswith('struct ')

def is_pointer(typename):
    return '*' in typename

def is_array(typename):
    return re.search(r'\[[\d,]+\]',typename) is not None

def get_array_base_type(typename) -> str:
    p = r'\[[\d,]+\]'
    return re.sub(p, '', typename).strip(), re.search(p,typename).group(0)

def is_pointer_to_base(typename, base_type_config) -> (bool, Union[None, str]):
    if not is_pointer(typename):
        return False, None
    
    typename = typename.replace('*', '').strip()
    if typename in base_type_config:
        return True, typename

    return False, None 

def strip_type(typename):
    # remove "*", "struct ", "[...]"
    if typename is None:
        return typename
    typename = re.sub(r'(\*|struct\s|\[[\d,]+\])', '', typename)
    typename = typename.strip()
    typename = re.sub(r'\s+', ' ', typename)

    return typename.strip()

def parse_type_into_tokens(typename:str, strip=True) -> List[str]:
    # parse by "_" and camel case
    if strip:
        typename = strip_type(typename)
    type_tokens = typename.split('_')
    all_tokens = []
    for t in type_tokens:
        all_tokens += pascal_case_split(t)
    return all_tokens

def match_token_name(gt_type, pred_type, strip=True):
    if gt_type == pred_type:
        return True
    gt_tokens = parse_type_into_tokens(gt_type, strip)
    pred_tokens = parse_type_into_tokens(pred_type, strip)

    for t in pred_tokens:
        if len(t) <=1:
            continue
        if t in gt_tokens:
            return True
    return False

def loose_name_eval(gt_name, pred_name):
    if gt_name == pred_name:
        return True
    return match_token_name(gt_name, pred_name, strip=False)

def eval_base_type(type1, type2, base_type_config):
    if type1 in base_type_config and type2 in base_type_config:
        s1, t1, b1, _ = base_type_config[type1]
        s2, t2, b2, _ = base_type_config[type2]
        return s1==s2 and t1==t2 and b1==b2
    else:
        return type1 == type2


def loose_type_eval_normalize(gt_type, pred_type, base_type_config) -> bool:
    # consider normalize type only
    # do not consider pointer type etc
    if base_type_config is None:
        return gt_type == pred_type
    if gt_type == pred_type:
        return True
    if gt_type == '-':
        return gt_type == pred_type  
    if gt_type in base_type_config:
        # perfect match
        return eval_base_type(gt_type, pred_type, base_type_config)
    if is_pointer(gt_type):
        gt_pt2base, gt_ptee_type = is_pointer_to_base(gt_type, base_type_config)
        pred_pt2base, pred_ptee_type = is_pointer_to_base(pred_type, base_type_config)

        if gt_pt2base and pred_pt2base:
            # both pointer to base type
            return eval_base_type(gt_ptee_type, pred_ptee_type, base_type_config)
        else:
            return False

    # if is_struct(gt_type):
    #     return is_struct(pred_type)

    if is_array(gt_type):
        if not is_array(pred_type):
            return False

        gt_base_type, gt_size = get_array_base_type(gt_type)
        pred_base_type, pred_size = get_array_base_type(pred_type)
        if gt_base_type in base_type_config:
            return eval_base_type(gt_type, pred_type, base_type_config) and gt_size == pred_size

        else:
            return False

    # print(gt_type, pred_type)
    return False
    # assert False, f'{gt_type}, {pred_type}'


def loose_type_eval(gt_type, pred_type, base_type_config) -> bool:
    if base_type_config is None:
        return gt_type == pred_type
    if gt_type == pred_type:
        return True
    if gt_type == '-':
        return gt_type == pred_type  
    if gt_type in base_type_config:
        # perfect match
        return eval_base_type(gt_type, pred_type, base_type_config)
    if is_pointer(gt_type):
        gt_pt2base, gt_ptee_type = is_pointer_to_base(gt_type, base_type_config)
        pred_pt2base, pred_ptee_type = is_pointer_to_base(pred_type, base_type_config)

        if gt_pt2base and pred_pt2base:
            # both pointer to base type
            return eval_base_type(gt_ptee_type, pred_ptee_type, base_type_config)

        elif (not gt_pt2base) and (not pred_pt2base):
            return True
        else:
            return False

    if is_struct(gt_type):
        return is_struct(pred_type)

    if is_array(gt_type):
        if not is_array(pred_type):
            return False

        gt_base_type, gt_size = get_array_base_type(gt_type)
        pred_base_type, pred_size = get_array_base_type(pred_type)
        if gt_base_type in base_type_config:
            return eval_base_type(gt_type, pred_type, base_type_config) and gt_size == pred_size

        else:
            return gt_size == pred_size

    # print(gt_type, pred_type)
    return match_token_name(gt_type, pred_type)
    # return False 
    # assert False, f'{gt_type}, {pred_type}'
            
def test():
    def _test_strip_type():
        assert strip_type('struct xxx') == 'xxx'
        assert strip_type('a1[3,1]') == 'a1'
        assert strip_type('elf_backend_data*') == 'elf_backend_data'

    def _test_pascal_case_split():
        assert pascal_case_split('CalculateInterestRate') == ['Calculate', 'Interest', 'Rate']
        assert pascal_case_split('calculateInterestRate') == ['calculate', 'Interest', 'Rate']
        assert pascal_case_split('elf_backend_data*') == ['elf_backend_data*']
    _test_strip_type()
    _test_pascal_case_split()

test()



