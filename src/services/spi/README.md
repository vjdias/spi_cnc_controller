# SPI RX Services — README

 Este README documenta o pipeline de recepção SPI em simulação e o roteamento de frames,
 incluindo dicas de depuração para `frame_valid`/`frame_error` e a opção de tolerância a ruído.

## Pipeline de RX
- `spi_rx_slave_service`: expõe o par `o_RX_DV/o_RX_Byte` do núcleo `SPI_Slave` como
  `spi_byte_valid/spi_byte`.
- `spi_rx_mosi_service`: insere cada byte válido em uma `spi_fifo_if` (FIFO). Expõe `overflow_error` e `slave_busy` (backpressure sim).
- `spi_rx_hub_service`: consome a FIFO e alimenta o `request_router_pkg::feed`, que decodifica frames e emite `frame_valid`/`frame_error` e o `out_msgType`.

## Por que `frame_error` pode aparecer logo após `frame_valid`?
- Após concluir um frame válido, o roteador volta ao estado "aguardando HEADER". Se o próximo byte recebido não for `REQ_HEADER` (0xAA), ele sinaliza `frame_error`.
- Causas comuns:
  - Byte extra/padding entre frames (off-by-one no TB, índice invertido MSB/LSB, tamanho de frame divergente do encoder).
  - `overflow_error`/descartar-antigo na FIFO corrompe alinhamento; próximo byte não é 0xAA.
  - Reclock no master após o TAIL: mais um 0x55 “vazando” entra como primeiro byte do próximo frame (esperava 0xAA, cai em erro).
  - Reset ou flush de FIFO entre frames: primeiro byte pós-reset não é header.

## Dicas de depuração
- Monitore: `u_cons.frame_valid`, `u_cons.frame_error`, `u_cons.out_msgType`, `u_cap.fifo.count`, `spi_byte`, `overflow_error`.
- Garanta no TB: enviar exatamente `FRAME_BITS/8` bytes por frame, na ordem `raw[FRAME_BITS-1 - i*8 -: 8]`, sem padding extra.
- Respeite `slave_busy` antes de empurrar novos bytes (evita overflow).

## Tolerância a ruído (ROUTER_IGNORE_NOISE)
- Por padrão, o roteador sinaliza erro quando está aguardando header e o byte não é `REQ_HEADER`.
- Em simulação, pode ser útil ignorar bytes espúrios/ruído entre frames.
- Ativação: compile com `+define+ROUTER_IGNORE_NOISE`.
  - Efeito: no estado de HEADER, bytes diferentes de 0xAA são descartados silenciosamente (não há `frame_error`); o roteador permanece aguardando o próximo header.
- Trade-offs: ajuda a tornar o pipeline mais resiliente a estímulos imperfeitos em simulação, mas pode mascarar problemas reais de alinhamento. Recomendado mantê-lo desativado em builds de produção.

## Scripts de simulação
- Os scripts em `tb/modelsim/*.tcl` já adicionam `+define+ROUTER_IGNORE_NOISE` nas compilações de simulação para ModelSim.

