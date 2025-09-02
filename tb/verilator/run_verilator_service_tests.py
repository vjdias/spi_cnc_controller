#!/usr/bin/env python3
import subprocess
import shutil
from pathlib import Path
import sys

root = Path(__file__).resolve().parents[2]
temp_dir = root / "tb" / "tests" / "temp"
obj_dir  = temp_dir / "obj_dir"

service_root   = root / "src" / "services"
integrations_root = service_root / "integrations"
package_root   = integrations_root / "packages"
interface_root = integrations_root / "interfaces"
parser_root    = root / "src" / "protocol" / "parsers" / "requests"
framing_root   = root / "src" / "protocol" / "framings"
router_root    = root / "src" / "protocol" / "routers"
driver_root    = root / "src" / "drivers"

tb_dir = root / "tb" / "tests"

tb_files = [
    tb_dir / "spi_rx_mosi_service_tb.sv",
    tb_dir / "spi_rx_mosi_flow_tb.sv",
    tb_dir / "spi_rx_hub_service_tb.sv",
    tb_dir / "spi_tx_buffer_tb.sv",
    tb_dir / "spi_full_flow_led_20_tb.sv",
    tb_dir / "spi_tx_hub_service_tb.sv",
]

files = []
files.extend(sorted((framing_root / "constants").glob("*.sv")))
files.extend(sorted((framing_root / "requests").glob("*.sv")))
files.extend(sorted((framing_root / "responses").glob("*.sv")))
files.extend(sorted(parser_root.glob("*.sv")))
files.extend(sorted(router_root.glob("*.sv")))
files.extend(sorted(package_root.glob("*.sv")))
files.extend(sorted(interface_root.glob("*.sv")))
files.extend(sorted(service_root.glob("*.sv")))
# também pega subpastas relevantes em services
for sub in ["spi", "led", "motion"]:
    subdir = service_root / sub
    if subdir.exists():
        files.extend(sorted(subdir.glob("*.sv")))

# Drivers necessários pelo motion_service
files.extend(sorted((driver_root / "tmc5160").glob("*.sv")))
files.extend(sorted((driver_root / "motion").glob("*.sv")))

success = True
for tb in tb_files:
    # remove obj_dir (tb/tests/temp/obj_dir) de forma portável
    if obj_dir.exists():
        shutil.rmtree(obj_dir, ignore_errors=True)
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
        "-Wno-LATCH",
        "-Wno-WIDTHTRUNC",
        f"-I{tb_dir}",
    ] + ["-Mdir", str(obj_dir)] + [str(f) for f in files] + [str(tb)]

    # Garante que o Verilator está disponível
    if shutil.which("verilator") is None:
        print("Verilator não encontrado no PATH. Instale-o ou use ModelSim (vsim).")
        sys.exit(1)

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

print("Todos os testes de serviços passaram com sucesso.")
