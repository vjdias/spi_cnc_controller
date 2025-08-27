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
    interfaces/          # interfaces padronizadas (ex.: FIFO)
    packages/            # tipos e constantes globais dos serviços
    spi_capture.sv       # captura bytes do IP SPI para uma FIFO
    spi_queue_consumer.sv# consome a FIFO e alimenta o router
    led_service.sv       # serviço de exemplo (controla LEDs)

tb/
  tests/                 # testbenches SystemVerilog
  verilator/             # scripts Python para simular com Verilator
  modelsim/              # scripts TCL para simular com ModelSim
```

## Convenções de código
- **Módulos** (`*.sv`) implementam blocos de hardware.
- **Packages** (`*_pkg.sv`) concentram tipos, parâmetros e funções de apoio.
- **Interfaces** (`services/interfaces/*.sv`) encapsulam comunicação entre módulos, como a `spi_fifo_if` utilizada entre `spi_capture` e `spi_queue_consumer`.

## Pipeline de recepção SPI
```
spi_capture → spi_fifo_if → spi_queue_consumer → request_router_pkg → parsers
```
1. **spi_capture** lê bytes do IP SPI e insere na FIFO.
2. **spi_queue_consumer** esvazia a FIFO e envia cada byte ao roteador.
3. **request_router_pkg** examina `msgType` e aciona o parser adequado.
4. **Parsers** preenchem estruturas de frame ou sinalizam erro.

## Executando testes
No Windows, utilize o script PowerShell `run_tests.ps1` localizado na raiz do repositório. Ele recebe um parâmetro que define o simulador desejado:

```powershell
./run_tests.ps1 verilator   # utiliza Verilator
./run_tests.ps1 modelsim    # utiliza ModelSim/Questa (requer "vsim" no PATH)
```
Os testes são executados em modo texto e o resultado de cada testbench é mostrado de forma resumida no terminal.

## Licença
MIT. Consulte os cabeçalhos dos arquivos para detalhes.
