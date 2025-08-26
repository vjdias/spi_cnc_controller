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
    // Interface interna (registradores do IP)
    // -> conecte numa FSM/CPU/SoC internos
    // -------------------------
    input  wire        bus_wr_en,  // pulso >=1 ciclo i_clk
    input  wire [2:0]  bus_waddr,
    input  wire [7:0]  bus_wdata,
    input  wire        bus_rd_en,  // pulso >=1 ciclo i_clk
    input  wire [2:0]  bus_raddr,
    output wire [7:0]  bus_rdata,
    output wire        spi_irq
);

    // -------------------------
    // Instância do wrapper SPI slave
    // -------------------------
    spi_slave u_spi_slave (
        // clock/reset
        .i_clk      (i_clk),
        .i_resetn   (i_resetn),

        // escrita (TX)
        .wr_en      (bus_wr_en),
        .waddr      (bus_waddr),
        .wdata      (bus_wdata),

        // leitura (RX)
        .rd_en      (bus_rd_en),
        .raddr      (bus_raddr),
        .rdata      (bus_rdata),
        .irq        (spi_irq),

        // pinos do RPi
        .sclk_slave (pi_sclk),
        .ss_n_slave (pi_csn),
        .mosi_slave (pi_mosi),
        .miso_slave (pi_miso)
    );

endmodule
`endif // __TOP_SV__