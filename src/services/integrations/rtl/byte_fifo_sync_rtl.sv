// -----------------------------------------------------------------------------
// byte_fifo_sync.sv
// FIFO síncrona simples para bytes (sintetizável)
// - Protocolo: write por pulso wr_en; read por pulso rd_en
// - Dados de leitura válidos no ciclo seguinte ao rd_en quando !empty
// -----------------------------------------------------------------------------
`ifndef BYTE_FIFO_SYNC_SV
`define BYTE_FIFO_SYNC_SV
module byte_fifo_sync #(
    parameter int DEPTH = 256,
    localparam int AW = $clog2(DEPTH)
  )(
    input  logic clk,
    input  logic rst_n,

    // write side
    input  logic                 wr_en,
    input  logic [7:0]           wr_data,
    output logic                 full,

    // read side
    input  logic                 rd_en,
    output logic [7:0]           rd_data,
    output logic                 rd_valid,
    output logic                 empty
);
  logic [7:0] mem [0:DEPTH-1];
  logic [AW:0] count;             // 0..DEPTH
  logic [AW-1:0] wptr, rptr;

  assign full  = (count == DEPTH);
  assign empty = (count == 0);

  // write
  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      wptr <= '0;
    end else if (wr_en && !full) begin
      mem[wptr] <= wr_data;
      wptr <= (wptr + 1'b1);
    end
  end

  // read request pipeline and output valid/data
  logic rd_en_q;
  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      rptr    <= '0;
      rd_data <= '0;
      rd_en_q <= 1'b0;
    end else begin
      rd_en_q <= (rd_en && !empty);
      if (rd_en && !empty) begin
        rd_data <= mem[rptr];
        rptr    <= (rptr + 1'b1);
      end
    end
  end

  assign rd_valid = rd_en_q;

  // count
  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      count <= '0;
    end else begin
      unique case ({(wr_en && !full), (rd_en && !empty)})
        2'b10: count <= count + 1'b1;
        2'b01: count <= count - 1'b1;
        default: count <= count;
      endcase
    end
  end
endmodule
`endif

