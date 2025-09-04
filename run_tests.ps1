<#
 Script PowerShell para executar os testes e, ao final,
 acionar a build do Gowin via gw_sh.exe com o script TCL.

 Uso: .\run_tests.ps1 <verilator|modelsim>
#>
Param(
    [Parameter(Mandatory=$true)]
    [ValidateSet('verilator','modelsim')]
    [string]$simulator
)

$testExitCode = 0

switch ($simulator) {
    'verilator' {
        # Executa os testes com o simulador Verilator
        Write-Host 'INFO: Executando testes com Verilator'
        python tb/verilator/run_verilator_framings_tests.py
        if ($LASTEXITCODE -ne 0) { Write-Error 'Falha em framings tests (Verilator)'; $testExitCode = $LASTEXITCODE }

        python tb/verilator/run_verilator_parser_tests.py
        if ($LASTEXITCODE -ne 0) { Write-Error 'Falha em parser tests (Verilator)'; if ($testExitCode -eq 0) { $testExitCode = $LASTEXITCODE } }

        python tb/verilator/run_verilator_service_tests.py
        if ($LASTEXITCODE -ne 0) { Write-Error 'Falha em service tests (Verilator)'; if ($testExitCode -eq 0) { $testExitCode = $LASTEXITCODE } }
    }
    'modelsim' {
        # Executa os testes com o ModelSim/Questa (necessita 'vsim' no PATH)
        Write-Host 'INFO: Executando testes com ModelSim/Questa'
        if (-not (Get-Command vsim -ErrorAction SilentlyContinue)) {
            Write-Error 'Modelsim (vsim) nao encontrado no PATH.'
            $testExitCode = 1
        } else {
            # Limpa bibliotecas 'work*' da RAIZ do projeto para evitar sujeira
            $root = $PSScriptRoot
            $workDirs = @('work','work_top','work_tmp','work_iso')
            foreach ($d in $workDirs) {
                $p = Join-Path $root $d
                if (Test-Path $p) {
                    Write-Host ("INFO: Removendo diretório residual: {0}" -f $p)
                    Remove-Item -Recurse -Force -ErrorAction SilentlyContinue $p
                }
            }

            # Remove transcript antigo da raiz, direcionando novo para temp
            $oldTranscript = Join-Path $root 'transcript'
            if (Test-Path $oldTranscript) { Remove-Item -Force -ErrorAction SilentlyContinue $oldTranscript }

            # Garante diretório temporário de simulação
            $tempDir = Join-Path $root 'tb/tests/temp'
            if (-not (Test-Path $tempDir)) { New-Item -ItemType Directory -Path $tempDir | Out-Null }

            # Define local do transcript dentro do temp
            $transcriptPath = Join-Path $tempDir 'transcript'

            vsim -c -l $transcriptPath -modelsimini 'tb/modelsim/modelsim.ini' -do 'tb/modelsim/run_all.tcl'
            if ($LASTEXITCODE -ne 0) { $testExitCode = $LASTEXITCODE }

            # Analisa o transcript em busca de falhas reportadas pelos TBs (linhas com "Falha:")
            if (Test-Path $transcriptPath) {
                $failLines = Select-String -Path $transcriptPath -Pattern 'Falha:\s*' -SimpleMatch -ErrorAction SilentlyContinue
                if ($failLines) {
                    $failCount = $failLines.Count
                    # Extrai o texto após 'Falha:' em cada linha
                    $failNames = @()
                    foreach ($ln in $failLines) {
                        $name = ($ln.Line -replace '.*Falha:\s*','').Trim()
                        if ($name) { $failNames += $name } else { $failNames += '(sem_nome)' }
                    }
                    Write-Error ("TEST FALHAS DETECTADAS: quantidade={0}" -f $failCount)
                    Write-Error ("Falhas: {0}" -f ($failNames -join ', '))
                    if ($testExitCode -eq 0) { $testExitCode = 1 }
                } else {
                    Write-Host "INFO: Nenhuma 'Falha:' encontrada no transcript."
                }
            } else {
                Write-Warning "Transcript nao encontrado em $transcriptPath; nao foi possivel inspecionar falhas."
            }
        }
    }
}

# ----------------------
# Execução do fluxo Gowin
# ----------------------

$gowinExitCode = 0
 
if (-not (Get-Command gw_sh.exe -ErrorAction SilentlyContinue)) {
    Write-Warning 'gw_sh.exe nao encontrado no PATH - pulando execucao do fluxo Gowin'
} else {
    try {
        Push-Location $PSScriptRoot
        # Pipe do one-liner diretamente para o gw_sh.exe
        'open_project spi_cnc_controller.gprj; run all; run close; exit' | & gw_sh.exe
        $gowinExitCode = $LASTEXITCODE
    } catch {
        Write-Error ('Falha ao executar gw_sh.exe: {0}' -f $_.Exception.Message)
        $gowinExitCode = 2
    } finally {
        Pop-Location
    }
}

# Código de saída final considera falhas dos testes ou da build Gowin
$finalExit = 0
if ($testExitCode -ne 0) { $finalExit = $testExitCode }
if ($gowinExitCode -ne 0) { if ($finalExit -eq 0) { $finalExit = $gowinExitCode } }

if ($finalExit -eq 0) {
    Write-Host 'INFO: Pipeline concluido com sucesso'
} else {
    Write-Error ('Pipeline concluido com falhas (exit={0})' -f $finalExit)
}

exit $finalExit
