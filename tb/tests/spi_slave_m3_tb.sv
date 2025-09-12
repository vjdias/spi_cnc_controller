`timescale 1ns/1ps
`include "lib/test_macros.svh"

module spi_slave_m3_tb;
  // System clock and reset
  logic clk = 0; always #5 clk = ~clk; // 100 MHz
  logic rst_n = 0;

  // SPI pins (Mode 3)
  logic sclk;     // idle high
  logic ss_n;     // active low
  logic mosi;
  wire  miso;

  // Register IF
  logic        wr_en;
  logic [2:0]  waddr;
  logic [7:0]  wdata;
  logic        rd_en;
  logic [2:0]  raddr;
  logic [7:0]  rdata;
  logic        irq;

  // DUT
  spi_slave #(.RX_DEPTH(16), .TX_DEPTH(16)) dut (
    .i_clk(clk), .i_resetn(rst_n),
    .wr_en(wr_en), .waddr(waddr), .wdata(wdata),
    .rd_en(rd_en), .raddr(raddr), .rdata(rdata), .irq(irq),
    .sclk_slave(sclk), .ss_n_slave(ss_n), .mosi_slave(mosi), .miso_slave(miso)
  );

  // Mode 3 master BFM
  localparam int SCLK_HALF = 2; // 2 ns half period

  task automatic spi_begin_m3();
    ss_n = 1'b0; sclk = 1'b1; // idle high
  endtask

  task automatic spi_end_m3();
    sclk = 1'b1; ss_n = 1'b1;
  endtask

  task automatic spi_transfer_byte_m3(input  logic [7:0] tx,
                                      output logic [7:0] rx);
    rx = '0;
    for (int i = 7; i >= 0; i--) begin
      mosi = tx[i];
      #SCLK_HALF; sclk = 1'b0; // falling edge: drive changes
      #SCLK_HALF; sclk = 1'b1; // rising edge: sample
      rx[i] = miso;
    end
  endtask

  // Helpers (system IF)
  task automatic write_tx(input logic [7:0] b);
    @(posedge clk);
    waddr <= 3'd0; wdata <= b; wr_en <= 1'b1;
    @(posedge clk);
    wr_en <= 1'b0;
  endtask

  task automatic read_rx(output logic [7:0] b);
    @(posedge clk);
    raddr <= 3'd0; rd_en <= 1'b1;
    @(posedge clk);
    rd_en <= 1'b0; b = rdata;
  endtask

  // Test state
  logic [7:0] rb, rx1, rx2, rx3;

  initial begin
    // defaults
    sclk = 1'b1; ss_n = 1'b1; mosi = 1'b0;
    wr_en = 1'b0; rd_en = 1'b0; waddr = '0; raddr = '0; wdata = '0;
    repeat (4) @(posedge clk);
    rst_n = 1;

    // Preload two TX bytes
    write_tx(8'hA5);
    write_tx(8'h5A);

    // Transfer 2 bytes (reading MISO)
    spi_begin_m3();
    spi_transfer_byte_m3(8'h00, rb);
    if (rb == 8'hA5) $display("[PASS] miso_first_byte: got=%02h", rb); else $display("[FAIL] miso_first_byte: got=%02h exp=A5", rb);
    `TEST_ASSERT(rb == 8'hA5, "miso_first_byte")
    spi_transfer_byte_m3(8'h00, rb);
    if (rb == 8'h5A) $display("[PASS] miso_second_byte: got=%02h", rb); else $display("[FAIL] miso_second_byte: got=%02h exp=5A", rb);
    `TEST_ASSERT(rb == 8'h5A, "miso_second_byte")
    spi_end_m3();

    // Send 3 MOSI bytes, then drain via system IF
    spi_begin_m3();
    spi_transfer_byte_m3(8'h11, rb);
    spi_transfer_byte_m3(8'h22, rb);
    spi_transfer_byte_m3(8'h33, rb);
    spi_end_m3();

    // Wait a few sys cycles and check irq
    repeat (4) @(posedge clk);
    if (irq) $display("[PASS] irq_asserted"); else $display("[FAIL] irq_asserted");
    `TEST_ASSERT(irq == 1'b1, "irq_asserted")

    read_rx(rx1); if (rx1 == 8'h11) $display("[PASS] rx1: %02h", rx1); else $display("[FAIL] rx1: got=%02h exp=11", rx1); `TEST_ASSERT(rx1 == 8'h11, "rx1")
    read_rx(rx2); if (rx2 == 8'h22) $display("[PASS] rx2: %02h", rx2); else $display("[FAIL] rx2: got=%02h exp=22", rx2); `TEST_ASSERT(rx2 == 8'h22, "rx2")
    read_rx(rx3); if (rx3 == 8'h33) $display("[PASS] rx3: %02h", rx3); else $display("[FAIL] rx3: got=%02h exp=33", rx3); `TEST_ASSERT(rx3 == 8'h33, "rx3")

    repeat (2) @(posedge clk);
    if (!irq) $display("[PASS] irq_cleared"); else $display("[FAIL] irq_cleared");
    `TEST_ASSERT(irq == 1'b0, "irq_cleared")

    $display("Sucesso: spi_slave_m3_tb");
    $finish;
  end
endmodule

