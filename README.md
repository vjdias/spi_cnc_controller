# SPI CNC Controller

Projeto de referência para controlar uma CNC via SPI. O Raspberry Pi atua como **master** e o FPGA como **slave**, trocando frames binários que são convertidos em ações de hardware.

## Estrutura de diretórios
```
src/
  protocol/
    framings/            # definição dos frames (requests e responses)
    parsers/             # parsers byte a byte para cada frame
    routers/             # roteadores que escolhem o parser correto
  services/
    integrations/
      interfaces/        # interfaces padronizadas (ex.: FIFO)
      packages/          # tipos e constantes globais dos serviços
    spi/                 # serviços SPI (camada física e hubs)
      spi_rx_slave_service.sv  # bridge RX: wrapper spi_slave -> bytes com strobe
      spi_rx_mosi_service.sv   # RX (MOSI): captura bytes para a FIFO de RX
      spi_rx_hub_service.sv    # RX hub: consome FIFO e alimenta o roteador
      spi_tx_hub_service.sv    # TX hub: arbitra streams de resposta → FIFO TX
      spi_tx_miso_service.sv   # TX (MISO): lê FIFO TX e escreve no IP SPI
    led/
      led_service.sv     # serviço de exemplo (controla LEDs)

tb/
  tests/                 # testbenches SystemVerilog
  verilator/             # scripts Python para simular com Verilator
  modelsim/              # scripts TCL para simular com ModelSim
```

## Convenções de código
- **Módulos** (`*.sv`) implementam blocos de hardware.
- **Packages** (`*_pkg.sv`) concentram tipos, parâmetros e funções de apoio.
- **Interfaces** (`services/interfaces/*.sv`) encapsulam comunicação entre módulos, como a `spi_fifo_if` utilizada entre `spi_capture` e `spi_queue_consumer`.

## Arquitetura e Fluxo (RX/TX)

Raspberry Pi (master) ↔ FPGA (slave). Em SPI, MOSI (master→slave) é RX para o FPGA; MISO (slave→master) é TX do FPGA.

```
Entradas (RX, MOSI):

RPi MOSI ──> spi_slave ──> spi_rx_slave_service ──> spi_rx_mosi_service ──> RX FIFO (spi_fifo_if)
                                                                       │
                                                                       └──> spi_rx_hub_service ──> request_router_pkg ──> parsers ──> serviços (ex.: led_service)

Saídas (TX, MISO):

serviços (frames prontos) ──> resp_stream_if (valid/ready)
                            └──> [SIM] spi_tx_hub_service (RR) → TX FIFO → spi_tx_miso_service → spi_slave → RPi MISO
                                [HW] caminho de TX agregado ainda não ligado no top (ver “Estado atual”).
```

- **RX detalhado**
  - `spi_rx_slave_service`: adapta o wrapper `spi_slave` (rd_en/raddr/rdata/irq) e produz o par `spi_byte_valid/spi_byte` com 1 byte por ciclo enquanto houver dados (back-to-back), pronto para o pipeline.
  - `spi_rx_mosi_service`: recebe esses bytes (8 bits) e escreve na RX FIFO quando não cheia; sinaliza `overflow_error` se cheia. Também expõe `slave_busy` quando a ocupação passa um limiar (controle de fluxo).
  - `spi_rx_hub_service`: lê 1 byte/ciclo da RX FIFO e alimenta `request_router_pkg::feed`, que valida e entrega o frame decodificado para os serviços.

- **TX detalhado**
  - Serviços produtores publicam frames via `resp_stream_if` (handshake `valid/ready` com `bits` e `len`).
  - [Simulação] `spi_tx_hub_service` + `spi_tx_miso_service` são instanciados nos TBs e exercitam a publicação de respostas (MISO “virtual”).
  - [Hardware] No `top` atual, a porta `tx_stream` dos serviços está ligada a uma interface e com `ready=1` (descarta localmente). O caminho agregador de TX para o wrapper ainda não está presente no `top` (ver “Próximos passos”).

> Simetria de adaptação ao IP SPI
> - RX: `spi_rx_slave_service` (spi_slave → bytes) ↔ `spi_rx_mosi_service` (bytes → RX FIFO)
> - TX: `spi_tx_hub_service` (streams → bytes → TX FIFO) ↔ `spi_tx_miso_service` (TX FIFO → spi_slave)

- **Políticas de fila**
  - RX FIFO: sem descarte por padrão (evita corromper frames). `slave_busy` sobe quando `count > RX_BLOCK_LEVEL` para o master respeitar.
  - TX FIFO: suporta modo opcional “drop‑old” (descartar o mais antigo ao escrever cheio), configurável por parâmetro da interface. O hub de TX só escreve quando `!full` (sem perdas) a menos que seja ajustado.

## Executando testes
Há scripts para Windows e Linux, ambos exigindo um parâmetro que define o simulador a ser utilizado:

```powershell
# Windows
./run_tests.ps1 verilator   # utiliza Verilator
./run_tests.ps1 modelsim    # utiliza ModelSim/Questa (requer "vsim" no PATH)
```

```bash
# Linux
./run_tests.sh verilator    # utiliza Verilator
./run_tests.sh modelsim     # utiliza ModelSim/Questa (requer "vsim" no PATH)
```

Os testes são executados em modo texto e o resultado de cada testbench é mostrado de forma resumida no terminal.

## Estado atual (HW vs SIM)

- RX em hardware: ligado e funcional no `top`.
  - Wrapper SPI e ponte RX: `src/top.sv:86` (spi_slave) e `src/top.sv:114` (spi_rx_slave_service).
  - Captura + FIFO + HUB: `src/top.sv:142`, `src/top.sv:154`, `src/top.sv:178`.
  - LED service: consome `LED_CTRL` e dirige pinos `leds` (stream de resposta amarrado em ready): `src/top.sv:202`.
  - Motion service: recebe frames (`START_MOVE`, `MOVE`, `MOVE_HOME`, `MOVE_END`, `QUEUE_STATUS`), lê encoders X/Y/Z, usa PROX por eixo + E‑STOP, e gera STEP/DIR/ENN: `src/top.sv:327`.

- TX em hardware: ainda não agregado no `top`.
  - A porta `tx_stream` do `motion_service` está ligada à interface `motion_stream` com `ready=1` (respostas descartadas no FPGA): `src/top.sv:219`, `src/top.sv:355`.
  - Para publicar respostas no MISO em HW, é necessário integrar um agregador sintetizável (ver “Próximos passos”).

- Simulação (ModelSim/Verilator): completa (RX+TX).
  - Os TBs instanciam `spi_tx_hub_service` e `spi_tx_miso_service` (cercados por `__SIM_BUILD__`) e verificam o fluxo de respostas.

## Motion (3 eixos)

- Orquestração: `src/services/motion/motion_service.sv:13`.
  - Entradas por eixo: posição dos encoders (`enc_pos_x/y/z`), PROX (`i_prox_in_x/y/z`), E‑STOP global.
  - Tick de controle: `tick_gen` com `TICK_DIV` e `PID_DIV` separados para SIM/HW.
  - Homing: responde quando o(s) PROX do(s) eixo(s) requisitado(s) disparam; máscara indica quais eixos “homearam”.
  - Segurança: E‑STOP e PROX por eixo bloqueiam enable/geram `stop_x/y/z`.
  - Publica `o_moving` (busy agregado dos eixos) e frames em `tx_stream`.

- Controlador por eixo: `src/services/motion/axis_controller_service.sv`.
  - PID proporcional (`pid_axis_service`), modo STEP/DIR síncrono (`tmc5160_step_dir_driver`) e PROX local pass‑through.
  - Largura do pulso STEP (ticks): `PULSE_TICKS_DEFAULT`.

- Encoders: `src/top.sv:235` (X), `src/top.sv:267` (Y), `src/top.sv:299` (Z), driver `quad_encoder_tmcs28_driver.sv`.
  - Use pinos GCLK para A/B; Z pode ser IO comum.

## Clocks, constraints e baseline

- Clocks de sistema validados: 27/50/54 MHz (baseline 3V3).
  - 27 MHz: slack amplo; 50/54 MHz fecham com folga (caminho crítico ~14.8 ns após pipeline no RX HUB).
  - Arquivos SDC: `constraints/timing_27.sdc`, `constraints/timing_50.sdc`, `constraints/timing_54.sdc`.
  - Scripts de sweep: `scripts/run_gowin_sys_sweep_27_50_54.tcl`, `scripts/run_gowin_sweep.tcl`.

- SPI (pi_sclk): STA fecha com folga a 50 MHz; ~80 MHz plausível; 100 MHz exige otimizações (registrar MISO no IOB e ajustar delays de I/O).
  - Scripts: `scripts/run_gowin_spi_sweep.tcl`, `scripts/run_cst_drive_spi_sweep.tcl`.

- Physical (.cst): baseline 3V3 em `src/spi_cnc_controller_3v3.cst` (pinos do SPI, encoder X, placeholders para Y/Z, PROX por eixo, E‑STOP e TMC STEP/DIR/ENN por eixo).

## Próximos passos (habilitar TX em hardware)

- Opção A (rápida): instanciar um agregador simples sintetizável no `top` (sem interfaces SV) que converta `tx_stream` em bytes e alimente `wr_en/waddr/wdata` do `spi_slave`.
- Opção B (modular): portar `spi_tx_hub_service`/`spi_tx_miso_service` removendo o `__SIM_BUILD__` e trocando `spi_fifo_if`/`resp_stream_if` por sinais simples no `top`.
- Após integrar, varrer novamente timing e validar MISO em hardware.

## Licença
MIT. Consulte os cabeçalhos dos arquivos para detalhes.

## Referência Completa: Módulos, Packages e Interfaces

Este capítulo documenta cada bloco do projeto — propósito, entradas/saídas e observações de uso. Para famílias de módulos/packages com padrão repetido, mostramos um exemplo e indicamos os demais equivalentes.

### Módulos de Topo e Integração

- top.sv: ponto de integração do hardware
  - Entradas: `i_clk`, `i_resetn`, `pi_sclk`, `pi_csn`, `pi_mosi`, `i_enc_a_x/b_x/z_x`, `i_enc_a_y/b_y/z_y`, `i_enc_a_z/b_z/z_z`, `i_prox_in_x/y/z`, `i_estop_in`.
  - Saídas: `pi_miso`, `leds[5:0]`, `o_moving`, `tmc_step/dir/enn_{x,y,z}`.
  - Função: integra o wrapper SPI slave, pipeline de RX (bridge→captura→FIFO→hub), LED service, 3 encoders ABZ, Motion service (3 eixos) e um agregador de TX sintetizável que converte os streams de resposta (LED/Motion) em bytes para o `spi_slave` (MISO).
  - Observações:
    - O agregador de TX em HW aceita 1 frame por vez, round‑robin entre LED e Motion, e emite 1 byte/ciclo em `waddr=0`.
    - Os encoders Y/Z devem ser mapeados no `.cst` conforme sua placa (A/B idealmente em pinos GCLK).

- spi_slave.sv: wrapper do núcleo SPI (slave)
  - Entradas: `i_clk`, `i_resetn`, `wr_en/waddr/wdata` (TX), `rd_en/raddr` (RX), `sclk_slave`, `ss_n_slave`, `mosi_slave`.
  - Saídas: `rdata`, `irq`, `miso_slave`.
  - Função: adapta o IP SPI em papel de SLAVE para uma interface simples de registradores de leitura/escrita. Em simulação, oferece um STUB que permite pré‑carregar bytes para TX e capturar RX.
  - Observações: `miso_slave` é tri‑state quando `ss_n_slave=1` via `TBUF`. O STUB usa `waddr=0` como registro de TX e gera `irq` ao receber 1 byte completo.

### Serviços SPI (RX/TX)

- spi_rx_slave_service.sv: bridge (wrapper → bytes)
  - Entradas: `clk`, `rst_n`, `rdata`, `irq`.
  - Saídas: `rd_en`, `raddr`, `spi_byte_valid`, `spi_byte`.
  - Função: quando `irq` está alto, emite leituras back‑to‑back no endereço RX e produz uma batida `spi_byte_valid/spi_byte` por byte lido.

- spi_rx_mosi_service.sv: captura para FIFO
  - Var SIM (interface): `fifo` (modport producer), recebe `spi_byte_valid/spi_byte`, sinaliza `overflow_error` e `slave_busy` quando ultrapassa nível seguro.
  - Var SYNTH (handshake): `fifo_wr_en/wr_data` e `fifo_full` no lugar da interface, demais sinais idênticos.
  - Função: insere cada byte válido na FIFO; reporta overflow se cheia.

- spi_rx_hub_service.sv: leitor + roteador
  - Var SIM: recebe `spi_fifo_if.consumer fifo` e chama `request_router_pkg::feed` a cada byte; entrega `frame_valid/frame_error/out_msgType` e frames decodificados (saídas de cada tipo de requisição suportada).
  - Var SYNTH: usa handshake (`fifo_empty/rd_en/rd_data/rd_valid`) e um pipeline de 1 ciclo (stage0/stage1) antes de alimentar o roteador.
  - Saídas: um conjunto de records (structs) por frame (START_MOVE, MOVE, MOVE_HOME, MOVE_END, MOVE_QUEUE_STATUS, etc.).

- spi_tx_hub_service.sv [SIM]: agregador de N streams de resposta
  - Entradas: `resp_stream_if.consumer streams[NUM_STREAMS]`.
  - Saídas: `spi_fifo_if.producer tx_fifo`, `tx_busy`.
  - Função: round‑robin entre streams válidos; captura `bits/len` e serializa em bytes para a FIFO de TX.

- spi_tx_miso_service.sv [SIM]: bytes → wrapper
  - Entradas: `spi_fifo_if.consumer tx_fifo`.
  - Saídas: `wr_en/waddr/wdata` (para o `spi_slave`).
  - Função: consome bytes da TX FIFO e gera batidas de escrita no wrapper.

### Serviço de LEDs

- led_service.sv: controle de 6 LEDs
  - Entradas: `clk`, `rst_n`, `frame_valid`, `msgType`, `led_req` (struct do pacote de request).
  - Saídas: `leds[5:0]`, `resp_valid`, `resp_frame` (struct do pacote de response), `resp_stream_if.producer tx_stream`.
  - Função: ao receber um frame `LED_CTRL`, atualiza o vetor de LEDs e publica uma resposta (status/eco do frameId) via portas dedicadas e via stream genérico.

### Serviço de Movimento (3 eixos)

- motion_service.sv: orquestrador de X/Y/Z
  - Entradas gerais: `clk`, `rst_n`, `frame_valid`, `msgType`.
  - Entradas de frames: `start_move_frame`, `queue_add_frame`, `move_end_frame`, `move_home_frame`, `probe_frame`, `queue_status_frame`.
  - Feedback: `enc_pos_x/y/z` (posição absoluta por eixo).
  - Sensores: `i_prox_in_x/y/z` (por eixo; configuráveis via parâmetros `PROX_IS_PNP` e `PROX_IS_NO`). No `top` padrão está definido como NPN/NO (`PROX_IS_PNP=0`, `PROX_IS_NO=1`). `i_estop_in` global é NC por padrão no driver.
  - Saídas físicas: `tmc_step/dir/enn_{x,y,z}`.
  - Saídas de status: `o_moving` (OR dos busy dos eixos), `resp_stream_if.producer tx_stream` (respostas codificadas).
  - Função: gera ticks de sincronismo (tick/pid_tick/sync_start), interpreta frames de movimento (start/move/home/end/status), aplica safety (E‑STOP e PROX por eixo) e aciona 3 `axis_controller_service` com setpoints/ganhos fornecidos nos frames. Calcula `enc_vel_x/y/z` como Δpos por `pid_tick`.

- axis_controller_service.sv: controlador de eixo
  - Entradas: `clk`, `rst_n`, `i_enable`, `i_dir`, `i_start`, `i_stop`, `i_continuous`, `i_steps`, `i_tick`, `i_pid_tick`, `i_target`, `i_ff_rate`, `i_kp/i_ki/i_kd`, `i_enc_pos`, `i_enc_vel`, `i_prox_in`.
  - Saídas: `o_step`, `o_dir`, `o_enn`, `o_busy`, `o_position`, `o_prox_active`.
  - Função: aplica `pid_axis_service` (proporcional) para gerar um incremento de taxa e dirige o `tmc5160_step_dir_driver` em modo síncrono (`i_tick` + `i_rate_inc` + largura do pulso em `i_pulse_ticks`). Exporta a posição de entrada e reporta `o_busy`.
  - Observações: `o_prox_active` é pass‑through do `i_prox_in`; debouncing/política ficam no `motion_service`.

- pid_axis_service.sv: controlador P (single‑axis)
  - Entradas: `clk`, `rst_n`, `enable`, `pid_tick`, `target`, `ff_rate`, `kp/ki/kd`, `enc_pos`.
  - Saídas: `rate_out` (taxa corrigida), `pid_err` (placeholder).
  - Função: `rate_out = max(0, ff_rate + (kp*(target-enc_pos) >> KP_SHIFT))` com larguras explícitas para evitar truncamentos. `ki/kd` reservados para futuro.

- pid_service.sv: controlador P (3 eixos)
  - Entradas: `clk`, `rst_n`, `enable`, `pid_tick`, `target_x/y/z`, `ff_rate_x/y/z`, `kp/ki/kd` por eixo, `enc_pos_x/y/z`.
  - Saídas: `rate_x/y/z`, `pid_err_x/y/z`.
  - Função: versão multi‑eixo do `pid_axis_service` (termo P). Mantido para compatibilidade, mas a arquitetura atual usa `axis_controller_service + pid_axis_service`.

### Drivers (baixo nível)

- tmc5160_step_dir_driver.sv: geração de STEP/DIR/ENN
  - Entradas (comuns): `clk`, `rst_n`, `i_enable`, `i_dir`, `i_start`, `i_stop`, `i_continuous`, `i_steps`.
  - Modo livre: `i_period_cycles`, `i_pulse_cycles` (ciclos de clk); ignora `i_tick/i_rate_inc/i_pulse_ticks`.
  - Modo síncrono: `i_tick`, `i_rate_inc` (QN, padrão Q16.16), `i_pulse_ticks` (largura do STEP em ticks de `i_tick`). Ignora período/pulso em ciclos de clk.
  - Saídas: `o_step`, `o_dir` (com polaridade configurável), `o_enn` (ativo‑baixo por padrão), `o_busy`, `o_done_pulse`.

- tick_gen.sv: gerador de base de tempo
  - Entradas: `clk`, `rst_n`, `i_enable`, `i_tick_div` (ciclos/`o_tick`), `i_pid_div` (ticks/`o_pid_tick`), `i_sync_start_req`.
  - Saídas: `o_tick` (pulso base), `o_pid_tick` (pulso a cada N ticks), `o_sync_start` (pulso alinhado ao próximo `o_tick`).

- quad_encoder_tmcs28_driver.sv: encoder incremental AB(Z)
  - Entradas: `clk`, `rst_n`, `i_enc_a/b/z` (assíncronos; sincronizados e filtrados internamente).
  - Saídas: `o_position` (wrap/saturação), `o_step_pulse`, `o_dir`, `o_index_pulse`, `o_illegal_pulse`, `o_velocity`, `o_vel_valid`.
  - Parâmetros: `FILTER_CYCLES`, `RESET_ON_INDEX`, `INDEX_OFFSET`, `MODULO`, `VEL_WINDOW_CYCLES`, `COUNT_MODE` (1/2/4).

- lj12a3_proximity_driver.sv: PROX LJ12A3 (PNP/NPN, NO/NC)
  - Entradas: `clk`, `rst_n`, `i_sensor_in` (já condicionado a 0/1 na tensão do FPGA).
  - Saídas: `o_active` (estado estável), `o_active_pulse`, `o_inactive_pulse`.
  - Parâmetros: `IS_PNP`, `IS_NORMALLY_OPEN`, `DEBOUNCE_CYCLES`.

- emergency_stop_driver.sv: E‑STOP (NC/NO)
  - Entradas: `clk`, `rst_n`, `i_estop_in`, `i_clear` (clear do latch).
  - Saídas: `o_estop_active`, `o_estop_engage_pulse`, `o_estop_release_pulse`, `o_inhibit`.
  - Parâmetros: `IS_NORMALLY_CLOSED`, `DEBOUNCE_CYCLES`, `LATCH_UNTIL_CLEAR`, `CLEAR_HOLDOFF_CYCLES`.

### Interfaces de Integração

- resp_stream_if.sv: stream genérico de respostas
  - Sinais: `valid`, `ready`, `bits[SHIFT_BITS-1:0]` (payload alinhado no topo), `len` (bytes).
  - Modports:
    - `producer`: publica `valid/bits/len`; consome `ready`.
    - `consumer`: consome `valid/bits/len`; publica `ready`.

- spi_fifo_if.sv: FIFO simples para SPI (SIM e SYNTH)
  - Armazena bytes (`mem[DEPTH]`) com ponteiros `wr_ptr/rd_ptr` e flags `full/empty`.
  - Tarefas: `write(data)` e `read(data)` (usadas pelos serviços em simulação). Em síntese, os módulos usam handshakes equivalentes.
  - Parâmetros: `DEPTH`, `DROP_OLD_ON_FULL`.

### Pacotes e Framing de Protocolo

- spi_service_pkg.sv: tipos/constantes para serviços SPI
  - Define `byte_t`, `REQ_MAX_BYTES`, `RESP_MAX_BYTES`, `RX_FIFO_DEPTH`, `RX_BLOCK_LEVEL`, `TX_FIFO_DEPTH`.

- protocol_constants_pkg.sv: constantes de framing
  - Define `REQ_HEADER`, `RESP_HEADER`, `TAIL`, `MOVE_HOME_TYPE`, `START_MOVE_TYPE`, `MOVE_TYPE`, `MOVE_END_TYPE`, `MOVE_QUEUE_STATUS_TYPE`, `FPGA_STATUS_TYPE`, `LED_CTRL_TYPE` etc.

- request_router_pkg.sv: roteador de requisições
  - Tipos: `router_state_t` (R_HEADER/R_MSGTYPE/R_PARSING), `parser_id_t` (P_*), `router_ctx_t` (estado + contextos dos parsers).
  - Funções: `init()` (zera contexto) e `feed(ctx, data, frame_valid, frame_error, out_msgType, …frames…)` (avança o roteador e repassa o byte ao parser selecionado). Emite `frame_valid`/`frame_error` ao final de cada frame e informa o `out_msgType` correspondente.

- Pacotes de Request/Response e Parsers (padrão repetido)
  - Exemplo: `start_move_request_pkg.sv` (request) e `start_move_req_parser_pkg.sv` (parser).
    - Request pkg: define struct `start_move_req_bytes_t` (campos do frame), funções `make_default()`, `encoder(struct)->bits`, `decoder(bits)->struct`, `set_parity(struct)`, `check_parity(struct)`.
    - Parser pkg: define `parser_ctx_t`, `init()`, `feed(ctx, data, frame_valid, frame_error, out_frame)` que consome byte a byte e, ao final, sinaliza `frame_valid` e preenche `out_frame`.
  - Seguem o mesmo padrão: `move_home_*`, `move_end_*`, `move_queue_add_*`, `move_queue_status_*`, `move_probe_level_*`, `fpga_status_*`, `led_control_*`.

## Dicas de Integração e Uso

- Pinout (.cst): ver `src/spi_cnc_controller_3v3.cst`. Os nomes no `top` são `i_enc_a_x/b_x/z_x` para X; Y/Z possuem placeholders. PROX/E‑STOP e TMC STEP/DIR/ENN têm placeholders para você definir conforme a sua placa.
- TX em HW: já agregado no `top` (streams LED/Motion → agregador → `spi_slave`). Caso queira publicar frames adicionais, exponha novos `resp_stream_if` e conecte no agregador (aumente para 3/4 streams e ajuste o round‑robin).
- Clocks: baseline estável em 27/50/54 MHz. Ajuste `constraints/timing_*.sdc` conforme alvo e reexecute PNR com os scripts em `scripts/`.
