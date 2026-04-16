#!/usr/bin/env python3
import os
import csv
import json
import re
import argparse
from datetime import datetime, timedelta
from collections import defaultdict

def parse_args():
    parser = argparse.ArgumentParser()
    parser.add_argument("-d", "--dirs", nargs='+', required=True)
    parser.add_argument("-o", "--output", required=True)
    return parser.parse_args()

def parse_query_line(line):
    parts = line.strip().split()
    if not parts: return None

    time_str = parts[0].replace("_UTC", "")
    try:
        query_time = datetime.strptime(time_str, "%Y%m%d_%H%M%S")
    except ValueError: return None

    flags, tokens = "", None
    if len(parts) > 1:
        match = re.match(r'^([A-Za-z]+)?(\d+)?$', parts[1])
        if match:
            flags = match.group(1) or ""
            if match.group(2): tokens = int(match.group(2))

    return {"time": query_time, "is_C": "C" in flags, "is_T": "T" in flags, "tokens": tokens}

def get_subject_data(subject_dir):
    if not os.path.exists(subject_dir): return None

    query_file = os.path.join(subject_dir, "query_timestamps.txt")
    json_files = [f for f in os.listdir(subject_dir) if f.startswith("stat_") and f.endswith(".json")]
    if not os.path.exists(query_file) or not json_files: return None

    try:
        with open(os.path.join(subject_dir, json_files[0]), 'r', encoding='utf-8') as jf:
            jdata = json.load(jf)
            orig_tokens = jdata.get("Origin token count")
            total_time_sec = float(jdata.get("Time", 0))
        if not orig_tokens or total_time_sec <= 0: return None
    except Exception:
        return None

    parsed_queries = []
    with open(query_file, 'r', encoding='utf-8') as qf:
        for line in qf:
            q = parse_query_line(line)
            if q: parsed_queries.append(q)

    if not parsed_queries: return None

    last_query_time = parsed_queries[-1]["time"]
    init_time = last_query_time - timedelta(seconds=total_time_sec)

    return {
        "orig_tokens": orig_tokens,
        "total_time_sec": total_time_sec,
        "init_time": init_time,
        "queries": parsed_queries
    }

def write_csv(out_file, reducer_data, intervals, subject_filter):
    headers = ["Reducer"] + [f"T<={int(t)}s" for t in intervals]
    csv_rows = [headers]

    for reducer in sorted(reducer_data.keys()):
        subjects_dict = reducer_data[reducer]
        valid_subjects = {k: v for k, v in subjects_dict.items() if subject_filter(k)}

        if not valid_subjects:
            continue

        row = [reducer]
        for t_k in intervals:
            pct_list = []
            for subj_name, data in valid_subjects.items():
                orig = data["orig_tokens"]
                valid_tokens = [q[1] for q in data["queries"] if q[0] <= t_k and q[1] is not None]

                if valid_tokens:
                    pct = (min(valid_tokens) / orig) * 100.0
                else:
                    pct = 100.0
                pct_list.append(pct)

            avg_pct = sum(pct_list) / len(pct_list) if pct_list else 100.0
            row.append(round(avg_pct, 2))

        csv_rows.append(row)

    with open(out_file, 'w', newline='', encoding='utf-8') as f:
        writer = csv.writer(f)
        writer.writerows(csv_rows)

def main():
    args = parse_args()
    reducer_data = defaultdict(dict)

    for reducer_dir in args.dirs:
        if not os.path.isdir(reducer_dir):
            continue

        reducer_name = os.path.basename(os.path.normpath(reducer_dir))

        for subject_name in os.listdir(reducer_dir):
            subject_dir = os.path.join(reducer_dir, subject_name)
            if not os.path.isdir(subject_dir): continue

            acc_data = get_subject_data(subject_dir)
            if not acc_data: continue

            merged_queries = []
            orig_tokens = acc_data["orig_tokens"]
            for q in acc_data["queries"]:
                elapsed = (q["time"] - acc_data["init_time"]).total_seconds()
                merged_queries.append((max(0, elapsed), q["tokens"]))

            if not merged_queries: continue

            reducer_data[reducer_name][subject_name] = {
                "orig_tokens": orig_tokens,
                "queries": merged_queries
            }

    STEP_S = 50.0
    LIMIT_S = 1000.0
    intervals_s = [float(i) for i in range(int(STEP_S), int(LIMIT_S) + int(STEP_S), int(STEP_S))]

    STEP_DEFAULT = 100.0
    LIMIT_DEFAULT = 3000.0
    intervals_default = [float(i) for i in range(int(STEP_DEFAULT), int(LIMIT_DEFAULT) + int(STEP_DEFAULT), int(STEP_DEFAULT))]

    base_name = args.output
    if base_name.endswith('.csv'):
        base_name = base_name[:-4]

    out_s = f"{base_name}_s.csv"
    out_l = f"{base_name}_l.csv"
    out_other = args.output

    def filter_s(name):
        match = re.search(r'Java-(\d+)', name)
        return match and 1 <= int(match.group(1)) <= 12

    def filter_l(name):
        match = re.search(r'Java-(\d+)', name)
        return match and 13 <= int(match.group(1)) <= 20

    def filter_other(name):
        return not (filter_s(name) or filter_l(name))

    if any(filter_s(s) for r in reducer_data.values() for s in r):
        write_csv(out_s, reducer_data, intervals_s, filter_s)

    if any(filter_l(s) for r in reducer_data.values() for s in r):
        write_csv(out_l, reducer_data, intervals_default, filter_l)

    if any(filter_other(s) for r in reducer_data.values() for s in r):
        write_csv(out_other, reducer_data, intervals_default, filter_other)

if __name__ == "__main__":
    main()