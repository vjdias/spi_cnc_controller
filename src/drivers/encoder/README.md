# Encoder Incremental (TMCS-28) — Driver RTL

Driver sintetizável para decodificar encoder incremental do tipo AB(Z), tomando o TMCS-28 (Trinamic/AD) como referência. O módulo sincroniza e filtra A/B/Z, decodifica quadratura (X4), fornece posição com opção de wrap (módulo), sinaliza transições inválidas e estima velocidade em uma janela fixa de clock.

Referência
- TMCS-28 datasheet: https://www.analog.com/media/en/technical-documentation/data-sheets/TMCS-28_datasheet_rev1.80.pdf

Arquivo
- `quad_encoder_tmcs28_driver.sv`: implementação RTL.

Entradas/saídas
- Entradas:
  - `clk`, `rst_n`
  - `i_enc_a`, `i_enc_b`, `i_enc_z` (níveis digitais já ajustados ao IO da FPGA)
- Saídas:
  - `o_position[POS_WIDTH-1:0]`: posição (wrap por `MODULO` ou saturação 0..2^POS_WIDTH-1)
  - `o_step_pulse`: 1 ciclo por contagem válida
  - `o_dir`: 1 = A leading B (CW), 0 = CCW
  - `o_index_pulse`: pulso 1 ciclo na borda de Z
  - `o_illegal_pulse`: transição inválida (saltos 00↔11, 01↔10)
  - `o_velocity[31:0]`, `o_vel_valid`: contagem líquida por janela de `VEL_WINDOW_CYCLES`

Parâmetros
- `POS_WIDTH` (default 32): largura do registrador de posição.
- `FILTER_CYCLES` (default 0): ciclos de estabilidade para aceitar mudança (debounce A/B/Z).
- `RESET_ON_INDEX` (default 1): zera/ajusta posição na borda de Z.
- `INDEX_OFFSET` (default 0): posição atribuída ao detectar Z (útil para indexar 0 ou outro offset).
- `MODULO` (default 0): se >0, posição faz wrap em [0..MODULO-1]; senão satura.
- `VEL_WINDOW_CYCLES` (default 0): se >0, habilita saída de velocidade (contagem por janela).

Notas de uso
- Níveis elétricos: o módulo assume 0/1 limpos na FPGA. Ajuste com comparadores, Schmitt, ou line receivers se necessário.
- Quadratura X4: conta em todas as transições A/B. Se precisar X1/X2, podemos expor um parâmetro para reduzir a taxa de contagem.
- Index (Z): `RESET_ON_INDEX` permite zerar/ajustar automaticamente a posição ao passar pelo índice.
- Velocidade: a saída é uma contagem líquida por janela (positiva CW, negativa CCW). Ajuste `VEL_WINDOW_CYCLES` para equilibrar latência/ruído.

Exemplo (50 MHz)
```systemverilog
localparam int FCLK_HZ = 50_000_000;
localparam int FILT    = FCLK_HZ/500_000; // ~1 us de filtro (ajuste conforme ruído)
localparam int MOD     = 10_000;          // exemplo: contagem modular de 10k ticks
localparam int VWIN    = FCLK_HZ/1_000;   // janela de 1 ms para velocidade

logic [31:0] pos;
logic step, dir, z_pulse, ill;
logic signed [31:0] vel; logic vel_v;

quad_encoder_tmcs28_driver #(
  .POS_WIDTH(32),
  .FILTER_CYCLES(FILT),
  .RESET_ON_INDEX(1'b1),
  .INDEX_OFFSET(0),
  .MODULO(MOD),
  .VEL_WINDOW_CYCLES(VWIN)
) u_enc (
  .clk           (i_clk),
  .rst_n         (i_resetn),
  .i_enc_a       (enc_a),
  .i_enc_b       (enc_b),
  .i_enc_z       (enc_z),
  .o_position    (pos),
  .o_step_pulse  (step),
  .o_dir         (dir),
  .o_index_pulse (z_pulse),
  .o_illegal_pulse(ill),
  .o_velocity    (vel),
  .o_vel_valid   (vel_v)
);
```

Constraints (sugestões)
- `.cst`: escolha IO_TYPE e resistores de `-pull` adequados, considere drive/slew em entradas/saídas envolvidas.
- `.sdc`: crie o `create_clock` do sistema; entradas do encoder são assíncronas — a sincronização (2 FF) já está no RTL; evite false paths globais impróprios.
