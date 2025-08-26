#!/usr/bin/env python3
import subprocess
from pathlib import Path
import sys
import shutil

root = Path(__file__).resolve().parents[2]

tb_file = root / "tb" / "verilator" / "framings_tb.sv"
framing_root = root / "src" / "protocol" / "framings"

files = []
for subdir in ["constants", "utils", "requests", "responses"]:
    files.extend(sorted((framing_root / subdir).glob("*.sv")))
files.append(tb_file)

shutil.rmtree(root / "obj_dir", ignore_errors=True)
cmd = [
    "verilator",
    "--sv",
    "--binary",
    "--top-module",
    "framings_tb",
    "-Wno-TIMESCALEMOD",
    "-Wno-WIDTHEXPAND",
] + [str(f) for f in files]
compile = subprocess.run(cmd, cwd=root, capture_output=True, text=True)
print(compile.stdout)
if compile.returncode != 0:
    print(compile.stderr)
    sys.exit(compile.returncode)

proc = subprocess.run(["./obj_dir/Vframings_tb"], cwd=root, capture_output=True, text=True)
print(proc.stdout)
if proc.returncode != 0:
    print(proc.stderr)
    sys.exit(proc.returncode)

expected = [
    "test_bytes_util",
    "test_start_move_request",
    "test_move_home_request",
    "test_move_probe_level_request",
    "test_fpga_status_request",
    "test_move_queue_status_request",
    "test_move_end_request",
    "test_move_queue_add_request",
    "test_start_move_response",
    "test_move_end_response",
    "test_move_home_response",
    "test_move_queue_status_response",
    "test_fpga_status_response",
    "test_move_queue_add_response",
    "test_move_probe_level_response",
]

for name in expected:
    if f"Sucesso: {name}" not in proc.stdout:
        print(f"Falha: {name}")
        sys.exit(1)

print("Todos os testes passaram com sucesso.")
