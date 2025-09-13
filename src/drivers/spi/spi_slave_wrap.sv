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
  // Use ring buffer (head/count). All writes/updates occur in i_clk domain
  // to avoid multi-driver issues across clock domains.
  reg [7:0] tx_buf[0:15];
  reg [3:0] tx_head;      // ring buffer head index (0..15)
  reg [3:0] tx_count;     // number of valid bytes queued (0..15)
  reg [3:0] tx_idx;       // index of current byte within this transaction (SPI domain)
  reg [7:0] tx_reg;       // last written byte (fallback when queue empty)
  reg [7:0] tx_shift;     // SPI shift register (MISO)

  // RX path (single-byte buffer level + irq)
  reg [7:0] rx_shift;
  reg [7:0] rx_reg;
  reg [2:0] bit_cnt;      // 0..7 (counts posedges)
  reg       irq_r;
  reg [7:0] rdata_r;

  // MISO output bit and first-fall control to avoid multi-driver on tx_shift
  reg       miso_bit;
  reg       first_fall;

  // RX done handshake from SPI domain to i_clk domain
  reg       rx_done_tgl_spi;
  reg       rx_done_sync_0, rx_done_sync_1;
  reg       rx_done_seen;

  assign rdata = rdata_r;
  assign irq   = irq_r;

  // Synchronize SS# transition to i_clk domain for end-of-transaction accounting
  reg        ss_sync_0, ss_sync_1;
  reg        tx_done_tgl_spi;         // toggled in SPI domain on CS rising
  reg        tx_done_sync_0, tx_done_sync_1; // sync to i_clk domain
  reg        tx_done_seen;            // last seen toggle state in i_clk domain
  reg [3:0]  consumed_spi;            // latched in SPI domain at CS rising

  // System writes and RX read handling in i_clk domain
  always @(posedge i_clk or negedge i_resetn) begin
    if (!i_resetn) begin
      tx_reg        <= 8'h00;
      tx_head       <= 4'd0;
      tx_count      <= 4'd0;
      rdata_r       <= 8'h00;
      irq_r         <= 1'b0;
      ss_sync_0     <= 1'b1;
      ss_sync_1     <= 1'b1;
      tx_done_sync_0<= 1'b0;
      tx_done_sync_1<= 1'b0;
      tx_done_seen  <= 1'b0;
      rx_done_sync_0<= 1'b0;
      rx_done_sync_1<= 1'b0;
      rx_done_seen  <= 1'b0;
    end else begin
      // Synchronize SS# (not strictly required for gating writes)
      ss_sync_0 <= ss_n_slave;
      ss_sync_1 <= ss_sync_0;

      // Sync handshake toggle from SPI domain
      tx_done_sync_0 <= tx_done_tgl_spi;
      tx_done_sync_1 <= tx_done_sync_0;
      rx_done_sync_0 <= rx_done_tgl_spi;
      rx_done_sync_1 <= rx_done_sync_0;

      // On toggle edge: consume bytes sent in last transaction
      if (tx_done_sync_1 ^ tx_done_seen) begin
        tx_done_seen <= tx_done_sync_1;
        if (tx_count > consumed_spi)
          tx_count <= tx_count - consumed_spi;
        else
          tx_count <= 4'd0;
        // advance head by consumed count
        tx_head <= (tx_head + consumed_spi) & 4'hF;
      end

      // On RX done toggle edge: raise IRQ
      if (rx_done_sync_1 ^ rx_done_seen) begin
        rx_done_seen <= rx_done_sync_1;
        irq_r        <= 1'b1;
      end

      // Preload TX bytes only when not selected (SS# high) to avoid contention
      if (wr_en && (waddr == 3'd0) && ss_sync_1) begin
        tx_reg <= wdata;
        if (tx_count < 4'd15) begin
          // tail = head + count (mod 16)
          tx_buf[(tx_head + tx_count) & 4'hF] <= wdata;
          tx_count <= tx_count + 4'd1;
        end
      end

      // Read path (clear IRQ on read)
      if (rd_en && (raddr == 3'd0)) begin
        rdata_r <= rx_reg;
        irq_r   <= 1'b0; // clear-on-read
      end
    end
  end

  // Removed CS-falling preload of tx_shift to ensure single driver (handled in sclk block)

  // End-of-transaction handling moved into SCLK falling-edge block to avoid CS# as a clock

  // Mode 0: sample MOSI on rising edge; count bits
  always @(posedge sclk_slave or posedge ss_n_slave or negedge i_resetn) begin
    if (!i_resetn) begin
      rx_shift        <= 8'h00;
      bit_cnt         <= 3'd0;
      rx_done_tgl_spi <= 1'b0;
    end else if (ss_n_slave) begin
      bit_cnt  <= 3'd0;
    end else begin
      rx_shift <= {rx_shift[6:0], mosi_slave};
      bit_cnt  <= bit_cnt + 3'd1;
      if (bit_cnt == 3'd7) begin
        rx_reg          <= {rx_shift[6:0], mosi_slave};
        rx_done_tgl_spi <= ~rx_done_tgl_spi; // pulse via toggle to i_clk domain
      end
    end
  end

  // Shift out MISO on falling edge; reload next byte at byte boundary
  // Also handles first falling edge after CS goes low without multi-driving tx_shift
  always @(negedge sclk_slave or posedge ss_n_slave or negedge i_resetn) begin
    if (!i_resetn) begin
      tx_shift   <= 8'h00;
      tx_idx     <= 4'd0;
      miso_bit   <= 1'b0;
      first_fall <= 1'b1;
      tx_done_tgl_spi <= 1'b0;
      consumed_spi    <= 4'd0;
    end else if (ss_n_slave) begin
      // New transaction not active: reset tx_idx and arm first-fall preload
      tx_idx     <= 4'd0;
      first_fall <= 1'b1;
      // End-of-transaction: capture bytes consumed and toggle handshake to i_clk domain
      consumed_spi    <= tx_idx;
      tx_done_tgl_spi <= ~tx_done_tgl_spi;
    end else begin
      // Active transaction
      if (first_fall) begin
        // First falling edge of this transaction: present MSB of first byte
        if (tx_count != 0) begin
          miso_bit <= tx_buf[tx_head][7];
          tx_shift <= {tx_buf[tx_head][6:0], 1'b0};
        end else begin
          miso_bit <= tx_reg[7];
          tx_shift <= {tx_reg[6:0], 1'b0};
        end
        first_fall <= 1'b0;
      end else if (bit_cnt == 3'd0) begin
        // Byte boundary: load next byte and advance index
        if ((tx_idx + 1'b1) < tx_count) begin
          miso_bit <= tx_buf[(tx_head + tx_idx + 1'b1) & 4'hF][7];
          tx_shift <= {tx_buf[(tx_head + tx_idx + 1'b1) & 4'hF][6:0], 1'b0};
          tx_idx   <= (tx_idx + 1'b1) & 4'hF;
        end else begin
          miso_bit <= tx_reg[7];
          tx_shift <= {tx_reg[6:0], 1'b0};
          tx_idx   <= (tx_idx + 1'b1) & 4'hF;
        end
      end else begin
        // Bit shift within current byte
        miso_bit <= tx_shift[7];
        tx_shift <= {tx_shift[6:0], 1'b0};
      end
    end
  end

  assign miso_slave = miso_bit;

endmodule
`endif // __SPI_SLAVE_WRAP_SV__
