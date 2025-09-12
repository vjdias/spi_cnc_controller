`ifndef ASYNC_FIFO_GRAY_RTL_SV
`define ASYNC_FIFO_GRAY_RTL_SV
// Simple asynchronous FIFO using Gray-coded pointers.
// - Dual-clock: independent write/read clocks and resets
// - Depth must be a power of two
// - One-cycle read latency (rd_valid asserts with rd_data)

module async_fifo_gray_rtl #(
  parameter int WIDTH      = 8,
  parameter int DEPTH      = 16,
  // derived; pointer uses one extra bit for full/empty discrimination
  localparam int ADDR_BITS = ($clog2(DEPTH) > 0) ? $clog2(DEPTH) : 1,
  localparam int PTR_BITS  = ADDR_BITS + 1
) (
  // write side (wr_clk domain)
  input  logic                 wr_clk,
  input  logic                 wr_rst_n,
  input  logic                 wr_en,
  input  logic [WIDTH-1:0]     wr_data,
  output logic                 wr_full,

  // read side (rd_clk domain)
  input  logic                 rd_clk,
  input  logic                 rd_rst_n,
  input  logic                 rd_en,
  output logic [WIDTH-1:0]     rd_data,
  output logic                 rd_valid,
  output logic                 rd_empty,
  // optional peek (asynchronous read of current head, for early look)
  output logic [WIDTH-1:0]     rd_peek_data,
  output logic                 rd_peek_valid
);

  // storage
  logic [WIDTH-1:0] mem [0:DEPTH-1];

  // binary and Gray pointers
  logic [PTR_BITS-1:0] wptr_bin, wptr_gray, wptr_bin_next, wptr_gray_next;
  logic [PTR_BITS-1:0] rptr_bin, rptr_gray, rptr_bin_next, rptr_gray_next;

  // synchronized pointers
  logic [PTR_BITS-1:0] rptr_gray_sync_w1, rptr_gray_sync_w2;
  logic [PTR_BITS-1:0] wptr_gray_sync_r1, wptr_gray_sync_r2;

  // Gray conversion
  function automatic logic [PTR_BITS-1:0] bin2gray(input logic [PTR_BITS-1:0] b);
    return (b >> 1) ^ b;
  endfunction

  // Write side
  // advance when wr_en and not full
  assign wptr_bin_next  = wptr_bin + (wr_en && !wr_full);
  assign wptr_gray_next = bin2gray(wptr_bin_next);

  // Full when next write pointer equals read pointer with MSBs inverted
  always_ff @(posedge wr_clk or negedge wr_rst_n) begin
    if (!wr_rst_n) begin
      wptr_bin <= '0;
      wptr_gray <= '0;
    end else begin
      wptr_bin  <= wptr_bin_next;
      wptr_gray <= wptr_gray_next;
      if (wr_en && !wr_full) begin
        mem[wptr_bin[ADDR_BITS-1:0]] <= wr_data;
      end
    end
  end

  // sync read pointer into write clock domain
  always_ff @(posedge wr_clk or negedge wr_rst_n) begin
    if (!wr_rst_n) begin
      rptr_gray_sync_w1 <= '0;
      rptr_gray_sync_w2 <= '0;
    end else begin
      rptr_gray_sync_w1 <= rptr_gray;
      rptr_gray_sync_w2 <= rptr_gray_sync_w1;
    end
  end

  // full detection
  // In Gray, full when next write pointer equals read pointer with MSB inverted and next MSB inverted
  // Equivalent for power-of-2 depth FIFOs using PTR_BITS (with extra bit)
  assign wr_full = (wptr_gray_next == {~rptr_gray_sync_w2[PTR_BITS-1:PTR_BITS-2], rptr_gray_sync_w2[PTR_BITS-3:0]});

  // Read side
  assign rptr_bin_next  = rptr_bin + (rd_en && !rd_empty);
  assign rptr_gray_next = bin2gray(rptr_bin_next);

  always_ff @(posedge rd_clk or negedge rd_rst_n) begin
    if (!rd_rst_n) begin
      rptr_bin  <= '0;
      rptr_gray <= '0;
      rd_data   <= '0;
      rd_valid  <= 1'b0;
    end else begin
      // default
      rd_valid <= 1'b0;
      if (rd_en && !rd_empty) begin
        rd_data  <= mem[rptr_bin[ADDR_BITS-1:0]];
        rd_valid <= 1'b1;
      end
      rptr_bin  <= rptr_bin_next;
      rptr_gray <= rptr_gray_next;
    end
  end

  // sync write pointer into read clock domain
  always_ff @(posedge rd_clk or negedge rd_rst_n) begin
    if (!rd_rst_n) begin
      wptr_gray_sync_r1 <= '0;
      wptr_gray_sync_r2 <= '0;
    end else begin
      wptr_gray_sync_r1 <= wptr_gray;
      wptr_gray_sync_r2 <= wptr_gray_sync_r1;
    end
  end

  // empty detection
  assign rd_empty = (wptr_gray_sync_r2 == rptr_gray);

  // Asynchronous peek at current read pointer (for early consumption)
  // Note: This is a combinational read of the storage at the current head.
  // Use with care; ensure writer meets timing and no concurrent read/write on same entry.
  assign rd_peek_data  = mem[rptr_bin[ADDR_BITS-1:0]];
  assign rd_peek_valid = !rd_empty;

endmodule
`endif
