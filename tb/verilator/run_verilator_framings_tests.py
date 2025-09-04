#!/usr/bin/env python3
import subprocess
from pathlib import Path
import sys
import shutil

root = Path(__file__).resolve().parents[2]
temp_dir = root / "tb" / "tests" / "temp"
obj_dir = temp_dir / "obj_dir"

tb_dir = root / "tb" / "tests"
tb_file = tb_dir / "framings_tb.sv"
framing_root = root / "src" / "protocol" / "framings"

files = []
for subdir in ["constants", "utils", "requests", "responses"]:
    files.extend(sorted((framing_root / subdir).glob("*.sv")))
files.append(tb_file)

# Garante que o Verilator está disponível
if shutil.which("verilator") is None:
    print("Verilator não encontrado no PATH. Instale-o ou use ModelSim (vsim).")
    sys.exit(1)

obj_dir.mkdir(parents=True, exist_ok=True)
shutil.rmtree(obj_dir, ignore_errors=True)
cmd = [
    "verilator",
    "--sv",
    "--binary",
    "--top-module",
    "framings_tb",
    "-Wno-TIMESCALEMOD",
    "-Wno-WIDTHEXPAND",
    f"-I{tb_dir}",
] + ["-Mdir", str(obj_dir)] + [str(f) for f in files]
compile = subprocess.run(cmd, cwd=root, capture_output=True, text=True)
print(compile.stdout)
if compile.returncode != 0:
    print(compile.stderr)
    sys.exit(compile.returncode)

proc = subprocess.run([str(obj_dir / "Vframings_tb")], cwd=root, capture_output=True, text=True)
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
