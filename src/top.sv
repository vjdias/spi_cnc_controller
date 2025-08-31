`ifndef __TOP_SV__
`define __TOP_SV__
// top.sv
// Instancia o wrapper spi_slave e expõe a interface p/ lógica interna.
// Ajuste nomes de pinos conforme seu .cst / board.
//
// SPDX-License-Identifier: MIT

module top (
    // -------------------------
    // Clock/Reset de sistema
    // -------------------------
    input  wire        i_clk,      // ex.: 27 MHz do Tang Primer
    input  wire        i_resetn,   // reset ativo-baixo

    // -------------------------
    // Pinos SPI do Raspberry Pi
    // -------------------------
    input  wire        pi_sclk,    // SCLK
    input  wire        pi_csn,     // CE0/CE1 (CS#), ativo em 0
    input  wire        pi_mosi,    // MOSI
    output wire        pi_miso,    // MISO (vai em Z quando CS#=1)

    // -------------------------
    // Interface do wrapper (exportada, mas será dirigida internamente)
    // Mantida por compatibilidade com TBs; não use externamente.
    // -------------------------
    input  wire        bus_wr_en,  // não utilizado (driven internamente)
    input  wire [2:0]  bus_waddr,  // não utilizado
    input  wire [7:0]  bus_wdata,  // não utilizado
    input  wire        bus_rd_en,  // não utilizado
    input  wire [2:0]  bus_raddr,  // não utilizado
    output wire [7:0]  bus_rdata,  // espelha dado do wrapper
    output wire        spi_irq,    // espelha IRQ do wrapper

    // -------------------------
    // Sinais de LED (usados por testes de integração)
    // -------------------------
    output wire [5:0]  leds
);

    // -------------------------
    // Sinais internos para o wrapper e pipeline SPI
    // -------------------------
    // Pinos SPI
    wire sclk_slave_i = pi_sclk;
    wire ss_n_slave_i = pi_csn;
    wire mosi_slave_i = pi_mosi;
    wire miso_slave_i;

    // Barramento interno do wrapper (TX para o core)
    wire        wr_en_i;
    wire [2:0]  waddr_i;
    wire [7:0]  wdata_i;
    // Barramento interno do wrapper (RX do core)
    wire        rd_en_i;
    wire [2:0]  raddr_i;
    wire [7:0]  rdata_o;
    wire        irq_o;

    // Saída MISO do wrapper vai ao pino externo
    assign pi_miso = miso_slave_i;

    // -------------------------
    // Instância do wrapper SPI slave
    // -------------------------
    spi_slave u_spi_slave (
        // clock/reset
        .i_clk      (i_clk),
        .i_resetn   (i_resetn),

        // escrita (TX)
        .wr_en      (wr_en_i),
        .waddr      (waddr_i),
        .wdata      (wdata_i),

        // leitura (RX)
        .rd_en      (rd_en_i),
        .raddr      (raddr_i),
        .rdata      (rdata_o),
        .irq        (irq_o),

        // pinos do RPi
        .sclk_slave (sclk_slave_i),
        .ss_n_slave (ss_n_slave_i),
        .mosi_slave (mosi_slave_i),
        .miso_slave (miso_slave_i)
    );

    // Exporta sinais de status do wrapper
    assign bus_rdata = rdata_o;
    assign spi_irq   = irq_o;

    // -------------------------
    // Bridge wrapper->bytes (sempre presente; sintetizável)
    // -------------------------
    wire                        rx_byte_valid;
    spi_service_pkg::byte_t     rx_byte;
    spi_rx_slave_service #(
      .RX_DATA_ADDR(3'd0),
      .BACK_TO_BACK_READS(1'b1)
    ) u_rx_bridge (
      .clk            (i_clk),
      .rst_n          (i_resetn),
      .rd_en          (rd_en_i),
      .raddr          (raddr_i),
      .rdata          (rdata_o),
      .irq            (irq_o),
      .spi_byte_valid (rx_byte_valid),
      .spi_byte       (rx_byte)
    );

// Caminho sintetizável fixo (sem bloco de simulação no top)
    // Caminho de síntese: usa FIFO e variantes handshake
    // FIFO de RX (bytes do bridge)
    logic                 rx_fifo_wr_en;
    spi_service_pkg::byte_t rx_fifo_wr_data;
    logic                 rx_fifo_full;
    logic                 rx_fifo_rd_en;
    logic [7:0]           rx_fifo_rd_data;
    logic                 rx_fifo_rd_valid;
    logic                 rx_fifo_empty;

    // Escritor: serviço de captura
    wire rx_overflow;
    wire rx_busy;
    spi_rx_mosi_service u_rx_cap_synth (
      .clk            (i_clk),
      .rst_n          (i_resetn),
      .spi_byte_valid (rx_byte_valid),
      .spi_byte       (rx_byte),
      .fifo_wr_en     (rx_fifo_wr_en),
      .fifo_wr_data   (rx_fifo_wr_data),
      .fifo_full      (rx_fifo_full),
      .overflow_error (rx_overflow),
      .slave_busy     (rx_busy)
    );

    byte_fifo_sync #(.DEPTH(spi_service_pkg::RX_FIFO_DEPTH)) u_rx_fifo (
      .clk      (i_clk),
      .rst_n    (i_resetn),
      .wr_en    (rx_fifo_wr_en),
      .wr_data  (rx_fifo_wr_data),
      .full     (rx_fifo_full),
      .rd_en    (rx_fifo_rd_en),
      .rd_data  (rx_fifo_rd_data),
      .rd_valid (rx_fifo_rd_valid),
      .empty    (rx_fifo_empty)
    );

    // Leitor/roteador
    wire                        frame_valid;
    wire                        frame_error;
    spi_service_pkg::byte_t     out_msgType;
    led_control_request_pkg::led_ctrl_req_bytes_t led_req;

    spi_rx_hub_service u_rx_hub_synth (
      .clk             (i_clk),
      .rst_n           (i_resetn),
      .fifo_empty      (rx_fifo_empty),
      .fifo_rd_en      (rx_fifo_rd_en),
      .fifo_rd_data    (rx_fifo_rd_data),
      .fifo_rd_valid   (rx_fifo_rd_valid),
      .frame_valid     (frame_valid),
      .frame_error     (frame_error),
      .out_msgType     (out_msgType),
      .move_home_frame (),
      .start_move_frame(),
      .move_probe_frame(),
      .queue_add_frame (),
      .move_end_frame  (),
      .queue_status_frame(),
      .fpga_status_frame (),
      .led_ctrl_frame  (led_req)
    );

    // LED service (sintetizável; stream não é consumido em HW)
    resp_stream_if led_stream();
    wire                        led_resp_valid;
    led_control_response_pkg::led_ctrl_resp_bytes_t led_resp_frame;
    led_service u_led_synth (
      .clk        (i_clk),
      .rst_n      (i_resetn),
      .frame_valid(frame_valid),
      .msgType    (out_msgType),
      .led_req    (led_req),
      .leds       (leds),
      .resp_valid (led_resp_valid),
      .resp_frame (led_resp_frame),
      .tx_stream  (led_stream)
    );


endmodule
`endif // __TOP_SV__
