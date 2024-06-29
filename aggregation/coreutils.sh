#!/bin/bash

stack_pred_path=$1
heap_pred_path=$2
out_dir="/home/posterior_reasoning"

python prep.py $stack_pred_path $heap_pred_path $posterior_reasoning/prep

# python callgraph.py $posterior_reasoning/prep/ $posterior_reasoning/equiv_vars 

# python group_info.py $posterior_reasoning/equiv_vars $posterior_reasoning/prep $posterior_reasoning/group_data > $posterior_reasoning/group_log


# python vote_offset.py $posterior_reasoning/equiv_vars/ $posterior_reasoning/prep $posterior_reasoning/group_data $posterior_reasoning/layout_eval > $posterior_reasoning/log


# # this doesn't matter
# # python vote_type.py  $posterior_reasoning/layout_eval $posterior_reasoning/final



# python gen_csv.py $posterior_reasoning/prep $posterior_reasoning/equiv_vars/  $posterior_reasoning/layout_eval ./osprey_results/our_result.csv


# python eval_our_osprey.py ./osprey_results/our_result.csv ./osprey_results/osprey.csv --out ./osprey_results/our_result_eval.csv --skip ./osprey_results/skip_gt_indices.json  > ./osprey_results/our_eval_log

# python eval_our_wo_aggregation_osprey.py ../../dataset/aggregation/coreutils/prep ./osprey_results/osprey.csv --skip ./osprey_results/skip_gt_indices.json


# ------------------------------ osprey ------------------------------
# # select rows in the ground truth to skip
# python skip_gt.py ./osprey_results/osprey.csv ./osprey_results/skip_gt_indices.json


# python eval_osprey.py ./osprey_results/osprey.csv --skip ./osprey_results/skip_gt_indices.json --out ./osprey_results/osprey_eval.csv