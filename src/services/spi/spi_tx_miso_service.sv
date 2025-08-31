// -----------------------------------------------------------------------------
// spi_tx_miso_service.sv
//
// Serviço de transmissão física para o IP SPI (fio MISO real).
// Lê bytes de uma FIFO de TX e realiza escritas no barramento do wrapper
// `spi_slave` (wr_en/waddr/wdata). O mapeamento de registradores do IP
// precisa ser confirmado; endereços abaixo são parâmetros.
// -----------------------------------------------------------------------------
`ifndef SPI_TX_MISO_SERVICE_SV
`define SPI_TX_MISO_SERVICE_SV
// Disponível somente em simulação (ModelSim/Verilator)
`ifdef MODEL_TECH
`define __SIM_BUILD__
`endif
`ifdef VERILATOR
`define __SIM_BUILD__
`endif
`ifdef __SIM_BUILD__
module spi_tx_miso_service #(
    parameter logic [2:0] TX_DATA_ADDR  = 3'd0,   // endereço do registrador de TX
    parameter int         WAIT_CYCLES   = 2       // espaçamento entre writes
  )(
    input  logic clk,
    input  logic rst_n,

    // FIFO de transmissão (bytes já serializados por serviços)
    spi_fifo_if.consumer tx_fifo,

    // Barramento do wrapper spi_slave (para alimentar o IP)
    output logic        wr_en,
    output logic [2:0]  waddr,
    output logic [7:0]  wdata
);
  // Nota: evite importar tudo para não conflitar com outros pacotes sob -mfcu
  import spi_service_pkg::*;

  logic [$clog2(WAIT_CYCLES+1)-1:0] gap;

  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      wr_en <= 1'b0;
      waddr <= '0;
      wdata <= '0;
      gap   <= '0;
    end else begin
      wr_en <= 1'b0; // pulso de 1 ciclo quando escreve
      if (gap != 0) begin
        gap <= gap - 1'b1;
      end else if (!tx_fifo.empty) begin
        spi_service_pkg::byte_t b;
        tx_fifo.read(b);
        waddr <= TX_DATA_ADDR;
        wdata <= b;
        wr_en <= 1'b1;
        gap   <= WAIT_CYCLES[$clog2(WAIT_CYCLES+1)-1:0];
      end
    end
  end
endmodule
`endif
`endif // __SIM_BUILD__
