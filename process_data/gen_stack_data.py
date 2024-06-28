import argparse
import os
from utils import *
from tqdm import tqdm
from typing import List, Dict

def gen_prompt(code, var_data):
    argnames = [a['name'] for a in var_data['argument']]
    varnames = [v['name'] for v in var_data['variable']]
    if argnames or varnames:
        prompt = f'```\n{code.strip()}\n```'
        prompt += 'In the above decompiled C program, what are the original name and data type of variables ' 
        prompt += ', '.join([f'`{v}`' for v in argnames+varnames]) + '?\n'
        
        return prompt
    else:
        return None

def main(decompiled_dir, decompiled_parsed_dir, save_fpath):
    # init_folder(save_dir, clean=True)   
    cnt = 0
    with open(save_fpath, 'w') as outfile:
        for root, _, files in os.walk(decompiled_parsed_dir):
            binname = os.path.basename(root)

            for f in files:
                if not f.endswith('.json'):
                    continue
                decompiled_file_fpath = os.path.join(decompiled_dir, binname, f.replace('_var.json', '.c'))
                assert os.path.exists(decompiled_file_fpath), decompiled_file_fpath
                code = read_file(decompiled_file_fpath, readlines=False)
                var_data = read_json(os.path.join(root, f))
                prompt = gen_prompt(code, var_data)
                if not prompt:
                    continue

                json.dump({
                        'input': prompt,
                        'file': decompiled_file_fpath,
                        'dataset': binname
                    }, outfile)
                outfile.write('\n')
                cnt +=1 

    print(f"Write {cnt} data points to {save_fpath}")



if __name__=='__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('decompiled_dir', help='decompiled_files')
    parser.add_argument('decompiled_parsed_dir', help='decompiled_vars')
    parser.add_argument('save_fpath')
    args = parser.parse_args()
    
    main(args.decompiled_dir, args.decompiled_parsed_dir,  args.save_fpath)


# python gen_stack_data.py /share/resym_darpa/data/decompiled_files/ /share/resym_darpa/data/decompiled_vars/ /share/resym_darpa/data/stack.jsonl
