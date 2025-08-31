# Testes de Physical Constraints e Timing Constraints (Gowin)

Este roteiro documenta como vamos executar e iterar testes de constraints físicos (.cst) e de timing (.sdc) para o projeto, usando como referência os guias oficiais da Gowin.

Referências oficiais
- Physical Constraints (CST): https://cdn.gowinsemi.com.cn/SUG935E.pdf
- Timing Constraints (SDC): https://cdn.gowinsemi.com.cn/SUG940E.pdf

Objetivos
- Fixar pinos e atributos de I/O (IO_TYPE, DRIVE, SLEW, PULL, GCLK/HCLK) via arquivo `.cst` e validar efeitos de PnR.
- Definir o clock e exceções de temporização via `.sdc` e medir WNS/TNS e slacks de setup/hold.
- Rodar variações (ex.: período do clock, DRIVE/SLEW de pinos críticos) para encontrar a melhor configuração.

Pré‑requisitos
- Projeto Gowin configurado: `spi_cnc_controller.gprj`.
- Fluxo de build por linha de comando: `'open_project spi_cnc_controller.gprj; run all; run close; exit' | & gw_sh.exe` (PowerShell).
- Arquivos de constraints:
  - Physical: `src/spi_cnc_controller.cst` (atualmente vazio; será preenchido neste fluxo).
  - Timing: `constraints/timing.sdc` (será criado e adicionado ao projeto).

Arquivos/Relatórios gerados (após run all)
- Síntese: `impl/gwsynthesis/spi_cnc_controller_syn.rpt.html` (tem seção “Timing”, mas o PnR é a referência principal).
- PnR (timing e físicos):
  - `impl/pnr/spi_cnc_controller.rpt.txt` (resumo textual; indica arquivos .cst/.sdc usados).
  - `impl/pnr/spi_cnc_controller_tr_content.html` (Timing Reports com Summaries/Slacks/Paths).
  - `impl/pnr/*.pin.html` (pinout), `*.power.html` (power), `*.log` (mensagens).

## Passo a passo — Timing Constraints (SDC)

1) Criar `constraints/timing.sdc` com o clock do sistema

Exemplo (50 MHz = 20.000 ns; ajuste conforme a sua meta):
```tcl
# timing.sdc
create_clock -name sys_clk -period 20.000 [get_ports i_clk]
# reset assíncrono não temporizado
set_false_path -from [get_ports i_resetn]
```

2) (Opcional) Delays de I/O — modelo de interface externa

Se necessário, modele relações com o mundo externo (ex.: SPI):
```tcl
# Exemplo genérico — ajuste conforme sua placa e timing externo
# Entradas (chegada antes/depois da borda do i_clk)
#set_input_delay  -clock [get_clocks sys_clk] <valor_ns> [get_ports {pi_mosi pi_csn}]

# Saídas (requisitos do receptor externo)
#set_output_delay -clock [get_clocks sys_clk] <valor_ns> [get_ports {pi_miso bus_rdata[*]}]
```

3) (Opcional) Exceções adicionais

- Multicycle: apenas se houver caminhos com intenção de mais de 1 ciclo.
- False paths extras: apenas quando comprovadamente não temporizados.

4) Adicionar o `.sdc` ao projeto (`spi_cnc_controller.gprj`)

- Abra o `.gprj` no editor e inclua o arquivo SDC na lista de arquivos do projeto, ou adicione pelo IDE.

5) Rodar o fluxo completo (síntese + PnR)

- PowerShell: `'open_project spi_cnc_controller.gprj; run all; run close; exit' | & gw_sh.exe`
- Alternativa: `& gw_sh.exe -f .\build_gowin.tcl`

6) Coletar métricas de timing

- Verificar `impl/pnr/spi_cnc_controller_tr_content.html`:
  - Timing Summaries: WNS (Worst Negative Slack), TNS (Total Negative Slack), Worst Setup/Hold.
- Conferir `impl/pnr/spi_cnc_controller.rpt.txt` para confirmar “Timing Constraints File”.

7) Varredura de frequência (encontrar Fmax aproximado)

- Atualizar `-period` no `.sdc` (ex.: 20.000 ns → 16.667 ns → 12.500 ns → 10.000 ns).
- Repetir Passos 5 e 6; registrar WNS/TNS em cada ponto.

## Passo a passo — Physical Constraints (CST)

1) Fixar pinos no `.cst`

- Use o pinout atual de PnR como base (ver `impl/pnr/spi_cnc_controller.rpt.txt` → “Pinout by Port Name”) ou o esquemático da placa.
- Exemplo de sintaxe (consulte SUG935E para detalhes e variações por device/package):
```tcl
# Exemplo: associar portas a pinos e padrão elétrico (ajuste para seu package/bank)
set_io i_clk       -pin C8    -io_type LVCMOS18
set_io i_resetn    -pin F13   -io_type LVCMOS18 -pull up
set_io pi_sclk     -pin A9    -io_type LVCMOS18
set_io pi_csn      -pin G12   -io_type LVCMOS18 -pull up
set_io pi_mosi     -pin F14   -io_type LVCMOS18
set_io pi_miso     -pin F16   -io_type LVCMOS18 -drive 8 -slew fast
# Saídas exemplo
set_io {bus_rdata[0]} -pin B12 -io_type LVCMOS18 -drive 8 -slew slow
# ... repita para demais sinais conforme o seu mapa de pinos
```

2) Clocks globais e redes de clock

- Se necessário, aplique “Clock Net Constraints”/“GCLK Primitive Constraints” (ver SUG935E, seções 4.2.6–4.2.8 e Apêndice A.7/A.8) para garantir roteamento global adequado do `i_clk`.

3) Vref/Bank IO (quando aplicável)

- Configure Vref de bancos e padrões diferenciais caso seu design use essas features.

4) DRIVE/SLEW/PULL

- Varie `-drive` e `-slew` em saídas críticas (ex.: `pi_miso`) para observar impacto de SI/hold.

5) Rodar o fluxo e validar

- Repetir build (Passo 5 do Timing), comparar pinout (`*.pin.html`) e timing.

## Como rodar e onde olhar

- Rodar build: `'open_project spi_cnc_controller.gprj; run all; run close; exit' | & gw_sh.exe`
- Relatórios:
  - Timing: `impl/pnr/spi_cnc_controller_tr_content.html` (Summaries/Tables/Paths), `impl/pnr/spi_cnc_controller.rpt.txt`.
  - Físico: `impl/pnr/spi_cnc_controller.pin.html` (pinos), `impl/pnr/spi_cnc_controller.power.html` (power).

## Registro de experimentos

Use a tabela abaixo para anotar resultados de cada rodada:

| Run | Period (ns) | WNS (ns) | TNS (ns) | Worst Hold (ns) | MISO DRIVE/SLEW | Observações |
|-----|-------------|----------|----------|------------------|------------------|-------------|
| 01  | 20.000      |          |          |                  | 8/fast           | baseline SDC + CST |
| 02  | 16.667      |          |          |                  |                  |             |
| 03  | 12.500      |          |          |                  |                  |             |

Notas
- Consulte SUG935E para a sintaxe exata de cada constraint física suportada e exemplos de uso.
- Consulte SUG940E para a modelagem correta de clocks, atrasos de I/O e exceções de timing.
- Não exagere em false paths/multicycle: só aplique quando o comportamento for realmente intencional.
