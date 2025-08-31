# Testbenches (tb/tests)

Este diretório contém os testbenches do projeto, organizados para cobrir parsers de protocolo, serviços de SPI/LED e integrações de fluxo. Abaixo um guia rápido de execução e o propósito de cada teste, incluindo os módulos e pacotes envolvidos.

## Como executar

- Todos em ModelSim (texto):
  - `vsim -c -do "tb/modelsim/run_all.tcl"`
  - Ou `./run_tests.ps1 modelsim`
- Teste específico com o IP do master (VO):
  - `vsim -c -do "tb/modelsim/run_master_vo_integration.tcl"`
  - Requer simlib Gowin em `tb/tests/lib/simlib` e o arquivo `tb/tests/lib/simulate_vo/gw_spi_master.vo`.

Observações de build:
- O script `run_all.tcl` compila as fontes com `+define+SIM_STUB_SPI_CORE`, usando o STUB comportamental do wrapper `spi_slave` (não depende do IP cifrado).
- O script `run_master_vo_integration.tcl` compila o STUB do wrapper e o netlist `.vo` do master.
- Macros de asserção: `tb/tests/lib/test_macros.svh` (`TEST_ASSERT`).

## Lista de Testes e Escopo

### Parsers de Requests (unitários)
- fpga_status_request_parser_tb.sv
  - Propósito: validar o pacote `fpga_status_req_parser_pkg`.
  - Módulos/pacotes: `fpga_status_req_parser_pkg`, `fpga_status_request_pkg`, `protocol_constants_pkg`.
  - Checagens: sequência de bytes, detecção de header/tail, paridade e campos do frame.

- led_control_request_parser_tb.sv
  - Propósito: validar o parser `led_control_req_parser_pkg`.
  - Pacotes: `led_control_req_parser_pkg`, `led_control_request_pkg`, `protocol_constants_pkg`.
  - Checagens: tipo LED_CTRL, máscara/valor, paridade e término do frame.

- start_move_request_parser_tb.sv, move_home_request_parser_tb.sv,
  move_probe_level_request_parser_tb.sv, move_end_request_parser_tb.sv,
  move_queue_add_request_parser_tb.sv, move_queue_status_request_parser_tb.sv
  - Propósito: validar cada parser de requisição correspondente.
  - Pacotes: `*_req_parser_pkg.sv`, `*_request_pkg.sv`, `protocol_constants_pkg`.
  - Checagens: estado interno, campos, paridade, sinalização `frame_valid`/`frame_error`.

### Roteamento de Requests (unitário)
- request_router_tb.sv
  - Propósito: validar o roteador genérico `request_router_pkg` recebendo bytes em sequência e delegando aos parsers corretos.
  - Pacotes: `request_router_pkg` + todos os `*_req_parser_pkg.sv` e `*_request_pkg.sv`.
  - Checagens: seleção do parser por `msgType`, propagação de `frame_valid`/`frame_error`, eco de `out_msgType`.

### Serviços de RX SPI (unitários)
- spi_rx_mosi_service_tb.sv
  - Propósito: validar a captura de bytes (strobe `spi_byte_valid`/`spi_byte`) em uma FIFO.
  - Módulos: `spi_rx_mosi_service`, interface `spi_fifo_if`.
  - Checagens: escrita na FIFO, contagem, flag de `overflow_error` quando cheia.

- spi_rx_mosi_flow_tb.sv
  - Propósito: fluxo de bytes realista (vários frames) passando por `spi_rx_mosi_service` -> FIFO.
  - Módulos: `spi_rx_mosi_service`, `spi_fifo_if`.
  - Checagens: contagem/latência esperada, ausência de overflow para cenários nominais.

- spi_rx_hub_service_tb.sv
  - Propósito: validar o consumo da FIFO e roteamento (`spi_rx_hub_service`).
  - Módulos/pacotes: `spi_rx_hub_service`, `request_router_pkg`, `spi_fifo_if`.
  - Checagens: geração de `frame_valid`/`frame_error`, decodificação de frames para os pacotes de request.

### Serviços de TX SPI (unitários)
- spi_tx_buffer_tb.sv
  - Propósito: sanity checks do caminho de TX em buffer/FIFO (exercícios de escrita/leitura de bytes).
  - Módulos/IFs: `spi_fifo_if` (produtor/consumidor), utilitários de bytes do projeto.
  - Checagens: ordenação dos bytes, underflow/overflow de FIFO evitados.

- spi_tx_hub_service_tb.sv
  - Propósito: validar o hub de publicação (`spi_tx_hub_service`) agregando N streams com round-robin e serializando para uma FIFO de TX.
  - Módulos/IFs: `spi_tx_hub_service`, `resp_stream_if`, `spi_fifo_if`, `spi_service_pkg`.
  - Checagens: política de round-robin, handshake `valid/ready`, serialização correta de `bits/len` para bytes.

### Serviço LED (unitário)
- led_service_tb.sv
  - Propósito: validar `led_service` recebendo frames `LED_CTRL` e publicando resposta.
  - Pacotes/IFs: `led_control_request_pkg`, `led_control_response_pkg`, `protocol_constants_pkg`, `resp_stream_if`.
  - Checagens: atualização de `leds[5:0]`, geração de `resp_valid`/`resp_frame`, paridade/eco do frameId.

### Integrações (sub-sistema)
- spi_led_integration_tb.sv
  - Propósito: integrar RX (captura+hub) -> `led_service` -> TX hub, usando estímulos diretos de bytes.
  - Módulos: `spi_rx_mosi_service`, `spi_rx_hub_service`, `led_service`, `spi_tx_hub_service`.
  - Checagens: `resp_valid`, conteúdo do `resp_frame`, bytes na FIFO de TX (7B por resposta LED_CTRL).

- spi_full_flow_led_20_tb.sv
  - Propósito: fluxo completo com 20 mensagens de LED, medindo métricas (latência, ocupação de FIFOs).
  - Módulos: mesmo pipeline de `spi_led_integration_tb` com laço de mensagens e contador de métricas.
  - Checagens: 20 enviadas/20 recebidas, latência e ocupações dentro de limites esperados.

- spi_master_slave_integration_tb.sv
  - Propósito: integrar um BFM de master SPI (modo 0) com o wrapper `spi_slave` (STUB), roteador e serviço de LED.
  - Módulos: `spi_slave` (STUB quando `SIM_STUB_SPI_CORE`), `spi_rx_slave_service`, `spi_rx_mosi_service`, `spi_rx_hub_service`, `led_service`, `spi_tx_hub_service`, `spi_tx_miso_service`.
  - Estímulo: o BFM envia 7B de `LED_CTRL` e depois lê 7B de resposta em transação separada (SS_n de-assert entre transações).
  - Checagens: `resp_type` (tipo LED_CTRL), eco de frameId/mask, `status==0`, paridade.

- spi_master_vo_integration_tb.sv
  - Propósito: integrar o netlist do `gw_spi_master` (VO) com o wrapper `spi_slave` e verificar integração elétrica.
  - Módulos/arquivos: `gw_spi_master.vo` (em `tb/tests/lib/simulate_vo`), `spi_slave` (STUB), `spi_rx_*`, `led_service`, `spi_tx_*`.
  - Requisitos: simlib Gowin (`tb/tests/lib/simlib/gw2a/prim_sim.v`) e instância global `GSR` no TB.
  - Checagens: o teste aguarda um período e verifica `error_out==0`. Ele não depende de `resp_valid` de LED, pois o VO de referência não publica `LED_CTRL`.
  - Execução: `vsim -c -do "tb/modelsim/run_master_vo_integration.tcl"`.

### Utilidades
- framings_tb.sv
  - Propósito: suporte/fixtures para testes de framings (estrutura auxiliar).
  - Pacotes: `bytes_util_pkg` e dependências compartilhadas.

## Pastas auxiliares
- lib/simlib: bibliotecas de simulação da Gowin (GW2A/GW1N) usadas em ModelSim.
- lib/test_macros.svh: macros comuns de assert para os TBs.
- temp: bibliotecas temporárias de simulação (vlib/vmap) criadas pelos scripts.

## Dicas
- Para depurar um TB específico no ModelSim:
  - `vlog -sv -mfcu +incdir+tb/tests tb/tests/<nome_do_tb>.sv`
  - `vsim -c <top_do_tb> -do "run -all; quit -sim"`
- Para rodar o fluxo com o VO, confira se `tb/tests/lib/simulate_vo/gw_spi_master.vo` está presente (o script copia de Downloads se necessário) e que a simlib foi compilada.

