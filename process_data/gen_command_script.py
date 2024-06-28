
import argparse
import os
from utils import *
from typing import Dict, List
from tqdm import tqdm
import fnmatch

pattern = '*.sh'

def main(command_dir, target_command, save_dir):
    file_content = []
    for f in get_file_list(command_dir):
        print(f)
        if f.endswith(f'{target_command}_command.sh'):
            # Construct the full path of the ".sh" file
            file_path = os.path.join(command_dir, f)  #absolute path
            projname = f.split(target_command)[0]
            # virtual_path = '/share/dataset/' + file_path.split('/dataset/')[1] 
            log_path = os.path.join(os.path.dirname(file_path.replace('/commands/', '/logs/')), f'{projname}{target_command}_log')
            command = 'bash ' + file_path + " > " +  log_path + " 2>&1"
            file_content.append(command)

    file_content = '\n'.join(["#!/bin/bash"] + file_content + [f'echo "Finish {target_command}"'])
    write_file(os.path.join(save_dir, f"{target_command}_command.sh"), file_content)

if __name__=='__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('command_dir')
    parser.add_argument('target_command')
    parser.add_argument('save_dir')
    args = parser.parse_args()

    main(args.command_dir, args. target_command, args.save_dir)


# python osprey_gen_command_script.py ../../dataset/osprey/commands beyond_access ../../dataset/osprey
# python osprey_gen_command_script.py ../../dataset/osprey/commands callsites ../../dataset/osprey
# python osprey_gen_command_script.py ../../dataset/osprey/commands dataflow ../../dataset/osprey


# python osprey_gen_command_script.py ../../dataset/mirai/commands dataflow ../../dataset/mirai
# python osprey_gen_command_script.py ../../dataset/mirai/commands callsites ../../dataset/mirai
# python osprey_gen_command_script.py ../../dataset/mirai/commands beyond_access ../../dataset/mirai


# python gen_command_script.py /share/resym_darpa/data/commands/ beyond_access /share/resym_darpa/data/
# python gen_command_script.py /share/resym_darpa/data/commands/ callsites /share/resym_darpa/data/
# python gen_command_script.py /share/resym_darpa/data/commands/ dataflow /share/resym_darpa/data/