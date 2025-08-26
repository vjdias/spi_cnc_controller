#!/usr/bin/env python3
import subprocess
from pathlib import Path
import sys

root = Path(__file__).resolve().parents[2]

parser_root = root / "src" / "protocol" / "parsers" / "requests"
framing_root = root / "src" / "protocol" / "framings"

tb_file = root / "tb" / "tests" / "move_home_request_parser_tb.sv"

files = []
files.extend(sorted((framing_root / "constants").glob("*.sv")))
files.extend(sorted((framing_root / "requests").glob("move_home_request_pkg.sv")))
files.extend(sorted(parser_root.glob("*.sv")))
files.append(tb_file)

subprocess.run(["rm", "-rf", str(root / "obj_dir")])

cmd = [
    "verilator",
    "--sv",
    "--binary",
    "--top-module",
    "move_home_request_parser_tb",
    "-Wno-TIMESCALEMOD",
    "-Wno-WIDTHEXPAND",
] + [str(f) for f in files]

compile = subprocess.run(cmd, cwd=root, capture_output=True, text=True)
print(compile.stdout)
if compile.returncode != 0:
    print(compile.stderr)
    sys.exit(compile.returncode)

proc = subprocess.run(["./obj_dir/Vmove_home_request_parser_tb"], cwd=root, capture_output=True, text=True)
print(proc.stdout)
if proc.returncode != 0:
    print(proc.stderr)
    sys.exit(proc.returncode)

if "Sucesso: test_move_home_request_parser" not in proc.stdout:
    print("Falha: test_move_home_request_parser")
    sys.exit(1)

print("Todos os testes de parser passaram com sucesso.")
