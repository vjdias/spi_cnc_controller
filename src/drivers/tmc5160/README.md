# TMC5160 STEP/DIR Driver (sem SPI)

Este diretório contém um driver sintetizável para gerar sinais STEP/DIR/ENN ao TMC5160A no modo de interface de passos (Step/Dir). A configuração via SPI (corrente, microsteps, rampas, proteções etc.) deve ser feita externamente (ex.: Raspberry Pi), conforme solicitado.

Referência principal
- Datasheet TMC5160A (Analog Devices / Trinamic): https://www.analog.com/media/en/technical-documentation/data-sheets/TMC5160A_datasheet_rev1.18.pdf

## Arquivo
- `tmc5160_step_dir_driver.sv`: gera pulsos STEP com período/largura configuráveis, controla DIR e ENN.

## Sinais de I/O
- Entradas (todas síncronas ao `clk`):
  - `clk`, `rst_n`: clock e reset ativo-baixo.
  - `i_enable`: 1 habilita o driver. Mapeado para `o_enn` (ativo-baixo por padrão).
  - `i_dir`: direção desejada (1 = frente/direita; 0 = trás/esquerda). Polaridade ajustável por parâmetro.
  - `i_start`: pulso de 1 ciclo para iniciar emissão de passos.
  - `i_stop`: pulso de 1 ciclo para parar imediatamente.
  - `i_continuous`: 1 = gera passos contínuos até receber `i_stop` (ou `i_enable=0`).
  - `i_steps[31:0]`: contagem de passos quando `i_continuous=0`.
  - `i_period_cycles[31:0]`: período total entre bordas de subida de STEP (em ciclos de `clk`).
  - `i_pulse_cycles[31:0]`: largura do pulso STEP (em ciclos de `clk`).
- Saídas:
  - `o_step`: pulso STEP com polaridade configurável.
  - `o_dir`: direção com polaridade configurável.
  - `o_enn`: enable para TMC5160 (por padrão ativo-baixo, compatível com pino ENN).
  - `o_busy`: 1 durante geração de passos.
  - `o_done_pulse`: pulso de 1 ciclo quando termina a contagem (não contínuo).

## Parâmetros
- `STEP_ACTIVE_HIGH` (default 1): 1 = STEP alto durante pulso; 0 = ativo-baixo.
- `DIR_ACTIVE_HIGH`  (default 1): 1 = `i_dir=1` produz `o_dir=1`; 0 = invertido.
- `ENN_ACTIVE_LOW`   (default 1): 1 = `o_enn` sai ativo-baixo (padrão TMC5160).
- `DIR_SETUP_CYCLES` (default 0): ciclos de `clk` para garantir setup de DIR antes do próximo STEP.

## Requisitos de temporização (datasheet)
- Atenda aos tempos mínimos de pulso STEP alto/baixo (tWH/tWL) e ao setup/hold de DIR em relação ao STEP.
- Ajuste `i_pulse_cycles`, `i_period_cycles` e `DIR_SETUP_CYCLES` conforme a frequência de `clk` e os tempos mínimos do datasheet.
- Recomenda-se manter margem (ex.: alguns microssegundos) para robustez.

## Exemplo de uso
Clock do sistema 50 MHz (20 ns). Queremos ~20 kHz de passos (período ~50 µs) e pulso de 5 µs.

```systemverilog
localparam int FCLK_HZ = 50_000_000;
localparam int PERIOD_CYC = 50_000_000 / 20_000; // ~2500 ciclos (~50 us)
localparam int PULSE_CYC  = (FCLK_HZ / 1_000_000) * 5; // 5 us => ~250 ciclos

logic step, dir, enn;
logic busy, done;

// DIR setup ~5 us
localparam int DIR_SETUP = (FCLK_HZ / 1_000_000) * 5; // ~250 ciclos

tmc5160_step_dir_driver #(
  .STEP_ACTIVE_HIGH(1),
  .DIR_ACTIVE_HIGH(1),
  .ENN_ACTIVE_LOW(1),
  .DIR_SETUP_CYCLES(DIR_SETUP)
) u_stepdir (
  .clk              (i_clk),
  .rst_n            (i_resetn),
  .i_enable         (1'b1),
  .i_dir            (dir_cmd),
  .i_start          (start_pulse),
  .i_stop           (stop_pulse),
  .i_continuous     (1'b0),
  .i_steps          (32'd1000),
  .i_period_cycles  (PERIOD_CYC),
  .i_pulse_cycles   (PULSE_CYC),
  .o_step           (step),
  .o_dir            (dir),
  .o_enn            (enn),
  .o_busy           (busy),
  .o_done_pulse     (done)
);
```

## Integração com TMC5160
- Conectar `o_step` → STEP, `o_dir` → DIR, `o_enn` → ENN.
- Garantir que o TMC5160 esteja em modo Step/Dir (pinos de configuração e/ou registros via SPI).
- Parâmetros de microstepping, corrente, sentido do eixo, rampas, proteções etc. devem ser programados via SPI (fora deste módulo).

## Sugestões de Constraints
- Physical (.cst): defina IO_TYPE do STEP/DIR/ENN (ex.: LVCMOS18/33) e ajuste `-drive/-slew` conforme integridade de sinal e frequência de passo.
- Timing (.sdc): crie o clock e (opcionalmente) restrinja saídas com `set_output_delay` se houver receptor com requisitos específicos. Considere também manter `DIR` estável por `DIR_SETUP_CYCLES` antes do STEP via lógica (já parametrizado no RTL).

## Notas
- Não há SPI neste módulo; a interface é exclusivamente STEP/DIR/ENN. Controle por SPI deve vir, por exemplo, do Raspberry Pi.
- Verifique níveis lógicos/compatibilidade elétrica entre FPGA e TMC5160 (normalmente 3V3 tolerado). Ajuste level shifting se necessário.
