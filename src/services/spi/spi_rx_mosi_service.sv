// -----------------------------------------------------------------------------
// spi_rx_mosi_service.sv
//
// Captura bytes provenientes do periférico SPI (8 bits por vez) e os insere
// em uma FIFO. Caso a FIFO esteja cheia quando um novo byte chega, o sinal de
// erro `overflow_error` é acionado.
// -----------------------------------------------------------------------------
`ifndef SPI_RX_MOSI_SERVICE_SV
`define SPI_RX_MOSI_SERVICE_SV
// Disponível somente em simulação (ModelSim/Verilator)
`ifdef MODEL_TECH
`define __SIM_BUILD__
`endif
`ifdef VERILATOR
`define __SIM_BUILD__
`endif
`ifdef __SIM_BUILD__
module spi_rx_mosi_service (
    input  logic           clk,
    input  logic           rst_n,
    input  logic           spi_byte_valid,
    input  spi_service_pkg::byte_t spi_byte,
    spi_fifo_if.producer   fifo,
    output logic           overflow_error,
    output logic           slave_busy
);
  import spi_service_pkg::*;

  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      overflow_error <= 1'b0;
    end else begin
      overflow_error <= 1'b0; // limpa a cada ciclo
      if (spi_byte_valid) begin
        if (!fifo.full) begin
          fifo.write(spi_byte); // armazena byte na FIFO
        end else begin
          overflow_error <= 1'b1; // tentativa de escrita com FIFO cheia
        end
      end
    end
  end

  // Sinaliza quando a fila ultrapassa o limite seguro (4× MR)
`ifndef SYNTHESIS
  assign slave_busy = (fifo.count > spi_service_pkg::RX_BLOCK_LEVEL);
`else
  assign slave_busy = fifo.full;
`endif
endmodule
`else
module spi_rx_mosi_service (
    input  logic                 clk,
    input  logic                 rst_n,
    input  logic                 spi_byte_valid,
    input  spi_service_pkg::byte_t spi_byte,
    // Handshake de escrita na FIFO
    output logic                 fifo_wr_en,
    output spi_service_pkg::byte_t fifo_wr_data,
    input  logic                 fifo_full,
    output logic                 overflow_error,
    output logic                 slave_busy
);
  import spi_service_pkg::*;

  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      fifo_wr_en     <= 1'b0;
      fifo_wr_data   <= '0;
      overflow_error <= 1'b0;
    end else begin
      fifo_wr_en     <= 1'b0;
      overflow_error <= 1'b0;
      if (spi_byte_valid) begin
        if (!fifo_full) begin
          fifo_wr_en   <= 1'b1;
          fifo_wr_data <= spi_byte;
        end else begin
          overflow_error <= 1'b1;
        end
      end
    end
  end

  assign slave_busy = fifo_full;
endmodule
`endif
`endif // __SIM_BUILD__
