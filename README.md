# spi_cnc_controller

**FPGA controlando uma CNC via SPI**, com **Raspberry Pi como master** e o **FPGA como slave**.  
O RPi envia comandos SPI; o FPGA recebe, processa no *pipeline de protocolo* e aciona **services** que geram os sinais físicos da CNC (STEP/DIR/EN, homing, limits, etc.). Respostas/telemetria voltam ao RPi pelo TX do core SPI.

## Arquitetura

```
RPi (master) ──SPI──> [ spi_slave (wrapper + IP Gowin) ]
                           │
                           ▼
                    [ protocol pipeline ]
                  framing → parser → router
                           │
                           ▼
                        [ services ]
             (movimento, drivers, status, respostas)
```

- **`spi_slave.sv`**: envolve o IP da Gowin no modo *slave* e aplica **tri‑state em MISO** quando `SS_N=1` (via `TBUF` ou `assign ... 1'bz`).  
- **`protocol/`**: converte bytes SPI em **mensagens** e despacha para services.  
- **`services/`**: **ações ativadas pelo pipeline** após o `protocol`; geram efeitos no hardware da CNC e respostas ao host.

## Temporização e domínios

- `i_clk`: clock de sistema do FPGA (ex.: 27 MHz no Tang Primer).  
- `sclk_slave`: **vem do RPi** e é **assíncrono** a `i_clk`.  
- Handshake com o IP (lado registradores, em `i_clk`):
  - **Write (TX)**: aplique `waddr/wdata`, pulse `wr_en` ≥ 1 ciclo → dado fica pronto para a próxima transação SPI.
  - **Read (RX)**: aplique `raddr`, pulse `rd_en` ≥ 1 ciclo → **`rdata` válido no ciclo seguinte**.
- **CDC**: o core SPI faz o cruzamento entre SCLK e `i_clk`; sua lógica permanece no domínio `i_clk`.

## SPI (compatível com RPi)

- **DataLength**: 8 bits, **MSB‑first**.  
- **Modo**: ajuste **CPOL/CPHA** para casar com o RPi (padrão: *Mode 0*; opcional: *Mode 3*).  
- **MISO tri‑state** quando `SS_N=1` para permitir múltiplos slaves.  
- Pinos típicos no RPi: `SCLK`, `MOSI`, `MISO`, `CE0/CE1` (CS#). Mapear no `.cst` da placa.

## Build rápido (Gowin IDE)

1. Gere/importe o IP “SPI Master and Slave” da Gowin em **modo slave**.  
2. Inclua `src/drivers/spi_master/*.v[ o ]` e `src/spi_slave.sv`.  
3. Definições opcionais (síntese/simulação):
   - `USE_GOWIN_TBUF` → usa primitiva `TBUF` para MISO Z com `SS_N` alto.
   - `USE_ESCAPED_CORE_NAME` → usa nome escapado do módulo do IP (`\~spi_master.SPI_MASTER_Top`).  
4. Aponte `top.sv` como top‑level.  
5. Constrains: preencha `src/services/spi_cnc_controller.cst` com pinos da sua placa.  
6. Sintetize, faça PnR e gere o bitstream em `impl/`.

## Testes

- **ModelSim/Questa**: veja `tb/modelsim/` (scripts e *waves*).  
- **Verilator**: veja `tb/verilator/` (harness C++, testes de protocolo).  
- Exercícios mínimos: frames válidos/CRC, *corner cases* CPOL/CPHA, *throughput*, SS# *glitches*, reset/boot.

## Estrutura das pastas

Consulte os `README.md` dentro de cada pasta em `src/`, `protocol/`, `services/`, `drivers/`, `tb/` e `impl/` para detalhes de uso e organização.

## Segurança e CNC

Implemente em `services/` as rotinas de **E‑stop**, *limit switches*, *soft limits* e *timeouts* de movimento. Esses caminhos **devem ter prioridade** e operar mesmo se o host estiver inativo.

## Licença

MIT — veja cabeçalhos dos arquivos.

## Formato das mensagens (frames binários)

Esta seção descreve **como os bytes são organizados** nos frames SPI entre **Host (RPi)** e **FPGA**.  
As **tabelas completas por mensagem** continuam em: [frames.md](sandbox:/mnt/data/frames.md). Aqui você encontra as **regras comuns**, **mapa de tipos** e **exemplos completos**.

### 1) Envelope (framing) comum

**Requests (RPi → FPGA)** — *sem campo LEN; tamanhos são definidos por tipo de mensagem.*
```
Offset  | 0     1           2         3..N-2         N-1
Bytes   | 0xAA  MsgType     FrameID   Payload(*)      0x55
Obs.    | Hdr   (8 bits)    (8 bits)  (0..K bytes)    Tail
```
**Responses (FPGA → RPi)**
```
Offset  | 0     1           2            3..M-2       M-1
Bytes   | 0xAB  MsgType     FrameID_Echo Payload(*)    0x54
Obs.    | Hdr   (8 bits)    (8 bits)     (0..K bytes)  Tail
```
- **Header/Tail**: `0xAA...0x55` (request) e `0xAB...0x54` (response).  
- **FrameID**: definido pelo **host** (0–255) e **ecoado** em respostas. Útil para *matching* e retransmissão.  
- **Comprimento**: **fixo por mensagem** (não há campo LEN). O parser sabe o tamanho pelo **MsgType**.  
- **Checksum**: **apenas em mensagens com payload** (ver colunas “Checksum” nas tabelas). Regra padrão: **soma mod 256** dos bytes indicados na tabela (geralmente do **MsgType** até o **último byte do payload**, BE).  
- **Endianess**: campos multi‑byte em **big‑endian (BE)**.  
- **Delimitação física**: cada transação SPI é **delimitada por `SS_N`**; o *frame* deve caber **inteiro** dentro de uma seleção de chip.

> Se um *frame* não tem payload, **não há checksum** (ex.: GET\_FPGA\_STATUS Request = 4 bytes).

### 2) Mapa de tipos (MsgType)

| Tipo                          | Direção           | MsgType (hex) |
|------------------------------|-------------------|---------------|
| GET_FPGA_STATUS / Resp       | RPi→FPGA / FPGA→RPi | `0x20`       |
| ABORT / Resp                 | RPi→FPGA / FPGA→RPi | `0x07`       |
| START_PARAMS_WRITE / Resp    | RPi→FPGA / FPGA→RPi | `0x10`       |
| WRITE_PARAM / Resp           | RPi→FPGA / FPGA→RPi | `0x11`       |
| END_PARAMS_WRITE / Resp      | RPi→FPGA / FPGA→RPi | `0x12`       |
| START_MOVE / Resp            | RPi→FPGA / FPGA→RPi | `0x03`       |
| MOVE / Telemetry             | RPi→FPGA / FPGA→RPi | `0x01` / `0x02` |
| HOME / Resp                  | RPi→FPGA / FPGA→RPi | `0x04`       |
| PROBE_LEVEL / Resp           | RPi→FPGA / FPGA→RPi | `0x05`       |
| END_MOVE / Resp              | RPi→FPGA / FPGA→RPi | `0x06`       |

> Consulte **frames.md** para todos os campos e tamanhos oficiais de cada mensagem.

### 3) Exemplos completos

#### 3.1 GET_FPGA_STATUS

**Request (4 B)**
| Offset | Campo     | Valor                 |
|:-----:|-----------|-----------------------|
| 0     | Header    | `0xAA`                |
| 1     | MsgType   | `0x20`                |
| 2     | FrameID   | definido pelo host    |
| 3     | Tail      | `0x55`                |

**Response (12 B)**  
| Offset | Campo           | Valor/Descrição                                  |
|:-----:|-----------------|---------------------------------------------------|
| 0     | Header          | `0xAB`                                            |
| 1     | MsgType         | `0x20`                                            |
| 2     | FrameID_Echo    | eco do request                                    |
| 3     | Status          | `0=OK, 1=ERR`                                     |
| 4     | State           | `0=Idle,1=Running,2=Error,3=Busy`                 |
| 5     | Mode            | `0=Idle,1=Move,2=Read,3=Write,4=Home,5=Probe`     |
| 6–9   | FirmwareVersion | `uint32 BE` (ex.: `0x0001_0002` = v1.0.2)        |
| 10    | Checksum        | soma mod256 de bytes **1..9**                     |
| 11    | Tail            | `0x54`                                            |

**Exemplo (hex):** `AB 20 01 00 00 01 00 01 00 02 24 54`  
(interpretação: MsgType=0x20, ID=0x01, Status=OK, State=Idle, Mode=Move, FW=1.0.2, Chk=0x24)

#### 3.2 WRITE_PARAM

**Request (10 B)**  
| Off | Campo      | Bits | Descrição                               |
|:--:|------------|:----:|------------------------------------------|
| 0  | Header     |  8   | `0xAA`                                   |
| 1  | MsgType    |  8   | `0x11`                                   |
| 2  | FrameID    |  8   | ID do frame                              |
| 3  | ParamID    |  8   | ID do parâmetro                          |
| 4–7| ParamValue | 32   | valor BE                                 |
| 8  | Checksum   |  8   | soma mod256 de bytes **1..7**            |
| 9  | Tail       |  8   | `0x55`                                   |

**Response (7 B)**  
| Off | Campo        | Bits | Descrição                          |
|:--:|--------------|:----:|-------------------------------------|
| 0  | Header       |  8   | `0xAB`                              |
| 1  | MsgType      |  8   | `0x11`                              |
| 2  | FrameID_Echo |  8   | eco do request                      |
| 3  | ParamID_Echo |  8   | eco                                  |
| 4  | Status       |  8   | `0=OK, 1=ERR`                       |
| 5  | Checksum     |  8   | soma mod256 de bytes **1..4**       |
| 6  | Tail         |  8   | `0x54`                              |

**Exemplo (hex):** `AA 11 05 02 00 00 27 10 4F 55`  
(WRITE_PARAM ID=0x02, Value=0x00002710 (=10000), ID de frame=0x05, Checksum=0x4F)

#### 3.3 MOVE

**Request (37 B)** *(fixo)*  
| Off | Campo          | Bits | Descrição                                              |
|:--:|----------------|:----:|---------------------------------------------------------|
| 0  | Header         |  8   | `0xAA`                                                  |
| 1  | MsgType        |  8   | `0x01`                                                  |
| 2  | FrameID        |  8   | ID                                                      |
| 3  | AxisMask       |  8   | bit0=X, bit1=Y, bit2=Z, bit3=A, bit4=B                  |
| 4  | DirMask        |  8   | 0=+, 1=− por eixo                                       |
| 5–6| Vx             | 16   | velocidade alvo eixo X (BE)                             |
| 7–8| Vy             | 16   | idem                                                    |
| 9–10| Vz            | 16   | idem                                                    |
|11–12| Va            | 16   | idem                                                    |
|13–14| Vb            | 16   | idem                                                    |
|15–18| Sx            | 32   | passos a executar X (BE)                                |
|19–22| Sy            | 32   | idem                                                    |
|23–26| Sz            | 32   | idem                                                    |
|27–30| Sa            | 32   | idem                                                    |
|31–34| Sb            | 32   | idem                                                    |
|35 | Checksum       |  8   | soma mod256 de bytes **1..34**                           |
|36 | Tail           |  8   | `0x55`                                                  |

**Telemetry/Status Response (21 B)**  
| Off | Campo        | Bits | Descrição                                    |
|:--:|--------------|:----:|-----------------------------------------------|
| 0  | Header       |  8   | `0xAB`                                        |
| 1  | MsgType      |  8   | `0x02`                                        |
| 2  | FrameID_Echo |  8   | eco (último MOVE recebido)                    |
| 3  | Status       |  8   | flags de estado                               |
| 4  | ErrorFlags   |  8   | erros latched                                  |
| 5  | FifoLevel    |  8   | ocupação do pipeline interno                   |
| 6–7| ErrLinAvg    | 16   | erro médio linear                              |
| 8–9| ErrAngAvg    | 16   | erro médio angular                             |
|10  | SensorState  |  8   | bitmap (limits, probe, door, etc.)             |
|11–12| X_raw       | 16   | amostra bruta                                 |
|13–14| Y_raw       | 16   | amostra bruta                                 |
|15–16| Z_raw       | 16   | amostra bruta                                 |
|17 | Checksum     |  8   | soma mod256 de bytes **1..16**                 |
|18 | Tail         |  8   | `0x54`                                         |

> As mensagens **HOME**, **PROBE_LEVEL** e **END_MOVE** seguem o mesmo envelope. Veja tabelas integrais em **frames.md**.

### 4) Regras de parser/geração

- **Requests sem payload**: 4 bytes fixos (`AA, MsgType, ID, 55`).  
- **Requests com payload**: incluir **Checksum** (soma mod256) antes do `0x55`.  
- **Responses sem payload**: 4 bytes (`AB, MsgType, ID, 54`).  
- **Responses com payload**: incluir **Checksum** antes do `0x54`.  
- **Time‑outs**: se `SS_N` subir **antes** de completar o frame, **descartar**.  
- **Retransmissão**: se `Checksum` inválido, **não alterar estado**; opcionalmente responder erro no próximo *slot* de telemetria.  
- **Back‑pressure**: use `FifoLevel`/`Status` para o host modular o envio (evita under/overflow).

### 5) Exemplos de transação SPI (Mode 0)

1) **Leitura de status**  
- Host baixa `SS_N` e envia: `AA 20 01 55` → sobe `SS_N`  
- Host baixa `SS_N` e lê 12B: `AB 20 01 00 00 00 ... 54`

2) **Configuração de parâmetro**  
- `AA 10 22 55` (START_PARAMS_WRITE) → resp  
- `AA 11 23 02 00 00 27 10 4F 55` (WRITE_PARAM id=2, 10000) → resp  
- `AA 12 24 55` (END_PARAMS_WRITE) → resp

3) **Movimento contínuo**  
- `AA 03 31 55` (START_MOVE) → resp  
- enviar múltiplos `MOVE` (37B cada) intercalados com leitura de telemetria `0x02`  
- `AA 06 3F 55` (END_MOVE) → resp

## Sumário rápido
> Códigos entre parênteses são os **Cmd/Message Type** (byte 1).

#### 0. Globais
- **GET_FPGA_STATUS (0x20)** — *Request* — 4 B — consulta estado/versão.  
- **RespFPGA_STATUS (0x20)** — *Response* — 12 B — status, state, mode, **FW version (32b)**, **checksum**.

- **ABORT (0x07)** — *Command/Request* — 4 B — interrompe qualquer operação.  
- **RespABORT (0x07)** — *Response* — 4 B — confirma *Idle*.

#### 1. Escrita de Parâmetros
- **START_PARAMS_WRITE (0x10)** — *Request* — 4 B — entra no modo escrita de parâmetros.  
- **RespSTART_WRITE (0x10)** — *Response* — 5 B — `Status` (OK/ERR).

- **WRITE_PARAM (0x11)** — *Request* — 10 B — `Param ID` + `Param Value (32b)` + **checksum**.  
- **RespWRITE_PARAM (0x11)** — *Response* — 7 B — ecoa `Param ID`, `Status`, **checksum**.

- **END_PARAMS_WRITE (0x12)** — *Request* — 4 B — encerra modo escrita.  
- **RespEND_WRITE (0x12)** — *Response* — 5 B — `Status`.

#### 2. Movimento (MOVE)
- **START_MOVE (0x03)** — *Request* — 4 B — habilita sequência de MOVEs contínuos.  
- **RespSTART_MOVE (0x03)** — *Response* — 4 B — pronto para receber MOVEs.

- **MOVE (0x01)** — *Request* — 37 B — `Axis Mask`, `Direction Mask`, **Vx/Vy/Vz/Va/Vb (16b)** + **Sx/Sy/Sz/Sa/Sb (32b)**, **checksum**.  
- **STATUS+PID+SENSOR (0x02)** — *Response* — 21 B — `Status`, `ErrorFlags`, `FIFO Level`, **ErrAvg** (lin/ang), **Sensor State/Raw** (X/Y/Z), **checksum**.

- **HOME (0x04)** — *Request* — 9 B — `Axis Mask`, `Dir Mask`, `Vhome (16b)`, **checksum**.  
- **RespHOME (0x04)** — *Response* — 8 B — `Status`, `Axis Home Mask`, `Error Flags`, **checksum**.

- **PROBE_LEVEL (0x05)** — *Request* — 8 B — `Axis Mask`, `Vprobe (16b)`, **checksum**.  
- **RespPROBE (0x05)** — *Response* — 20 B — `Status`, `Axis Done Mask`, `Error Flags`, **LatchedPos_X/Y/Z (32b)`, **checksum**.

- **END_MOVE (0x06)** — *Request* — 4 B — encerra modo MOVE contínuo.  
- **RespEND_MOVE (0x06)** — *Response* — 4 B — confirma saída do modo.

### Fluxos típicos
- **Leitura de status:** `GET_FPGA_STATUS` → `RespFPGA_STATUS`.  
- **Configuração de parâmetros:** `START_PARAMS_WRITE` → múltiplos `WRITE_PARAM` → `END_PARAMS_WRITE`.  
- **Movimento contínuo:** `START_MOVE` → múltiplos `MOVE` (intercalados com *status/telemetria*) → `END_MOVE`.  
- **Homing/Probe:** `HOME` → `RespHOME` / `PROBE_LEVEL` → `RespPROBE`.  
- **Parada imediata:** `ABORT` → `RespABORT`.

> Implementação: os *requests* entram pelo **RX path** do IP SPI (via `I_RX_EN/I_RADDR → O_RDATA`), e as *responses/telemetria* saem pelo **TX** (`I_TX_EN/I_WADDR/I_WDATA`) para o RPi ler via MISO na transação seguinte.
