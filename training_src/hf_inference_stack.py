import json
import torch
from transformers import AutoTokenizer, AutoModelForCausalLM
from peft import PeftModel
import argparse
import time

def inference(test_fpath, out_fpath, model_path):
    print('==========start loading model==========')
    device_map = {'transformer.wte.weight': 0, 'transformer.wpe.weight': 0, 'transformer.ln_f': 0, 'lm_head': 0}
    device_map.update({'transformer.h.' + str(i): 0 for i in range(0, 40)})
    tokenizer = AutoTokenizer.from_pretrained('bigcode/starcoder', use_auth_token='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')
    model = AutoModelForCausalLM.from_pretrained(
        model_path, use_auth_token='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', 
        torch_dtype=torch.bfloat16, device_map=device_map
    )

    # wp = open('../data/predict.jsonl', 'w')
    wp = open(out_fpath, 'w')
    num_mismatch = 0
    total = 0
    name_correct, ty_correct = 0, 0
    all_correct = 0
    
    with open(test_fpath, 'r') as fp:
        for i, line in enumerate(fp.readlines()):
            line = json.loads(line)
            first_token = line['output'].split(':')[0]
            prompt = line['input'] + first_token + ':'

            start_time = time.time()
            
            input_ids = tokenizer.encode(prompt, return_tensors='pt').cuda()
            output = model.generate(
                input_ids=input_ids, max_new_tokens=1024, num_beams=4, num_return_sequences=1, do_sample=False,
                early_stopping=False, pad_token_id=0, eos_token_id=0
            )[0]
            output = tokenizer.decode(output[input_ids.size(1): ], skip_special_tokens=True, clean_up_tokenization_spaces=True)

            time_used = time.time() - start_time
            output = first_token + ':' + output
            #print("output: ")
            #print(output)
            save_data = line
            save_data['predict'] = output
            save_data['time'] = time_used
            wp.write(json.dumps(save_data) + '\n')
            # wp.write(json.dumps({'input': line['input'], 'output': line['output'], 'predict': output, 'file': line['file']}) + '\n')


            vars_gt = {}
            vars_pred = {}
            try:
                for var in line['output'].strip().split('\n'):
                    org, new = var.split(': ')
                    vars_gt[org] = new.split(', ')
                for var in output.strip().split('\n'):
                    org, new = var.split(': ')
                    vars_pred[org] = new.split(', ')
            except:
                num_mismatch += 1
                continue
            if len(vars_gt) != len(vars_pred):
                num_mismatch += 1
            total += len(vars_gt)
            for org in vars_gt:
                if org not in vars_pred:
                    continue
                if len(vars_pred[org]) != 2:
                    continue
                if vars_gt[org][0] == vars_pred[org][0]:
                    name_correct += 1
                if vars_gt[org][1] == vars_pred[org][1]:
                    ty_correct += 1
               
                if vars_gt[org] == vars_pred[org]:
                    all_correct += 1

            print('id: {}, name: {:.4f}, type: {:.4f} >> all: {:.4f} >> mismatch: {}'.format(
                i, name_correct / total, ty_correct / total, all_correct / total,  num_mismatch
            ))

if __name__=='__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('test_fpath')
    parser.add_argument('out_fpath')
    parser.add_argument('model_path')
    args = parser.parse_args()

    inference(args.test_fpath, args.out_fpath, args.model_path)
