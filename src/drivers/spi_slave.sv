`ifndef __SPI_SLAVE_SV__
`define __SPI_SLAVE_SV__
// spi_slave.sv
// Wrapper minimalista para o núcleo SPI no papel de SLAVE (RPi = master)
// - Expõe interface de registradores (wr_en/rd_en, addr, data, irq)
// - Liga diretamente os pinos SPI do RPi
// - Tri-state de MISO quando SS_N_SLAVE = 1 (via TBUF da Gowin)
//
// Autor: você + ChatGPT (Embarcados/FPGA)
// SPDX-License-Identifier: MIT

module spi_slave (
    // -------------------------
    // Clock/Reset de sistema
    // -------------------------
    input  wire        i_clk,      // clock de sistema (I_CLK)
    input  wire        i_resetn,   // reset ativo-baixo (I_RESETN)

    // -------------------------
    // Interface de escrita (TX)
    // -------------------------
    input  wire        wr_en,      // I_TX_EN
    input  wire [2:0]  waddr,      // I_WADDR[2:0]
    input  wire [7:0]  wdata,      // I_WDATA[7:0]

    // -------------------------
    // Interface de leitura (RX)
    // -------------------------
    input  wire        rd_en,      // I_RX_EN
    input  wire [2:0]  raddr,      // I_RADDR[2:0]
    output wire [7:0]  rdata,      // O_RDATA[7:0]
    output wire        irq,        // O_SPI_INT

    // -------------------------
    // Pinos SPI para Raspberry
    // -------------------------
    input  wire        sclk_slave, // SCLK do RPi (SCLK_SLAVE)
    input  wire        ss_n_slave, // CS# do RPi   (SS_N_SLAVE, ativo em 0)
    input  wire        mosi_slave, // MOSI do RPi  (MOSI_SLAVE)
    output wire        miso_slave  // MISO para RPi (tri-state quando ss_n_slave=1)
);

    // ----------------------------------------
    // Fio interno com os dados do núcleo p/ MISO
    // ----------------------------------------
    wire miso_from_core;

    // ----------------------------------------
    // Instância do núcleo gerado (slave)
    // (nome de módulo "escapado" conforme o gerador da Gowin)
    // ----------------------------------------
    \~spi_master.SPI_MASTER_Top u_spi_slave_core (
        .I_CLK     (i_clk),
        .I_RESETN  (i_resetn),

        .I_TX_EN   (wr_en),
        .I_WADDR   (waddr[2:0]),
        .I_WDATA   (wdata[7:0]),

        .I_RX_EN   (rd_en),
        .I_RADDR   (raddr[2:0]),
        .O_RDATA   (rdata[7:0]),
        .O_SPI_INT (irq),

        // Pinos SLAVE
        .SCLK_SLAVE(sclk_slave),
        .SS_N_SLAVE(ss_n_slave),
        .MOSI_SLAVE(mosi_slave),
        .MISO_SLAVE(miso_from_core)

        // Se a sua variante do core tiver também portas *_MASTER,
        // elas podem ficar desconectadas ou em tri-state fora daqui.
    );

    // ----------------------------------------
    // TRI-STATE de MISO quando o device NÃO está selecionado
    // Usa o TBUF da Gowin (igual o netlist do IP faz).
    // OEN = 1 ==> saída em Z; OEN = 0 ==> saída ativa
    // Logo, OEN recebe SS_N (alto = não selecionado = Z).
    // ----------------------------------------
    TBUF u_miso_buf (
        .O  (miso_slave),
        .I  (miso_from_core),
        .OEN(ss_n_slave)   // tri-state quando SS_n = 1
    );

endmodule
`default_nettype wire
`endif // __SPI_SLAVE_SV__