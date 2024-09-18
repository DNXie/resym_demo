#!/bin/bash

if [ $# -ne 1 ]; then
    echo "Usage: $0 <source_dir>"
    exit 1
fi


source_dir=$1

check_dir_exist() {
    target_dir=$1
    # Check if the source directory exists
    if [ ! -d "$target_dir" ]; then
        echo "Directory '$target_dir' does not exist."
        exit 1
    fi
}

create_dir() {
    target_dir=$1

    # Check if the destination directory exists, create it if necessary
    if [ ! -d "$target_dir" ]; then
        mkdir -vp "$target_dir"
        if [ $? -ne 0 ]; then
            echo "Failed to create destination directory '$target_dir'."
            exit 1
        fi
    fi
}


process_command() {
    filepath=$1
    source_dir=$2

    filename=$(basename "$filepath")
    dirpath=$(dirname "$filepath")

    prepare_dir() {
        base_dir=$1
        target_dir="$base_dir/$filename"
        mkdir -p "$target_dir"
        echo $target_dir
    }

    echo "============ $filepath ============"
    decompiled_dir="$source_dir/decompiled"
    decompiled_fpath="$source_dir/decompiled/$filename.decompiled"
    decompiled_vars_dir=$(prepare_dir "$source_dir/decompiled_vars")
    beyond_access_dir=$(prepare_dir "$source_dir/beyond_access")
    call_site_dir=$(prepare_dir "$source_dir/callsites")
    dataflow_dir=$(prepare_dir "$source_dir/dataflow")
    create_dir "$source_dir/commands"
    commands_dir="$source_dir/commands"

    decompiled_files_dir=$(prepare_dir "$source_dir/decompiled_files")

    logs_dir=$(prepare_dir "$source_dir/logs")

    echo "************ Prepare decompiled files ************"
    python prep_decompiled.py "$decompiled_fpath" "$decompiled_files_dir"

    echo "************ Parse comments from the decompiled code ************"
    python parse_decompiled.py "$decompiled_fpath" "$decompiled_vars_dir" > "$logs_dir/parse_decompiled_errors"


    echo "************ Generate commands ************"
    echo "#!/bin/bash" > $commands_dir"/"$filename"_beyond_access_command.sh"
    python gen_beyond_access_command.py "$decompiled_files_dir" beyond_access "$beyond_access_dir" >> $commands_dir"/"$filename"_beyond_access_command.sh"
    

    echo "************ Generate commands ************"
    echo "#!/bin/bash" > $commands_dir"/"$filename"_callsites_command.sh"
    python gen_beyond_access_command.py "$decompiled_files_dir" call_site "$call_site_dir" >> $commands_dir"/"$filename"_callsites_command.sh"
    

    echo "************ Generate commands ************"
    echo "#!/bin/bash" > $commands_dir"/"$filename"_dataflow_command.sh"
    python gen_beyond_access_command.py "$decompiled_files_dir" dataflow "$dataflow_dir" >> $commands_dir"/"$filename"_dataflow_command.sh"
    
}



for FILE in "$source_dir/bin"/*
do
    # Perform actions on each file
    process_command $FILE $source_dir
    # break
    echo "Processing $FILE"
    # Add your commands here
done

python gen_command_script.py $source_dir/commands beyond_access $source_dir
python gen_command_script.py $source_dir/commands callsites $source_dir
python gen_command_script.py $source_dir/commands dataflow $source_dir

bash $source_dir/beyond_access_command.sh
bash $source_dir/callsites_command.sh
bash $source_dir/dataflow_command.sh



echo "************ generate stack jsonl file ************"
echo "python gen_stack_data.py "$source_dir/decompiled_files" "$source_dir/decompiled_vars" "$source_dir"/stack.jsonl"
python gen_stack_data.py "$source_dir/decompiled_files" "$source_dir/decompiled_vars" "$source_dir"/stack.jsonl


echo "************ generate heap jsonl file ************"
echo "python gen_stack_data.py "$source_dir/decompiled_files" "$source_dir/beyond_access" "$source_dir"/heap.jsonl"
python gen_heap_data.py "$source_dir/decompiled_files" "$source_dir/beyond_access" "$source_dir"/heap.jsonl

# bash process_osprey.sh /home/data