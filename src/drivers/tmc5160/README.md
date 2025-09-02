# TMC5160 STEP/DIR Driver (sem SPI)

Este diretório contém um driver sintetizável para gerar sinais STEP/DIR/ENN ao TMC5160A no modo de interface de passos (Step/Dir). A configuração via SPI (corrente, microsteps, rampas, proteções etc.) deve ser feita externamente (ex.: Raspberry Pi), conforme solicitado.

Referência principal
- Datasheet TMC5160A (Analog Devices / Trinamic): https://www.analog.com/media/en/technical-documentation/data-sheets/TMC5160A_datasheet_rev1.18.pdf

## Arquivo
- `tmc5160_step_dir_driver.sv`: gera pulsos STEP com período/largura configuráveis (modo livre) ou por tick global + DDA (modo síncrono), controla DIR e ENN.

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
- `SYNC_MODE` (default 0): 0 = modo livre (período/largura por ciclos de `clk`), 1 = modo síncrono (tick global + DDA).
- `DDA_FRACT_BITS` (default 16): nº de bits fracionários do acumulador DDA (ex.: Q16.16).
- `DIR_SETUP_TICKS` (default 0): tempo de setup de DIR (em ticks do `i_tick`) no modo síncrono.

## Requisitos de temporização (datasheet)
- Atenda aos tempos mínimos de pulso STEP alto/baixo (tWH/tWL) e ao setup/hold de DIR em relação ao STEP.
- Modo livre: ajuste `i_pulse_cycles`, `i_period_cycles` e `DIR_SETUP_CYCLES` conforme `clk`.
- Modo síncrono: ajuste `i_pulse_ticks` e `DIR_SETUP_TICKS` conforme a base de tempo `i_tick`.
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

## Modo Síncrono: Tick Global + DDA (Q16.16)

Quando `SYNC_MODE=1`, o driver usa uma base de tempo comum (`i_tick`) para decidir simultaneamente, a cada tick, quais eixos devem emitir STEP. A decisão usa um acumulador em ponto fixo (DDA):

- `i_rate_inc` representa “passos por tick” em QN (default Q16.16). A cada tick: `acc += i_rate_inc`.
- Se `acc` cruza 1.0 (i.e., `acc >= 2^DDA_FRACT_BITS`), um STEP é emitido e `acc -= 1.0`.
- A largura do pulso é programada por `i_pulse_ticks` (em ticks de `i_tick`).
- `DIR_SETUP_TICKS` garante que a direção fique estável por N ticks antes do próximo STEP.

Conversão (exemplo):
- `tick_hz = 2 MHz` (Ttick = 0,5 µs). Velocidade alvo `v = 25.000 passos/s` → `rate = v/tick_hz = 0,0125 passo/tick`.
- Q16.16: `i_rate_inc = round(rate * 2^16) = 819`.

Vantagens
- Sincronismo “de verdade” entre eixos (pulsos que precisam coincidir acontecem no mesmo tick).
- Adequado para controle de velocidade e correções em malha fechada (PID), pois a base de tempo é comum.

Sinais adicionais (modo síncrono)
- `i_tick`: estrobo 1‑ciclo que marca cada tick da base de tempo.
- `i_rate_inc[31:0]`: incremento DDA por tick, em Q(DDA_FRACT_BITS).
- `i_pulse_ticks[15:0]`: largura do STEP em ticks.

Exemplo (modo síncrono)
```systemverilog
localparam int TICK_HZ = 2_000_000; // 2 MHz
localparam int Q = 16;              // Q16.16
localparam int ONE = 1 << Q;
// 25 ksteps/s => 0.0125 step/tick => ~819 em Q16.16
localparam int RATE_INC = (25_000 * ONE) / TICK_HZ;

logic tick_2mhz; // gerado por um divisor do clock

tmc5160_step_dir_driver #(
  .STEP_ACTIVE_HIGH(1),
  .DIR_ACTIVE_HIGH(1),
  .ENN_ACTIVE_LOW(1),
  .DIR_SETUP_TICKS(250),    // ~125 us @ 2 MHz, exemplo
  .SYNC_MODE(1),            // habilita modo síncrono
  .DDA_FRACT_BITS(16)
) u_stepdir (
  .clk              (i_clk),
  .rst_n            (i_resetn),
  .i_enable         (1'b1),
  .i_dir            (dir_cmd),
  .i_start          (start_pulse),
  .i_stop           (stop_pulse),
  .i_continuous     (1'b1),        // contínuo (ignora i_steps)
  .i_steps          (32'd0),
  .i_period_cycles  (32'd0),       // ignorados no modo síncrono
  .i_pulse_cycles   (32'd0),
  .i_tick           (tick_2mhz),
  .i_rate_inc       (RATE_INC),
  .i_pulse_ticks    (16'd10),      // 10 ticks @ 2 MHz => 5 us
  .o_step           (step),
  .o_dir            (dir),
  .o_enn            (enn),
  .o_busy           (busy),
  .o_done_pulse     ()
);
```

## Formato de ponto fixo (Q)

Para representar “passos por tick” com parte fracionária, o driver usa formato de ponto fixo (Q).

- Definição por extenso: formato de ponto fixo (Q) com N bits fracionários (QN). O valor real é o inteiro dividido por 2 elevado a N.
- Exemplo por extenso: dezesseis bits inteiros e dezesseis bits fracionários (Q16.16) — total de 32 bits, onde 1,0 equivale a 2^16.
- Parâmetro: o número de bits fracionários é configurado por `DDA_FRACT_BITS` (N).

Conversões úteis (escritas por extenso e com a abreviação em parênteses):
- De “passos por segundo” (steps/s) para incremento de taxa (i_rate_inc): `i_rate_inc = arredondar( passos_por_segundo ÷ tick_hz × 2^N )`.
- De incremento de taxa (i_rate_inc) para “passos por segundo” (steps/s): `passos_por_segundo = i_rate_inc × tick_hz ÷ 2^N`.
- Resolução mínima: um menor bit significativo (LSB) em `i_rate_inc` equivale a `tick_hz ÷ 2^N` passos por segundo (steps/s).

Observações práticas:
- Um passo por tick corresponde a 1,0 no formato de ponto fixo (Q), isto é, `i_rate_inc = 2^N`.
- A escolha de N (bits fracionários) faz o compromisso entre resolução de velocidade e faixa dinâmica. Com `tick_hz = 2 MHz` e N=16, um LSB ≈ 30,5 passos/s; com N=20, um LSB ≈ 1,9 passos/s.
- A taxa efetiva de passos é limitada pela base de tempo e pela largura do pulso: `f_step_max ≈ tick_hz ÷ i_pulse_ticks`.

## Fluxo recomendado com Raspberry Pi (G-code)

Cenário: o Raspberry Pi interpreta o G-code e envia comandos “fracionados” (velocidade por eixo ou segmentação temporal) para a FPGA. A FPGA gera os sinais STEP/DIR de todos os eixos, com sincronismo e baixa latência.

Visão geral do fluxo
- Planejamento no host: o Raspberry converte G-code em segmentos com vetor de direção (ex.: X,Y,Z) e feed (steps/s ou mm/s → steps/s por eixo).
- Tick comum: a FPGA (módulo `tick_gen.sv`) gera `o_tick` (p.ex. 1–4 MHz) e opcional `o_pid_tick` (amostragem do planner/PID mais lenta).
- DDA por eixo: cada `tmc5160_step_dir_driver` em `SYNC_MODE=1` recebe `i_tick=o_tick`, `i_rate_inc` (steps/tick em QN) e `i_pulse_ticks` (largura do STEP em ticks) e decide, a cada tick, se emite STEP.
- Start sincronizado: todos os eixos carregam parâmetros e iniciam juntos (use `o_sync_start` do `tick_gen` para alinhar `i_start` ao próximo `o_tick`).
- Atualizações suaves: a cada `o_pid_tick`, o host/controle pode atualizar `i_rate_inc` (rampa, blending de segmentos, correções de PID com encoder).

O que o host precisa enviar (por eixo)
- Direção: `i_dir` (1/0 para sentido). Pode mudar em movimento; respeite `DIR_SETUP_TICKS`.
- Velocidade: `i_rate_inc = round((steps_per_sec / tick_hz) * 2^Q)` (p.ex. Q=16 para Q16.16).
- Largura do STEP: `i_pulse_ticks` para atender `tWH_min` do datasheet com margem (e considerar `tWL_min`).
- Duração do segmento (opcional): em ticks ou em tempo; se quiser número fixo de passos, use `i_continuous=0` + `i_steps`.
- Início/fim: `i_start` para disparar; `i_stop` para parar imediato (assertado simultâneo para parar todos juntos).

Dimensionamento rápido (resumo)
- Teto de frequência: `f_step_max ≈ tick_hz / i_pulse_ticks` (modo síncrono).
- Passos por segundo desejados → `i_rate_inc` via fórmula acima.
- Tempos do datasheet: defina `i_pulse_ticks` e `DIR_SETUP_TICKS` com base em `tWH_min`, `tWL_min`, `tDIRsetup_min` e `tDIRhold_min`. Veja seção “Dimensionamento do STEP/DIR”.

Exemplo de segmento (conceito)
- `tick_hz = 2_000_000`, `Q=16`, vetor alvo (X,Y,Z) em steps/s = (1000, 2000, 3000)
- `i_rate_inc ≈ (33, 66, 98)`; `i_pulse_ticks=10` (≈5 µs); `DIR_SETUP_TICKS` conforme datasheet (ex.: 4)
- `i_continuous=0`, `i_steps=(10,20,30)` se quiser terminar juntos após contagens específicas; ou `i_continuous=1` + duração T do segmento controlada externamente.

Alternativas e trade‑offs
- Modo livre (SYNC_MODE=0): defina `i_period_cycles/i_pulse_cycles` por eixo; bom para testes simples, sem sincronismo fino por tick.
- Rampas internas do TMC5160 via SPI (sem Step/Dir): simplifica FPGA, porém sincronismo multi‑eixo e correções PID externas ficam limitados.

## Dimensionamento do STEP/DIR (datasheet TMC5160A)

A interface Step/Dir do TMC5160A impõe tempos mínimos de pulso STEP e de estabilidade da direção (DIR) em torno da borda de STEP. Consulte o datasheet (rev. 1.18) na seção de “Step/Dir timing” para os valores exatos de tWH (STEP alto), tWL (STEP baixo), tDIRsetup (DIR antes do STEP) e tDIRhold (DIR depois do STEP).

Este projeto permite ajustar essas grandezas via parâmetros/entradas e calcular os valores a partir de uma base de tempo comum (`tick_hz`) no modo síncrono:

- Base de tempo: `tick_hz` = frequência do `o_tick` gerado por `tick_gen.sv`.
- Largura do pulso em ticks: `i_pulse_ticks` (tempo do STEP alto = `i_pulse_ticks / tick_hz`).
- Setup de DIR em ticks: `DIR_SETUP_TICKS` (tempo de DIR estável antes do próximo STEP = `DIR_SETUP_TICKS / tick_hz`).

Recomendações práticas (seguir o datasheet e adotar margem):

1) Largura do pulso STEP
- Exija `i_pulse_ticks >= ceil(tWH_min * tick_hz)`.
- Recomende margem de 1,5× a 2× sobre o mínimo do datasheet.
- Observação importante: no modo síncrono, o design garante pelo menos 1 tick de tempo baixo entre pulsos; portanto, garanta também `1/tick_hz >= tWL_min`. Se `tWL_min` for maior que 1 tick, reduza `tick_hz` ou aumente `i_pulse_ticks` (e limite a taxa para assegurar mais de 1 tick baixo).

2) Direção (DIR) – setup/hold
- Configure `DIR_SETUP_TICKS >= ceil(tDIRsetup_min * tick_hz)` para que o driver espere a direção estabilizar antes do próximo STEP.
- O sinal DIR deve permanecer estável após a borda de subida do STEP por `tDIRhold_min`. A lógica atual já evita novo STEP durante o pulso e enquanto `DIR_SETUP_TICKS` não expira, mas a aplicação deve evitar alternar `i_dir` imediatamente após a borda do STEP se o seu `tick_hz` for muito alto. Caso precise garantir hold explícito, considere adicionar um “DIR_HOLD_TICKS” na integração superior (bloqueando mudanças de direção por alguns ticks após a borda do STEP).

3) Frequência máxima de passos (limite superior)
- No modo síncrono, enquanto o STEP está alto (`i_pulse_ticks`), nenhum novo passo nasce. Assim, aproximadamente: `f_step_max ≈ tick_hz / i_pulse_ticks`.
- Para uma taxa de passos desejada `f_step`, escolha `tick_hz` e `i_pulse_ticks` de modo que `f_step <= tick_hz / i_pulse_ticks` e, simultaneamente, `1/tick_hz >= tWL_min`.

4) Conversão de taxa (DDA)
- A cada `o_tick`, cada eixo soma `i_rate_inc` (QN). Gere `i_rate_inc` por eixo com: `i_rate_inc = round((steps_per_sec / tick_hz) * 2^Q)`.
- Ajuste `Q` (p.ex. 16 para Q16.16) para obter resolução adequada sem overflow.

5) Exemplo numérico (ilustrativo)
- Suponha `tick_hz = 2 MHz` (Ttick = 0,5 µs) e o datasheet exigir `tWH_min` na ordem de alguns microsegundos.
- Escolha `i_pulse_ticks = 10` → pulso de 5 µs (≥ mínimo + margem). Isso dá `f_step_max ≈ 200 ksteps/s`.
- Se seu mínimo de tempo baixo `tWL_min` for maior que 0,5 µs, reduza `tick_hz` (por exemplo, para 1 MHz) ou mantenha o período entre passos suficientemente longo para respeitar o `tWL_min`.

Snippet para calcular `i_pulse_ticks` a partir de microsegundos (modo síncrono):
```systemverilog
localparam int TICK_HZ       = 2_000_000;      // base gerada pelo tick_gen
localparam int STEP_PW_US    = 5;              // alvo de largura de pulso
localparam int I_PULSE_TICKS = (TICK_HZ/1_000_000) * STEP_PW_US; // = 10

tmc5160_step_dir_driver #(
  .SYNC_MODE(1),
  .DDA_FRACT_BITS(16),
  .DIR_SETUP_TICKS( /* ceil(tDIRsetup_min * TICK_HZ) */ )
) u_stepdir (
  .i_tick        (tick_2mhz),
  .i_pulse_ticks (I_PULSE_TICKS),
  // demais sinais...
);
```

6) Check‑list ao integrar
- Verifique tWH_min, tWL_min, tDIRsetup_min e tDIRhold_min no datasheet e derive `i_pulse_ticks`, `DIR_SETUP_TICKS` e `tick_hz`.
- Garanta que `i_pulse_ticks` tenha margem sobre tWH_min e que `1/tick_hz` respeite tWL_min no pior caso de taxa máxima.
- Opcional: padronize a mesma `i_pulse_ticks` para todos os eixos para simplificar constraints e comportamento EMI; não é obrigatório.
- Se necessário, bloqueie mudanças de `i_dir` por alguns ticks após a borda do STEP (hold) na lógica de nível superior.

Referência: TMC5160A Datasheet (rev. 1.18): https://www.analog.com/media/en/technical-documentation/data-sheets/TMC5160A_datasheet_rev1.18.pdf

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
