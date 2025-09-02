#!/usr/bin/env python3
import subprocess
from pathlib import Path
import sys

root = Path(__file__).resolve().parents[2]
temp_dir = root / "tb" / "tests" / "temp"
obj_dir  = temp_dir / "obj_dir"

parser_root = root / "src" / "protocol" / "parsers" / "requests"
framing_root = root / "src" / "protocol" / "framings"
router_root = root / "src" / "protocol" / "routers"

tb_dir = root / "tb" / "tests"

tb_files = sorted(tb_dir.glob("*_request_parser_tb.sv"))
tb_files.append(tb_dir / "request_router_tb.sv")

files = []
files.extend(sorted((framing_root / "constants").glob("*.sv")))
files.extend(sorted((framing_root / "requests").glob("*.sv")))
files.extend(sorted(parser_root.glob("*.sv")))
files.extend(sorted(router_root.glob("*.sv")))

success = True
for tb in tb_files:
    # limpa diretório de build do Verilator em tb/tests/temp/obj_dir
    if obj_dir.exists():
        try:
            import shutil
            shutil.rmtree(obj_dir, ignore_errors=True)
        except Exception:
            pass
    obj_dir.mkdir(parents=True, exist_ok=True)

    top = tb.stem
    cmd = [
        "verilator",
        "--sv",
        "--binary",
        "--top-module",
        top,
        "-Wno-TIMESCALEMOD",
        "-Wno-WIDTHEXPAND",
    ] + ["-Mdir", str(obj_dir), f"-I{tb_dir}"] + [str(f) for f in files] + [str(tb)]

    compile = subprocess.run(cmd, cwd=root, capture_output=True, text=True)
    print(compile.stdout)
    if compile.returncode != 0:
        print(compile.stderr)
        success = False
        break

    proc = subprocess.run([str(obj_dir / f"V{top}")], cwd=root, capture_output=True, text=True)
    print(proc.stdout)
    if proc.returncode != 0 or "Sucesso" not in proc.stdout:
        print(proc.stderr)
        success = False
        break

if not success:
    sys.exit(1)

print("Todos os testes de parser passaram com sucesso.")
