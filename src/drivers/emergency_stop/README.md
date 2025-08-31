# Emergency Stop (E‑STOP) Driver

Driver sintetizável para botão de Parada de Emergência com sincronização, debounce, suporte a fiação NC/NO e opção de travamento (latch) até um clear explícito.

Arquivo
- `emergency_stop_driver.sv`: módulo RTL com entradas/saídas abaixo e parâmetros de configuração.

Sinais
- Entradas:
  - `clk`, `rst_n`: clock e reset ativo‑baixo.
  - `i_estop_in`: nível lógico do E‑STOP já adequado à tensão da FPGA (use condicionamento de sinal).
  - `i_clear`: pulso de limpeza do latch quando for seguro liberar.
- Saídas:
  - `o_estop_active`: 1 quando E‑STOP está ativo (após debounce e latch, se habilitado).
  - `o_estop_engage_pulse`: pulso de 1 ciclo quando o E‑STOP engata.
  - `o_estop_release_pulse`: pulso de 1 ciclo quando o E‑STOP libera.
  - `o_inhibit`: 1 para inibir atuadores/movimentos (intertravamento geral do sistema).

Parâmetros
- `IS_NORMALLY_CLOSED` (default 1):
  - 1 = fiação NC (fail‑safe): ativo quando a linha indica abertura/falha; 0 = NO.
- `DEBOUNCE_CYCLES` (default 0):
  - número de ciclos de `clk` para confirmar mudanças (0 desativa debounce).
- `LATCH_UNTIL_CLEAR` (default 1):
  - 1 = mantém estado de E‑STOP travado até `i_clear` em condição segura; 0 = segue apenas o nível.
- `CLEAR_HOLDOFF_CYCLES` (default 0):
  - tempo mínimo (em ciclos) que a entrada deve permanecer segura antes de aceitar o `i_clear`.

Exemplo (50 MHz)
```systemverilog
localparam int FCLK_HZ        = 50_000_000;
localparam int DEB_5MS        = FCLK_HZ/200;      // ~5 ms
localparam int CLEAR_HOLD_50MS= FCLK_HZ/20;       // ~50 ms

emergency_stop_driver #(
  .IS_NORMALLY_CLOSED(1'b1),
  .DEBOUNCE_CYCLES(DEB_5MS),
  .LATCH_UNTIL_CLEAR(1'b1),
  .CLEAR_HOLDOFF_CYCLES(CLEAR_HOLD_50MS)
) u_estop (
  .clk                 (i_clk),
  .rst_n               (i_resetn),
  .i_estop_in          (estop_in_logic), // já nivelado (0/1) p/ FPGA
  .i_clear             (estop_clear_pulse),
  .o_estop_active      (estop_active),
  .o_estop_engage_pulse(estop_eng_pulse),
  .o_estop_release_pulse(estop_rel_pulse),
  .o_inhibit           (inhibit_all)
);
```

Notas elétricas
- Em campo, E‑STOP costuma ser NC (fail‑safe): circuito abre quando acionado ou em falha.
- Condicione o sinal (isolação/optocoupler, filtros, pull‑ups/pull‑downs) antes do pino da FPGA.

Constraints (sugestões)
- Physical (.cst): defina `-pull` coerente com sua topologia (NC/NO) e `IO_TYPE` (ex.: LVCMOS33/18) do pino do E‑STOP.
- Timing (.sdc): a entrada é assíncrona; a sincronização de 2 FF já está no RTL. Não aplique falsas exceções indiscriminadamente.
