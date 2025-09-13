`ifndef __SPI_SLAVE_WRAP_SV__
`define __SPI_SLAVE_WRAP_SV__

// Simple, simulation-friendly SPI slave wrapper with register interface
// Exposes:
//  - TX write: wr_en & waddr==0 & wdata -> bytes shifted out on MISO (MSB first)
//  - RX read:  rd_en & raddr==0 -> rdata; irq=1 when a byte is available
// Mode: implements SPI Mode 0 timing (CPOL=0, CPHA=0) used by TBs.
// This module is intended for simulation/integration TBs and is not a hard IP.

module spi_slave #(
    parameter int RX_DEPTH = 16,
    parameter int TX_DEPTH = 16
) (
    input  wire        i_clk,
    input  wire        i_resetn,

    // write (TX)
    input  wire        wr_en,
    input  wire [2:0]  waddr,
    input  wire [7:0]  wdata,

    // read (RX)
    input  wire        rd_en,
    input  wire [2:0]  raddr,
    output wire [7:0]  rdata,
    output wire        irq,

    // SPI pins
    input  wire        sclk_slave, // CPOL=0
    input  wire        ss_n_slave, // active-low CS
    input  wire        mosi_slave,
    output wire        miso_slave
);
  // Simple TX buffer queue (depth 16) loaded while SS# high
  reg [7:0] tx_buf[0:15];
  reg [3:0] tx_count;     // number of valid bytes queued
  reg [3:0] tx_idx;       // index of current byte in this transaction
  reg [7:0] tx_reg;       // last written byte
  reg [7:0] tx_shift;

  // RX path (single-byte buffer level + irq)
  reg [7:0] rx_shift;
  reg [7:0] rx_reg;
  reg [2:0] bit_cnt;      // 0..7 (counts posedges)
  reg       irq_r;
  reg [7:0] rdata_r;

  assign rdata = rdata_r;
  assign irq   = irq_r;

  // System writes: preload TX bytes when not selected
  always @(posedge i_clk or negedge i_resetn) begin
    if (!i_resetn) begin
      tx_reg   <= 8'h00;
      tx_count <= 4'd0;
      rdata_r  <= 8'h00;
      irq_r    <= 1'b0;
    end else begin
      if (wr_en && (waddr == 3'd0)) begin
        tx_reg <= wdata;
        if (tx_count < 4'd15) begin
          tx_buf[tx_count] <= wdata;
          tx_count <= tx_count + 4'd1;
        end
      end
      if (rd_en && (raddr == 3'd0)) begin
        rdata_r <= rx_reg;
        irq_r   <= 1'b0; // clear-on-read
      end
    end
  end

  // Start of transaction: load first TX byte
  always @(negedge ss_n_slave or negedge i_resetn) begin
    if (!i_resetn) begin
      tx_shift <= 8'h00;
      tx_idx   <= 4'd0;
    end else begin
      tx_idx <= 4'd0;
      if (tx_count != 0)
        tx_shift <= tx_buf[0];
      else
        tx_shift <= tx_reg;
    end
  end

  // End of transaction: consume used TX bytes from the queue
  integer k;
  always @(posedge ss_n_slave or negedge i_resetn) begin
    if (!i_resetn) begin
      tx_count <= 4'd0;
    end else if (tx_idx != 0) begin
      for (k = 0; k < 15; k = k + 1) begin
        if (k + tx_idx < 16)
          tx_buf[k] <= tx_buf[k + tx_idx];
      end
      if (tx_count > tx_idx) tx_count <= tx_count - tx_idx;
      else tx_count <= 4'd0;
    end
  end

  // Mode 0: sample MOSI on rising edge; count bits
  always @(posedge sclk_slave or posedge ss_n_slave or negedge i_resetn) begin
    if (!i_resetn) begin
      rx_shift <= 8'h00;
      bit_cnt  <= 3'd0;
    end else if (ss_n_slave) begin
      bit_cnt  <= 3'd0;
    end else begin
      rx_shift <= {rx_shift[6:0], mosi_slave};
      bit_cnt  <= bit_cnt + 3'd1;
      if (bit_cnt == 3'd7) begin
        rx_reg <= {rx_shift[6:0], mosi_slave};
        irq_r  <= 1'b1;
      end
    end
  end

  // Shift out MISO on falling edge; reload next byte at byte boundary
  always @(negedge sclk_slave or posedge ss_n_slave or negedge i_resetn) begin
    if (!i_resetn) begin
      tx_shift <= 8'h00;
    end else if (ss_n_slave) begin
      // hold
    end else begin
      if (bit_cnt == 3'd0) begin
        // next byte
        if (tx_idx + 1 < tx_count) begin
          tx_shift <= tx_buf[tx_idx + 1];
          tx_idx   <= tx_idx + 1;
        end else begin
          tx_shift <= tx_reg;
          tx_idx   <= tx_idx + 1;
        end
      end else begin
        tx_shift <= {tx_shift[6:0], 1'b0};
      end
    end
  end

  assign miso_slave = tx_shift[7];

endmodule
`endif // __SPI_SLAVE_WRAP_SV__
