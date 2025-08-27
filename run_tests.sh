#!/usr/bin/env bash
# Script de shell para executar todos os testes do projeto.
# Uso: ./run_tests.sh <verilator|modelsim>
set -e

if [ $# -ne 1 ]; then
  echo "Uso: $0 <verilator|modelsim>" >&2
  exit 1
fi

simulator="$1"

case "$simulator" in
  verilator)
    # Executa os testes com o simulador Verilator
    python tb/verilator/run_verilator_framings_tests.py
    python tb/verilator/run_verilator_parser_tests.py
    python tb/verilator/run_verilator_service_tests.py
    ;;
  modelsim)
    # Executa os testes com o ModelSim/Questa (necessita 'vsim' no PATH)
    if ! command -v vsim >/dev/null 2>&1; then
      echo "Modelsim (vsim) não encontrado no PATH." >&2
      exit 1
    fi
    vsim -c -do "tb/modelsim/run_all.tcl"
    ;;
  *)
    echo "Simulador inválido: $simulator" >&2
    exit 1
    ;;
 esac
