#!/usr/bin/env bash
set -e

usage() {
  echo "Usage: $0 [verilator|modelsim]" >&2
  exit 1
}

if [ $# -ne 1 ]; then
  usage
fi

case "$1" in
  verilator)
    python3 tb/verilator/run_verilator_framings_tests.py
    python3 tb/verilator/run_verilator_parser_tests.py
    python3 tb/verilator/run_verilator_service_tests.py
    ;;
  modelsim)
    if ! command -v vsim >/dev/null 2>&1; then
      echo "Modelsim (vsim) not found in PATH" >&2
      exit 1
    fi
    vsim -c -do "tb/modelsim/run_all.tcl"
    ;;
  *)
    usage
    ;;
esac

