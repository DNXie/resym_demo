import argparse
import os
from utils import *
from typing import Dict, List
from tqdm import tqdm
from error import ParseError

HEADER = '#include "/share/binary_recovery/clang-parser/defs.hh"\n'
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
                code = HEADER + code
                write_file(os.path.join(save_dir, fun.replace('sub_', '').lower()+'.c'), code)

        # break

def process_funname(raw_addr:str) -> str:
    # sub_1020 -> 1020
    if raw_addr == 'main':
        return raw_addr
    match = re.search(r'^sub_([\w\d]+)$', raw_addr)
    if match:
        return match.group(1)
    else:
        return None


def main_xxz(src_dir, save_dir):
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
                addr = str(hex(dex_addr))[2:].upper()

            code = HEADER + code

            new_fname = f.replace('.decompiled', '-' + str(addr))+'.c'
            write_file(os.path.join(save_dir,new_fname), code)


def main_osprey(src_fpath, save_dir):
    if not src_fpath.endswith(".decompiled"):
        exit()
    file_content:List = read_json(src_fpath)
    for fun in file_content:
        # print(fun)
        fname = os.path.basename(src_fpath)
        dex_addr, tmp_addr, code = fun
        if tmp_addr.startswith('sub_'):
            addr = process_funname(tmp_addr)
        else:
            addr = str(hex(dex_addr))[2:].upper()

        code = HEADER + code

        new_fname = fname.replace('.decompiled', '-' + str(addr))+'.c'
        write_file(os.path.join(save_dir,new_fname), code)
        # print(os.path.join(save_dir,new_fname))
        # break

if __name__=='__main__':
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
    # else:
    #     print(f'Not recognized  project: {src_dir}')
    # elif 'coreutils' in args.src_dir:
    #     main_coreutils(args.src_dir, args.save_dir)