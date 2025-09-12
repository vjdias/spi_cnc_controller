// -----------------------------------------------------------------------------
// spi_rx_slave_service.sv
//
// Bridge de recepção: adapta o wrapper `spi_slave` (interface de registradores
// rd_en/raddr/rdata/irq) para um fluxo de bytes com strobe
// `spi_byte_valid/spi_byte`, alimentando o pipeline de RX (spi_rx_mosi_service).
//
// Estratégia: quando `irq` está ativo (indica dado disponível no core), o
// serviço emite um pulso de leitura (rd_en=1) no endereço RX_DATA_ADDR e, no
// ciclo seguinte, apresenta `rdata` como `spi_byte` com `spi_byte_valid=1` por
// um ciclo. Se `irq` permanecer ativo, a leitura continua em sequência
// (back-to-back) até esvaziar o buffer do core.
// -----------------------------------------------------------------------------
`ifndef SPI_RX_SLAVE_SERVICE_SV
`define SPI_RX_SLAVE_SERVICE_SV
module spi_rx_slave_service #(
    parameter logic [2:0] RX_DATA_ADDR       = 3'd0,
    parameter bit         BACK_TO_BACK_READS = 1'b1
  )(
    input  logic clk,
    input  logic rst_n,

    // Interface de leitura do wrapper spi_slave
    output logic        rd_en,
    output logic [2:0]  raddr,
    input  logic [7:0]  rdata,
    input  logic        irq,

    // Saída de bytes (para spi_rx_mosi_service)
    output logic                        spi_byte_valid,
    output spi_service_pkg::byte_t      spi_byte
);
  import spi_service_pkg::*;

  typedef enum logic [1:0] {S_IDLE, S_ISSUE_RD, S_CAPTURE} state_t;
  state_t state;

  // Endereço fixo de leitura
  assign raddr = RX_DATA_ADDR;

  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      state          <= S_IDLE;
      rd_en          <= 1'b0;
      spi_byte_valid <= 1'b0;
      spi_byte       <= '0;
    end else begin
      // Defaults
      rd_en          <= 1'b0;
      spi_byte_valid <= 1'b0;

      unique case (state)
        S_IDLE: begin
          if (irq) begin
            rd_en <= 1'b1;      // solicita leitura neste ciclo
            state <= S_ISSUE_RD;
          end
        end

        S_ISSUE_RD: begin
          // Dado disponível em rdata no ciclo seguinte
          state <= S_CAPTURE;
        end

        S_CAPTURE: begin
          // Apresenta o byte e um pulso de válido
          spi_byte       <= rdata;
          spi_byte_valid <= 1'b1;
          if (BACK_TO_BACK_READS && irq) begin
            // Continua leitura enquanto houver dado indicado por irq
            rd_en <= 1'b1;
            state <= S_ISSUE_RD;
          end else begin
            state <= S_IDLE;
          end
        end

        default: state <= S_IDLE;
      endcase
    end
  end
endmodule
`endif
