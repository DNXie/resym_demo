import argparse
from typing import List, Dict, Union, Set
import sys
sys.path.append('../process_data')
# sys.path.append('../stack_vote')
from utils import *
from eval_utils import *
from vote_utils import get_ida_type, get_ida_size
import re
from tqdm import tqdm
from collections import defaultdict

get_fpath_from_train_prefix='/home/data/'

def get_funname(symbol):
    # from "fun_addr": "0x4a0ac6" to sub_4A0AC6
    assert re.match(r'0x[\d\w]+', symbol)
    return f'sub_{symbol[2:].upper()}'

def parse_pred(inference, model_type:str, skip_arr:bool=False) -> Union[Dict, None]:
    def _parse_heap_pred():
        vars_pred = {}
        skip_expr = set()


        try:
            for var in inference.strip().split('\n'):
                org, new = var.split(':')
                if org in skip_expr:
                    continue
                c1, c2 = new.strip().split('->')
                tmp = c1.strip().split(',') + c2.strip().split(',')
                vars_pred[org] = [t.strip() for t in tmp]
                assert len(vars_pred[org]) == 4
        except:
            vars_pred = {}
        
        return vars_pred


    def _parse_stack_pred():
        vars_pred = {}
        try:
            for var in inference.strip().split('\n'):
                varname, labels = var.split(':')
                tmp = labels.strip().split(', ')
                vars_pred[varname.strip()] = [t.strip() for t in tmp]
                assert len(vars_pred[varname]) == 2
        except:
            vars_pred = {}

        return vars_pred



    if model_type=='heap':
        return _parse_heap_pred()
    elif model_type == 'stack':
        return _parse_stack_pred()


def collect_calls(merged_inference_data):
    def _get_train_fpath(fundata):
        if 'stack' in fundata:
            return fundata['stack']['fpath']
        elif 'heap' in fundata:
            return fundata['heap']['fpath']
        else:
            assert False

    for proj in tqdm(merged_inference_data, desc='collect calls'):
        for fun, fundata in merged_inference_data[proj].items():
            callsite_fpath = get_fpath_from_train(_get_train_fpath(fundata), folder='callsites', path_prefix = get_fpath_from_train_prefix)
            if not callsite_fpath:
                continue
            callsite_data = read_json(callsite_fpath)
            
            for call in callsite_data:
                callee = call['funName']

                # merged_inference_data[proj][fun]['callee'][callee] = call['args']
                merged_inference_data[proj][fun]['callee'].append({'fun': callee, 'args':call['args']})

                if callee not in merged_inference_data[proj]:
                    continue
                # merged_inference_data[proj][callee]['caller'][fun] = call['args']
                merged_inference_data[proj][callee]['caller'].append({'fun': fun, 'args':call['args']})
    return merged_inference_data

def process_dataflow(dataflow_fpath: str) -> Dict[str, Set]:
    # return {var1 : [variables equals to var1 ], ...}
    ret = {}
    if not dataflow_fpath:
        return ret
    
    dataflow_data = read_json(dataflow_fpath)
    for assignment in dataflow_data:
        lhs, rhs = assignment['lhsVarName'], assignment['rhsVarName']
        if lhs in ret:
            ret[lhs].add(rhs)
        elif rhs in ret:
            ret[rhs].add(lhs)
        else:
            ret[lhs] = set()
            ret[lhs].add(rhs)

    # convert to list
    for var in ret:
        ret[var] = list(ret[var])
        
    return ret

def get_arg_var_info(train_fpath) -> (List, List):
    align_fpath = get_fpath_from_train(train_fpath, folder='decompiled_vars', verbose=True, ext='_var.json', path_prefix = get_fpath_from_train_prefix)
    # print("align_fpath ", align_fpath)
    align_data = read_json(align_fpath)
    args = [a['name'] for a in align_data['argument']]
    vars = [v['name'] for v in align_data['variable']]
    return args, vars 

def get_ida_type_helper(train_fpath, varnames) -> Dict[str, str]:
    ret = {}
    for var in varnames:
        align_fpath = get_fpath_from_train(train_fpath, folder='decompiled_vars', verbose=True, ext='_var.json', path_prefix = get_fpath_from_train_prefix)
        ida_type = get_ida_type(align_fpath, var)
        ret[var] = ida_type
    return ret

def get_ida_size_helper(train_fpath, varnames, ida_type_config) -> Dict[str, str]:
    ret = {}
    for var in varnames:
        align_init_fpath = get_fpath_from_train(train_fpath, folder='decompiled_vars', verbose=True, ext='_var.json', path_prefix = get_fpath_from_train_prefix)
        # print("align_init_fpath", align_init_fpath)
        ida_size = get_ida_size(align_init_fpath, var, ida_type_config)
        ret[var] = ida_size
        # if align_init_fpath == '/local2/xie342/shared/dataset/osprey/align_init/sort_ground/sort_ground-40EAFE.json':
            # print(ret)
            # exit()
    return ret

def merge_stack_heap_inference(stack_fpath, heap_fpath, stack_fun_by_proj, heap_fun_by_proj, normalize_type:bool):
    ida_type_config = read_json('../config/ida_types.json')
    save_data = {}
    # iter 1, stack inference, init all "proj" and "fun" info
    with open(stack_fpath, 'r') as fp:
        fp_lines = fp.readlines()
        for proj, indices in tqdm(stack_fun_by_proj.items(), desc='iterate stack'):
            save_data[proj] = {}
            for i in indices:
                line = json.loads(fp_lines[i])
                # label_fpath = get_fpath_from_train(line['file'], folder='align', verbose=True, path_prefix = get_fpath_from_train_prefix)
                # if not label_fpath:
                #     # print(f"File not found, skip {label_fpath}")
                #     continue
                # label_data = read_json(label_fpath)
                # print(line['file'])
                funaddr = line['file'].split('.')[0].split('-')[-1]
                # funname = label_data['funname']
                vars_pred = parse_pred(line[PREDICT], model_type='stack')
                # get dataflow info
                dataflow_fpath = get_fpath_from_train(line['file'], folder='dataflow', path_prefix = get_fpath_from_train_prefix)
                dataflow_data = process_dataflow(dataflow_fpath)
                args, vars = get_arg_var_info(line['file'])
                save_data[proj][funaddr] = {
                    'stack': {
                        'index': i,
                        'inference': vars_pred, 
                        # 'ground_truth': vars_gt, 
                        # 'order': gt_var_order,
                        # 'ida_type': get_ida_type_helper(line['file'], vars_gt.keys()),
                        'fpath': line['file'],
                        # 'complex_var': line.get('complex_var', {})
                        },
                    'caller': [],
                    'callee': [],
                    'dataflow': dataflow_data,
                    # 'funname': funname,
                    'argument': args,
                    'variable': vars
                    }
                # if 'complex_var' in line:
                #     save_data[proj][funaddr]['complex_var'] = line['complex_var']

    # iter 2, heap inference, merge info into stack info
    with open(heap_fpath, 'r') as fp:
        fp_lines = fp.readlines()
        for proj, indices in tqdm(heap_fun_by_proj.items(),desc='iterate heap'):
            if proj not in save_data:
                save_data[proj] = {}
            # print(proj)
            # if proj!='mirai_ori-telnet-debug':
            #     continue

            for i in indices:
                line = json.loads(fp_lines[i])
                # label_fpath = get_fpath_from_train(line['file'], folder='align', verbose=True, path_prefix = get_fpath_from_train_prefix)
                # print(label_fpath)
                # if not label_fpath:
                #     continue
                # label_data = read_json(label_fpath)
                # funaddr = get_funname(label_data['fun_start_addr'])
                funaddr = line['file'].split('.')[0].split('-')[-1]
                # if funaddr!='sub_403382':
                #     continue
                vars_pred = parse_pred(line[PREDICT],  model_type='heap', skip_arr=True)
                # print('predict', line[PREDICT])
                # print('gt', line['output'])
                # print('parsed pred', vars_pred)
                # print()
                # get label data details
                # if normalize_type:
                #     align_heap_fpath = get_fpath_from_train(line['file'], folder='align_heap_normalized', verbose=False, path_prefix = get_fpath_from_train_prefix)
                # else:
                # align_heap_fpath = get_fpath_from_train(line['file'], folder='beyond_access', verbose=False, path_prefix = get_fpath_from_train_prefix)
                # if not align_heap_fpath:
                #     continue
                    
                # align_heap_data = read_json(align_heap_fpath)
                # print(align_heap_fpath)
                parsed = {}
                for expr, access in line['access'].items():
                    calculated_offset = max(1, int(access['lhsPointeeSize'])) * int(access['offset'])
                    parsed[expr] = {
                        # 'offset':access['offset'], 
                        'calculated_offset': calculated_offset,
                        'varName':access['varName'],
                        'exprPointeeSize': access['exprPointeeSize']
                        }
                if funaddr not in save_data[proj]:
                    # print(funaddr)
                    args, vars = get_arg_var_info(line['file'])
                    dataflow_fpath = get_fpath_from_train(line['file'], folder='dataflow', path_prefix = get_fpath_from_train_prefix)
                    dataflow_data = process_dataflow(dataflow_fpath)
                    # funname = align_heap_data['funname']
                    save_data[proj][funaddr] = {
                        'caller': [], 
                        'callee': [], 
                        'dataflow': dataflow_data, 
                        # 'funname': funname, 
                        'argument': args, 
                        'variable': vars}

                save_data[proj][funaddr]['heap'] = {
                    'index': i,
                    'inference': vars_pred, 
                    # 'ground_truth': vars_gt, 
                    'parsed': parsed,
                    # 'ida_type': get_ida_type_helper(line['file'], [parsed[expr]['varName'] for expr in parsed]),
                    'fpath': line['file']
                    }
    
    for proj, projdata in tqdm(save_data.items(), desc='get relevant info'):
        for fun, fundata in projdata.items():
            all_vars = set()
            fpath = ''
            if 'stack' in fundata:
                # all_vars.update(fundata['stack']['order'])
                fpath = fundata['stack']['fpath']
            elif 'heap' in fundata:
                # all_vars.update([fundata['heap']['parsed'][expr]['varName'] for expr in fundata['heap']['parsed']])
                fpath = fundata['heap']['fpath']
            else:
                assert False, fun
            # if 'dataflow' in fundata:
            #     for var, equiv_vars in fundata['dataflow'].items():
            #         all_vars.add(var)
            #         all_vars.update(equiv_vars)
            all_vars.update(fundata['variable'])
            all_vars.update(fundata['argument'])

            save_data[proj][fun]['ida_type'] = get_ida_type_helper(fpath, all_vars)
            save_data[proj][fun]['ida_size'] = get_ida_size_helper(fpath, all_vars, ida_type_config)
    # print(save_data)
    return save_data
               
def main(stack_fpath, heap_fpath, save_dir, normalize_type):
    def _get_fun_by_proj(fpath):
        
        fun_by_proj:Dict[str:List[int]] = defaultdict(list)
        with open(fpath, 'r') as fp:
            # if coreutils:
            #     fun_by_proj['coreutils'] = range(0, len(fp.readlines()))
            # else:   
            if 'osprey' in fpath:
                # fun_by_proj    projname: List[indices]

                for i, line in enumerate(fp.readlines()):
                    line = json.loads(line)
                    line_fpath = line['file']  

                    proj = '/'.join(line_fpath.split('/')[2:-1])
                    # if proj not in fun_by_proj:
                    #     fun_by_proj[proj] = []
                    
                    fun_by_proj[proj].append(i)
            elif 'libfun' in fpath:

                for i, line in enumerate(fp.readlines()):
                    line = json.loads(line)
                    line_fpath = line['file']  

                    proj = line_fpath.split('/')[0]
                    # if proj not in fun_by_proj:
                    #     fun_by_proj[proj] = []
                    
                    fun_by_proj[proj].append(i)
            elif 'mirai' in fpath:
                for i, line in enumerate(fp.readlines()):
                    line = json.loads(line)
                    line_fpath = line['file']  

                    proj = line_fpath.split('/')[2].replace('.', '-')
                    # if proj not in fun_by_proj:
                    #     fun_by_proj[proj] = []
                    
                    fun_by_proj[proj].append(i)

            else:
                # fun_by_proj    author/proj/bin:[indices]
                for i, line in enumerate(fp.readlines()):
                    line = json.loads(line)
                    line_fpath = line['file']  
                    # print(line_fpath)
                    _, _, author, p, fname = line_fpath.split('/')[-5:]
                    binname, _ = fname.split('-')
                    sep = '**'
                    key = f'{author}{sep}{p}{sep}{binname}'
                    fun_by_proj[key].append(i)


        return fun_by_proj

    init_folder(save_dir)
    stack_fun_by_proj = _get_fun_by_proj(stack_fpath)
    heap_fun_by_proj = _get_fun_by_proj(heap_fpath)
    
    merged_data = merge_stack_heap_inference(stack_fpath, heap_fpath, stack_fun_by_proj, heap_fun_by_proj, normalize_type)
    # print(merged_data)
    merged_data_with_calls = collect_calls(merged_data)
    for proj in merged_data_with_calls:
        # print(os.path.join(save_dir, proj.replace('/', '-')+".json"))
        dump_json(os.path.join(save_dir, proj.replace('/', '-')+".json"), merged_data_with_calls[proj])





path_prefix = '/local2/xie342/shared/dataset'
PREDICT='predict'
if __name__=='__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('stack_fpath', help='the file path of inference results (predict.jsonl)')
    parser.add_argument('heap_fpath', help='the file path of inference results (predict.jsonl)')
    parser.add_argument('save_dir')
    parser.add_argument('--normalize_type', action='store_true', default=False, help='normalize type to base types')
    # parser.add_argument('--coreutils', default=False, action='store_true')
    args = parser.parse_args()
    main(args.stack_fpath, args.heap_fpath, args.save_dir, args.normalize_type)


# python prep.py ../../dataset/train/v9/gh_predict_stack_author_normalized.jsonl ../../dataset/train/v9/gh_predict_heap_author_normalized.jsonl ../../dataset/aggregation/prep
