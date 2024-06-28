import argparse
import os
from utils import *
from tqdm import tqdm
from typing import List, Dict


def select_zero_offset(beyond_access_data) -> List[str]:
    available_vars = set()  # variables that has real beyond access  (offset > 0) 
    for access in beyond_access_data:
        if int(access['offset']) > 0:
            available_vars.add(access['varName'])

    # print("available_vars", available_vars)
    selected_vars = set()
    selected_expr = set()
    # prioritize real beyond access (a[0])
    for access in beyond_access_data:
        if int(access['offset']) == 0 and access['varName'] in available_vars and access['varName'] not in selected_vars:
            if '[0]' in access['expr']:
                selected_expr.add(access['expr'])
                selected_vars.add(access['varName'])
    
    # print(beyond_access_data)
    for access in beyond_access_data:
        # print(access)
        if int(access['offset']) == 0 and access['varName'] in available_vars and access['varName'] not in selected_vars:
            # print(access)
            selected_expr.add(access['expr'])
            selected_vars.add(access['varName'])

    return selected_expr


def gen_prompt(code, beyond_access_data):
    
    target_by_ac = []

    # second iter, only handle zero-offset cases
    expr_selected_zero_offset = select_zero_offset(beyond_access_data)
    # print("expr_selected_zero_offset", expr_selected_zero_offset)

    for access in beyond_access_data:
        if int(access['offset']) == 0 and access['expr'] not in expr_selected_zero_offset:
            continue 
        target_by_ac.append(access)

    if not target_by_ac:
        return None 



    prompt = f'```\n{code.strip()}\n```\n' 
    prompt += 'What are the variable name and type for the following memory accesses:'
    prompt += ', '.join([v['expr'] for v in target_by_ac]) + '?\n'

    return prompt


        
    


def main(decompiled_dir, beyond_access_dir, save_fpath):
    cnt = 0
    with open(save_fpath, 'w') as outfile:
        for root, _, files in os.walk(beyond_access_dir):
            binname = os.path.basename(root)

            for f in files:
                if not f.endswith('.json'):
                    continue
                decompiled_file_fpath = os.path.join(decompiled_dir, binname, f.replace('.json', '.c'))
                assert os.path.exists(decompiled_file_fpath), decompiled_file_fpath
                code = read_file(decompiled_file_fpath, readlines=False)
                beyond_access_data = read_json(os.path.join(root, f))

                prompt = gen_prompt(code, beyond_access_data)
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
    parser.add_argument('beyond_access_dir', help='beyond_access')
    parser.add_argument('save_fpath')
    args = parser.parse_args()
    
    main(args.decompiled_dir, args.beyond_access_dir,  args.save_fpath)

