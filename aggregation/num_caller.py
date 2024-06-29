import argparse
from typing import List, Dict, Union, Set, Any
from tqdm import tqdm
import sys
sys.path.append('../process_data')
from utils import *
import os 

prep_folder = '/local2/xie342/shared/dataset/aggregation/gh-dataset/prep'


THRESHOLD = 10

for f in get_file_list(prep_folder):
    prep_data = read_json(os.path.join(prep_folder, f))
    for fun, fundata in prep_data.items():
        num_caller = len(set([f['fun'] for f in fundata['caller']]))
        if num_caller > THRESHOLD:
            print(os.path.join(prep_folder, f), fun, fundata['funname'], num_caller)
