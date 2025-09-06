# Constraints (CST/SDC) — Decisões e Motivações

Este diretório reúne as constraints físicas (.cst) e de temporização (.sdc) do projeto.

Decisões tomadas
- Clock do sistema: 27 MHz
  - `create_clock -period 37.037 [get_ports i_clk]` em `timing.sdc`.
  - Motivo: eliminar WARN TA1132 ("clock determinado mas não criado") e habilitar análise de timing
    correta (WNS/TNS) no PnR.
- Reset assíncrono: `set_false_path -from [get_ports i_resetn]`
  - Motivo: evitar rotas irrealistas no caminho de reset, que não precisa cumprir setup/hold.
- Domínio SPI (`pi_sclk`): clock de porta criado e domínios marcados como assíncronos
  - `create_clock -name pi_sclk -period 100.000 [get_ports {pi_sclk}]` (placeholder 10 MHz; ajuste conforme sua taxa)
  - `set_clock_groups -asynchronous -group {sys_clk} -group {pi_sclk}` para não forçar análise entre domínios
  - Motivo: remover WARN TA1132 (clock detectado e não criado) e evitar análise de paths CDC incorretos.

Packages: parameter → localparam
- Em diversos packages (ex.: `spi_service_pkg`, packages de framings), parâmetros internos foram
  trocados de `parameter` para `localparam`.
- Motivo: o sintetizador (Gowin) reporta WARN EX2582 informando que parâmetros dentro de package são
  tratados como `localparam`. Em SystemVerilog, valores em package não são sobrescritos via instanciação.
  Ajuste mantém a semântica e remove os avisos.

Arquivos criados/alterados
- `constraints/timing.sdc`: define o clock do sistema e exceções básicas.
- `src/spi_cnc_controller.cst`: pinout/atributos de IO; encoder ABZ mapeado para pinos GCLK (A/B) e próximo (Z).
- Packages `*_pkg.sv`: FRAME_BITS e valores derivados como `localparam`.

Próximos passos
- Ajustar `timing.sdc` para o domínio SPI (período real ou declarar assíncrono).
- Completar/ajustar `spi_cnc_controller.cst` conforme o esquemático/placa.

## Sweep (varredura) e melhoria de timing

- O que é sweep: executar síntese/PNR repetidas vezes variando um parâmetro (período de clock, delays de I/O, etc.) para comparar WNS/TNS e caminhos críticos.
- Scripts:
  - `scripts/run_gowin_sweep.tcl` (varre sys_clk 27/135 MHz)
  - `scripts/run_gowin_spi_sweep.tcl` (varre pi_sclk 50/100 MHz com sys_clk=27 MHz)
  - Relatórios em `impl/pnr/reports/*`.

### Pipeline no SPI RX Hub (baixo impacto)

- Mudança: inserimos 1 estágio de registro no `spi_rx_hub_service.sv` (versão sintetizável) para processar cada byte no ciclo seguinte ao da leitura da FIFO. Mantém throughput de 1 byte/ciclo (duas regs: preload e process), adiciona +1 ciclo de latência.
- Motivação: reduzir a profundidade combinatória no caminho `ctx -> feed() -> ctx` do roteador de requisições.
- Efeito medido (após PNR):
  - sys 27 MHz: caminho crítico ≈ 14,83 ns (slack +28,68 ns)
  - sys 135 MHz: slack ≈ +0,06 ns (fecha no limite), caminho crítico ≈ 13,82 ns
- Locais úteis:
  - Código: `src/services/spi/spi_rx_hub_service.sv`
  - Caminhos: `impl/pnr/reports/timing_27.timing_paths` e `timing_135.timing_paths`

### I/O timing do SPI

- Adicionamos `set_input_delay`/`set_output_delay` provisórios relativos a `pi_sclk` em:
  - `constraints/timing.sdc`, `constraints/timing_27_spi50.sdc`, `constraints/timing_27_spi100.sdc`
- Ajuste esses valores com base no datasheet do mestre SPI (ex.: Raspberry Pi) para refletir melhor tSU/tH no receptor.
