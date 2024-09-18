
# Data Processing Pipeline for Binary and Decompiled Code


## Overview
This script processes binary and decompiled code to parse target variables and yield Access Expressions for model inference. The pipeline includes steps to prepare decompiled files, parse comments, generate commands for various analyses, and produce the final JSONL files for LLM input



## Steps in the Pipeline

The pipeline is constructed in `process_data/process_data.sh`. Here are some break-down details:

1. **Check and Create Directories**:
    - Ensures the source directory exists (`source_dir`).
    - Creates necessary directories if they do not already exist, such as `decompiled`, `decompiled_vars`, `beyond_access`, `callsites`, `dataflow`, `commands`, and `logs`.

2. **Process Each Binary File**:
    - For each file in the `bin` directory, the script:
        1. **Prepare Decompiled Files**:
            - Prepares the decompiled files using `prep_decompiled.py`.
        2. **Parse Comments**:
            - Parses comments from the decompiled code using `parse_decompiled.py`.
        3. **Generate Commands**:
            - Generates and saves commands for beyond access, callsites, and data flow analyses using `gen_beyond_access_command.py`.
            - Commands are saved in the `commands` directory as `<filename>_beyond_access_command.sh`, `<filename>_callsites_command.sh`, and `<filename>_dataflow_command.sh`.

3. **Generate Combined Command Scripts**:
    - Combines the generated command scripts into comprehensive scripts for beyond access, callsites, and data flow using `gen_command_script.py`.
    - Combined scripts are saved as `beyond_access_command.sh`, `callsites_command.sh`, and `dataflow_command.sh`.

4. **Execute Command Scripts**:
    - Executes the combined command scripts to perform the analyses using `bash`:
        - `bash $source_dir/beyond_access_command.sh`
        - `bash $source_dir/callsites_command.sh`
        - `bash $source_dir/dataflow_command.sh`

5. **Generate Final JSONL Files**:
    - Generates the `stack.jsonl` file by combining data from decompiled files and variables using `gen_stack_data.py`.
    - Generates the `heap.jsonl` file by combining data from decompiled files and beyond access analyses using `gen_heap_data.py`.


## Run the code


### Step 1: Pull and Start Docker contrainer
```
docker pull dnxie/resym_demo:latest
```

```
docker run -it --rm --memory=100G --name resym dnxie/resym_demo:latest
```

```
conda activate binary
```


### Step 2: Process Data

```
cd /home/resym/process_data        
```

```
bash process_data.sh /home/data    
```


### Step 3: Inference (optional)

Exit the docker 

The output from a previous experiment is stored at `./data`. 

If you would like to run the model for inference, make sure to have CUDA installed. The rest of the requirements are in `requirements.txt`. 

You can install them with `pip install -r requirements.txt`.




