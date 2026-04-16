# Artifact for "Semantics-Guided Prioritization for Efficient Program Reduction"

## Introduction
Thank you for evaluating this artifact.

To evaluate this artifact, a Linux machine with docker is needed.
## Benchmark Suites

Under the root directory of the project, the benchmarks are located in:

- `./c_benchmarks`: Benchmark-C which consists of 32 C programs;
- `./java_benchmarks`: Benchmark-Java which consists of 20 java programs.

## Environment Setup
1. Install the docker image.
   ```shell
   docker pull spreduce/spreduce:latest
   ```
2. Start a container
   ```shell
   docker container run --cap-add SYS_PTRACE --interactive --tty spreduce/spreduce:latest /bin/bash
   ```

## Notes
- All the experiments take very long time to finish, so it is recommended to use tools like screen and tmux to manage sessions if the experiments are run on remote server.

- For all operations in docker, use 'sudo' when meeting permission denied issues, password is 123

## RQ1 (Performance)
```shell
# For C Benchmarks:
cd /tmp/cenv
./run_stat_parallel_c.py -s c_benchmarks/* -r spreduce creduce perses_wprobdd vulcan -o stat_result_c
# Run convert_result_to_csv.py to export the results into csv files, use '-h' to see usage notes
./convert_result_to_csv.py -d stat_result_c/spreduce_0/* -o spreduce.csv
./convert_result_to_csv.py -d stat_result_c/creduce_0/* -o creduce.csv
./convert_result_to_csv.py -d stat_result_c/perses_wprobdd_0/* -o perses_wprobdd.csv
./convert_result_to_csv.py -d stat_result_c/vulcan_0/* -o vulcan.csv
# Run parse_reduce_process.py to export the reduce process into csv files
./parse_reduce_process.py -d stat_result_c/* -o process_c.csv 
# For Java benchmarks:
cd /tmp/javaenv
./run_stat_parallel_java.py -s java_benchmarks/* -r spreduce creduce perses_wprobdd vulcan -o stat_result_java
# Run convert_result_to_csv.py to export the results into csv files, use '-h' to see usage notes
./convert_result_to_csv.py -d stat_result_java/spreduce_0/* -o spreduce.csv
./convert_result_to_csv.py -d stat_result_java/creduce_0/* -o creduce.csv
./convert_result_to_csv.py -d stat_result_java/perses_wprobdd_0/* -o perses_wprobdd.csv
./convert_result_to_csv.py -d stat_result_java/vulcan_0/* -o vulcan.csv
# Run parse_reduce_process.py to export the reduce process into csv files, the output is in process_java_s.csv and process_java_l.csv
./parse_reduce_process.py -d stat_result_java/* -o process_java.csv 
```

## RQ2 (Generalizability)

```shell
# For C Benchmarks:
cd /tmp/cenv
./run_stat_parallel_c.py -s c_benchmarks/* -r spreduce_coarse -o stat_result_c
cp -rf stat_result_c/spreduce_coarse_0 spreduce_coarse
./run_stat_parallel_c.py -s spreduce_coarse/* -r creduce perses_wprobdd vulcan -o acc_stat_result_c
./convert_result_to_csv.py -d stat_result_c/spreduce_coarse_0/* -o spreduce.csv
./convert_result_to_csv.py -d acc_stat_result_c/creduce_0/* -o creduce.csv
./convert_result_to_csv.py -d acc_stat_result_c/perses_wprobdd_0/* -o perses_wprobdd.csv
./convert_result_to_csv.py -d acc_stat_result_c/vulcan_0/* -o vulcan.csv
# For Java benchmarks:
cd /tmp/javaenv
./run_stat_parallel_java.py -s java_benchmarks/* -r spreduce_coarse -o stat_result_java
cp -rf stat_result_java/spreduce_coarse_0 spreduce_coarse
./run_stat_parallel_java.py -s spreduce_coarse/* -r creduce perses_wprobdd vulcan -o acc_stat_result_java
./convert_result_to_csv.py -d stat_result_java/spreduce_coarse_0/* -o spreduce_coarse.csv
./convert_result_to_csv.py -d acc_stat_result_java/creduce_0/* -o creduce.csv
./convert_result_to_csv.py -d acc_stat_result_java/perses_wprobdd_0/* -o perses_wprobdd.csv
./convert_result_to_csv.py -d acc_stat_result_java/vulcan_0/* -o vulcan.csv
```
## RQ3 (Ablation)
```shell
# For C Benchmarks:
cd /tmp/cenv
./run_stat_parallel_c.py -s c_benchmarks/* -r spreduce spreduce_blank spreduce_s spreduce_sc -o stat_result_c
./convert_result_to_csv.py -d stat_result_c/spreduce_0/* -o spreduce.csv
./convert_result_to_csv.py -d stat_result_c/spreduce_blank_0/* -o spreduce_blank.csv
./convert_result_to_csv.py -d stat_result_c/spreduce_s_0/* -o spreduce_s.csv
./convert_result_to_csv.py -d stat_result_c/spreduce_sc_0/* -o spreduce_sc.csv
# For Java benchmarks:
cd /tmp/javaenv
./run_stat_parallel_java.py -s java_benchmarks/* -r spreduce spreduce_blank spreduce_s spreduce_sc -o stat_result_java
./convert_result_to_csv.py -d stat_result_java/spreduce_0/* -o spreduce.csv
./convert_result_to_csv.py -d stat_result_java/spreduce_blank_0/* -o spreduce_blank.csv
./convert_result_to_csv.py -d stat_result_java/spreduce_s_0/* -o spreduce_s.csv
./convert_result_to_csv.py -d stat_result_java/spreduce_sc_0/* -o spreduce_sc.csv
```