# Script PowerShell para executar todos os testes do projeto.
# Uso: .\run_tests.ps1 <verilator|modelsim>
Param(
    [Parameter(Mandatory=$true)]
    [ValidateSet('verilator','modelsim')]
    [string]$simulator
)

switch ($simulator) {
    'verilator' {
        # Executa os testes com o simulador Verilator
        python tb/verilator/run_verilator_framings_tests.py
        python tb/verilator/run_verilator_parser_tests.py
        python tb/verilator/run_verilator_service_tests.py
    }
    'modelsim' {
        # Executa os testes com o ModelSim/Questa (necessita 'vsim' no PATH)
        if (-not (Get-Command vsim -ErrorAction SilentlyContinue)) {
            Write-Error "Modelsim (vsim) não encontrado no PATH."
            exit 1
        }
        vsim -c -do "tb/modelsim/run_all.tcl"
        if ($LASTEXITCODE -ne 0) { exit $LASTEXITCODE } else { exit 0 }
    }
}
