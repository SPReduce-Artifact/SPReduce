#!/usr/bin/env python3

import os
import csv
import json
from datetime import datetime
import subprocess
import argparse

__location__ = os.path.realpath(
    os.path.join(os.getcwd(), os.path.dirname(__file__)))

def parse_arguments():
    parser = argparse.ArgumentParser(description="Summarize benchmark results to csv format.")
    parser.add_argument("-d", "--input-directory", default=None, type=str, nargs='+',
                        help="Input directory containing the benchmark results in the type of '*.json'.")
    parser.add_argument("-o", "--output-path", default=None, type=str,
                        help="path to save the result.")
    parser.add_argument("-c", "--comparison-mode", action="store_true",
                        help="Extra parameters/columns will be exported for comparison between settings.")
    return parser.parse_args()

def get_file_list(directory: str) -> list:
    return [os.path.join(directory, x) for x in os.listdir(directory) if x.lower().endswith('.json')]

def extract_from_json(filename: str, header: list):
    with open(filename, 'r', encoding='utf-8') as file:
        try:
            data = json.load(file)
        except json.JSONDecodeError:
            return None

    for entry in header:
        if entry not in data:
            return None

    return [data[entry] for entry in header]

def csv_filename_generator(flag: str) -> str:
    time = datetime.now().strftime("%Y%m%d-%H%M%S")
    git_head_id = subprocess.check_output(
        ['git', 'rev-parse', '--short', 'HEAD'],
        stderr=subprocess.STDOUT
    )
    git_head_id = git_head_id.decode("utf-8").strip()

    if flag:
        return f'benchmark_csv_{time}_{git_head_id}_{flag}'
    else:
        return f'benchmark_csv_{time}_{git_head_id}'

def write_to_csv(output_path: str, rowlist: list):
    with open(output_path, 'w', newline='', encoding='utf-8') as file:
        writer = csv.writer(file)
        writer.writerows(rowlist)

def output_manager(output_path: str, rowlist: list):
    directory = os.path.dirname(output_path)
    if directory and not os.path.exists(directory):
        os.makedirs(directory)
    write_to_csv(output_path, rowlist)

def main():
    arguments = parse_arguments()
    folders = arguments.input_directory
    output_path = arguments.output_path
    comparison_mode = arguments.comparison_mode

    file_list = []
    if folders:
        for folder in folders:
            benchmark_results_location = os.path.abspath(folder)
            file_list.extend(get_file_list(benchmark_results_location))

    if comparison_mode:
        header_row = ['Subject', 'Query', 'Time', 'Token_remaining', 'Environment']
    else:
        header_row = ['Subject', 'Query', 'Time', 'Token_remaining']

    csv_rowlist = [header_row]
    for file in file_list:
        print(os.path.basename(file))
        csv_row = extract_from_json(file, header_row)

        if csv_row is not None:
            csv_rowlist.append(csv_row)

    if comparison_mode:
        csv_rowlist.sort(key=lambda x: (str(x[0]), str(x[4]), str(x[2]), str(x[1])))
    else:
        csv_rowlist.sort(key=lambda x: (str(x[0]), str(x[2]), str(x[1])))

    if output_path:
        output_manager(output_path, csv_rowlist)

    for row in csv_rowlist:
        print(', '.join(map(lambda x: str(x), row)))

if __name__ == "__main__":
    main()