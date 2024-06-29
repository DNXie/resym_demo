0. proprocess_osprey.py
convert osprey.csv into osprey_processed.csv
parse layout, only keep relevant entries


1. prep.py
merge stack and heap inference together, store a json for each project
saved_file = {
    fun1: {
        heap: {...}
        stack: {...}
        caller: {...}
        callee: {...}
    }
    ...
}

2. callgraph.py
output groups of variables that are equivalent to each other
only analyze direct pass of values such as `a=b` and `foo(a)`
save results `List[List[str]]` to `dataset/aggregation/equiv_vars`
if only contrain one function, discard

3. group_info.py
save to `dataset/aggregation/group_data/<proj_folder>/<var_group>.json`

<!-- 4. prep_eval.py
majority vote, fill in unsed fields, etc
save to `dataset/aggregation/eval/<proj_folder>/<var_group>.json`

5. eval.py
compare `[offset, size]` pair with the ground truth
output precision, recall, and F1 -->


4. vote.py

5. gen_csv.py


**TODO**
- [] array? array portion?  (20%) array example
- [x] add ida type to filter out invalid prediction
- [x] predict the first field:
- [] if the function has *a (dereference of the var). Only include the function if it accesses other field of the struct, otherwise there would be many irrelevant cases



Question:
1. arr == ptr?
2. pass as `(__int64)v3`
3. foo(v10), def foo (__int64* a1)  v10 == foo.a1 or v10 == foo.&a1
4. how to calculate ida size