import argparse
import os
from utils import *
from typing import Dict, List
from tqdm import tqdm


def main(src_dir, command_name, save_dir):
    # src_dir and save_dir should be absolute path
    for f in tqdm(get_file_list(src_dir)):
        if not f.endswith(".c"):
            continue
        command = f"/home/clang-parser/{command_name}/{command_name} {os.path.join(src_dir, f)} {os.path.join(save_dir, f.replace('.c', '.json'))}"
        print(command)
    
        
        
if __name__=='__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('src_dir')
    parser.add_argument('command_name')
    parser.add_argument('save_dir')
    
    # parser.add_argument('coammand_')
    args = parser.parse_args()
    

    if args.save_dir != '.' and 'test' not in args.save_dir:
        init_folder(args.save_dir, verbose=False)
    main(args.src_dir, args.command_name, args.save_dir)
