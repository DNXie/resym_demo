import argparse
import os
from utils import *
from typing import Dict, List
from tqdm import tqdm
from error import ParseError


        
def hex_to_decimal(hex_str : str) -> int:
    # Check if the input hex string is valid
    if not re.match(r'^-?[0-9a-fA-F]+$', hex_str):
        return None

    # Convert the hex string to decimal
    decimal_num = int(hex_str, 16)
    return decimal_num

def process_funname(raw_addr:str) -> str:
    # sub_1020 -> 1020
    if raw_addr == 'main':
        return raw_addr
    match = re.search(r'^sub_([\w\d]+)$', raw_addr)
    if match:
        return match.group(1)
    else:
        return None


def extract_comments(fun_content:List[str]) -> List[Dict]:
    # fun_content should be the content of a function, not a file
    var_decl_pattern = r'^(.+?\s+\**)(\S+);\s+\/\/(.*)$'  # <g1> <g2>; // <g3>
    rbp_offset_pattern = r'\[rbp(-[\d\w]+?)h\]'   # [rbp-<g1>h]
    array_name_pattern = r'^(.*?)\[(\d+)\]$'  # <g1>[<g2>]


    var_decl_info = []
    for line in fun_content:
        match = re.match(var_decl_pattern, line.strip())
        if match:
            var_type = match.group(1).strip()
            var_name = match.group(2).strip()
            comment = match.group(3).strip()

            # parse var_name (handle array)
            array_name_match = re.match(array_name_pattern, var_name)
            if array_name_match:
                var_name = array_name_match.group(1) 
                array_size = int(array_name_match.group(2))  
            else:
                array_size = None

            # parse comment, get rbp offset
            rbp_offset = None
            rbp_offset_match = re.search(rbp_offset_pattern, comment)
            if rbp_offset_match:
                rbp_offset = rbp_offset_match.group(1)
            
            rbp_offset_dec = hex_to_decimal(rbp_offset) if rbp_offset is not None else None

            # handle *
            star_count = var_name.count("*")
            var_name = var_name.replace('*', "")

            var_decl_info.append({
                'name': var_name,
                'type': var_type, 
                'comment': comment.strip().replace('"',"`").replace("'", '`'),
                'array_size': array_size,
                'star_count': star_count,
                'rbp_offset_hex': rbp_offset, 
                'rbp_offset_dec': rbp_offset_dec,
                'original_line': line.strip().replace('"',"`").replace("'", '`')
            })
           

    return var_decl_info

def parse_signature(file_content:List[str], funname:str=None) -> List[Dict]:
    # return list (in order)
    arg_info = []
    if not funname: 
        pattern = r'((sub_[\d\w]+)|main)\((.*?)\)'  # <g1> (<g2>)
    else:
        pattern = r'(({})|main)\((.*?)\)'.format(funname)  # <g1> (<g2>)

    if isinstance(file_content, str):
        file_content = file_content.split('\n')
    found = False
    for l_index in range(3):
        line = file_content[l_index]
        match = re.search(pattern, line)
        if match:
            # print(f'{match.group(1)}  ({match.group(2)})')
            funname, arglist = match.group(1), match.group(3)
            found = True
            break
    if not found:
        raise ParseError('cannot find signature')
    
    if not arglist:
        return arg_info
    
    arg_pattern = r'^(.*?)(a\d+)$'    # xxxx a1: <g1><g2>
    arg_pattern2 = r'^((struct\s|const\s)?\w+?\s+\*?)(\w+)$'  # (struct/const )?xxx *?<g3>
    for arg in arglist.split(','):
        if arg.strip() == '...':
            arg_info.append({
                'name': arg.strip(),
                'original_line': arg.strip()
            })
            continue

        if arg.strip() == 'void':
            continue

        arg_match = re.match(arg_pattern, arg.strip())
        if arg_match:
            
            argtype, argname = arg_match.group(1).strip(), arg_match.group(2)
            
        else:
            arg_match = re.match(arg_pattern2, arg.strip())
            if arg_match:
                argtype, argname = arg_match.group(1).strip(), arg_match.group(3)
            else:
                raise ParseError(f'Fail to match arguments {arg.strip()}')


        if argname in arg_info:
            raise ParseError(f'{argname} duplicate')
        
        
        arg_info.append({
            'name': argname,
            'type': argtype, 
            'original_line': arg.strip()
        })
            
    return arg_info


def main_coreutils(src_dir, save_dir):

    for f in tqdm(get_file_list(src_dir)):
        if not f.endswith(".c") or not f.startswith('func_sub_'):
            continue

        
        file_content = read_file(os.path.join(src_dir, f))
        
        try:
            arg_info: List[Dict] = parse_signature(file_content)
            var_info: List[Dict] = extract_comments(file_content)
        except ParseError as e:
            print(f'{f}: {e.msg}')
            continue
        save_data = {'argument': arg_info, 'variable': var_info}

        dump_json(os.path.join(save_dir, f.replace('.c', '_var.json')), save_data)


def main_benchmark(src_dir, save_dir):

    for f in get_file_list(src_dir):
        if not f.endswith(".json"):
            continue
        # should be only one file
        
        data = read_json(os.path.join(src_dir, f))
        
        for fun, code in tqdm(data.items()):
            if not fun.startswith('sub_'):
                continue
            if isinstance(code, str):
                code = code.split('\n')
            try:
                arg_info: List[Dict] = parse_signature(code)
                var_info: List[Dict] = extract_comments(code)
            except ParseError as e:
                print(f'{f}: {e.msg}')
                continue
            save_data = {'argument': arg_info, 'variable': var_info}

            fname = fun.replace('sub_', '').lower()
            dump_json(os.path.join(save_dir, fname+'_var.json'), save_data)

        break

def main_codeflaw(src_dir, save_dir):
    for f in tqdm(get_file_list(src_dir)):
        if not f.endswith(".json"):
            continue

        # if f != '1-C-bug-15203581-15203678.json':
        #     continue

        file_content = read_json(os.path.join(src_dir, f))
        
        for addr, code in file_content.items():
            funname = process_funname(addr)
            if funname is None:
                continue


            code_content = code.split('\n')
            try:
                arg_info: List[Dict] = parse_signature(code_content)
                var_info: List[Dict] = extract_comments(code_content)
            except ParseError as e:
                print(f'{f} - {addr}: {e.msg}')
                continue

            # print('success ' + addr)
            save_data = {'argument': arg_info, 'variable': var_info}

            new_fname = f.replace('.json', '-' + funname + '_var.json')
            dump_json(os.path.join(save_dir,new_fname), save_data)

def main_ghdata(src_dir, save_dir):
    for f in tqdm(get_file_list(src_dir)):
        if not f.endswith(".decompiled"):
            continue

        file_content:List = read_json(os.path.join(src_dir, f))
        
        for fun in file_content:
            # print(os.path.join(src_dir, f))
            dex_addr, tmp_addr, code = fun
            if tmp_addr.startswith('sub_'):
                addr = process_funname(tmp_addr)
            else:
                funname = tmp_addr   # function name
                if funname.startswith('.'):
                    funname = funname[1:]

                addr = str(hex(dex_addr))[2:].upper()
          
            code_content = code.split('\n')
            try:
                if tmp_addr.startswith('sub_'):
                    arg_info: List[Dict] = parse_signature(code_content)
                else:
                    arg_info: List[Dict] = parse_signature(code_content, funname=funname)
                var_info: List[Dict] = extract_comments(code_content)
            except ParseError as e:
                print(f'{f} - {tmp_addr}: {e.msg}')
                continue
            except Exception as e:
                print(f'[Attention] (parse_decomplied) Other error {f} - {tmp_addr}: {e}')
                continue

            # print('success ' + addr)
            save_data = {'argument': arg_info, 'variable': var_info}

            new_fname = f.replace('.decompiled', '-' + str(addr) + '_var.json')
            dump_json(os.path.join(save_dir,new_fname), save_data)

def main_osprey(src_fpath, save_dir):
    # for f in tqdm(get_file_list(src_dir)):
    if not src_fpath.endswith(".decompiled"):
        exit()
    
    filename = os.path.basename(src_fpath)

    file_content:List = read_json(src_fpath)
    
    for fun in file_content:
        # print(os.path.join(src_dir, f))
        dex_addr, tmp_addr, code = fun
        if tmp_addr.startswith('sub_'):
            addr = process_funname(tmp_addr)
        else:
            funname = tmp_addr   # function name
            if funname.startswith('.'):
                funname = funname[1:]

            addr = str(hex(dex_addr))[2:].upper()
        
        code_content = code.split('\n')
        try:
            if tmp_addr.startswith('sub_'):
                arg_info: List[Dict] = parse_signature(code_content)
            else:
                arg_info: List[Dict] = parse_signature(code_content, funname=funname)
            var_info: List[Dict] = extract_comments(code_content)
        except ParseError as e:
            print(f'{filename} - {tmp_addr}: {e.msg}')
            continue
        except Exception as e:
            print(f'[Attention] (parse_decomplied) Other error {filename} - {tmp_addr}: {e}')
            continue

        # print('success ' + addr)
        save_data = {'argument': arg_info, 'variable': var_info}

        new_filename = filename.replace('.decompiled', '-' + str(addr) + '_var.json')
        dump_json(os.path.join(save_dir,new_filename), save_data)


def _test():
    assert hex_to_decimal("-3c") == -60
    assert hex_to_decimal("-28") == -40
    assert not hex_to_decimal("hhh") 


    assert process_funname("sub_1020") == "1020"
    assert process_funname("sub_10F0") == "10F0"
    assert process_funname("main") == "main"
    assert process_funname("__isoc99_scanf") is None

    
if __name__=='__main__':
    # _test()
    parser = argparse.ArgumentParser()
    parser.add_argument('src_dir')
    parser.add_argument('save_dir')
    args = parser.parse_args()
    
    if args.save_dir != '.' and 'test' not in args.save_dir:
        if 'gh-dataset' in args.save_dir:
            init_folder(args.save_dir, clean=False)
        else:
            init_folder(args.save_dir)


    
   
    main_osprey(args.src_dir, args.save_dir)