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
