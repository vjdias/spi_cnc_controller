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

## Fluxo de RX (recebimento) e TX (envio)

Raspberry Pi (master) ↔ FPGA (slave). Em SPI, MOSI (master→slave) é RX para o FPGA; MISO (slave→master) é TX do FPGA.

```
Entradas (RX, MOSI):

RPi MOSI ──> spi_slave ──> spi_rx_slave_service ──> spi_rx_mosi_service ──> RX FIFO (spi_fifo_if)
                                                                       │
                                                                       └──> spi_rx_hub_service ──> request_router_pkg ──> parsers ──> serviços (ex.: led_service)

Saídas (TX, MISO):

serviços (frames prontos) ──> resp_stream_if (valid/ready)
                            └──> spi_tx_hub_service (round‑robin) ──> TX FIFO (spi_fifo_if) ──> spi_tx_miso_service ──> spi_slave ──> RPi MISO
```

- **RX detalhado**
  - `spi_rx_slave_service`: adapta o wrapper `spi_slave` (rd_en/raddr/rdata/irq) e produz o par `spi_byte_valid/spi_byte` com 1 byte por ciclo enquanto houver dados (back-to-back), pronto para o pipeline.
  - `spi_rx_mosi_service`: recebe esses bytes (8 bits) e escreve na RX FIFO quando não cheia; sinaliza `overflow_error` se cheia. Também expõe `slave_busy` quando a ocupação passa um limiar (controle de fluxo).
  - `spi_rx_hub_service`: lê 1 byte/ciclo da RX FIFO e alimenta `request_router_pkg::feed`, que valida e entrega o frame decodificado para os serviços.

- **TX detalhado**
  - Serviços produtores publicam frames via `resp_stream_if` (handshake `valid/ready` com `bits` e `len`).
  - `spi_tx_hub_service`: arbitra N streams com round‑robin, aceita 1 frame por vez (em IDLE), e serializa os bytes para a TX FIFO. Se a TX FIFO estiver cheia, o envio pausa (sem perda) até abrir espaço.
  - `spi_tx_miso_service`: consome a TX FIFO e gera `wr_en/waddr/wdata` para o `spi_slave`, que dirige o fio físico MISO.

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

## Licença
MIT. Consulte os cabeçalhos dos arquivos para detalhes.
