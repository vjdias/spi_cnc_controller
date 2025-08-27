// -----------------------------------------------------------------------------
// spi_fifo_if.sv
//
// Interface de FIFO simples usada para interligar os serviços SPI. Contém
// memória interna e tarefas de escrita/leitura utilizadas pelos módulos de
// captura e consumo.
// -----------------------------------------------------------------------------
`ifndef SPI_FIFO_IF_SV
`define SPI_FIFO_IF_SV
interface spi_fifo_if #(parameter DEPTH = spi_service_pkg::FIFO_DEPTH);
  import spi_service_pkg::*;

  // Memória circular para armazenar os bytes
  byte_t mem[DEPTH];
  int unsigned wr_ptr, rd_ptr, count;
  logic full;
  logic empty;

  // Inicialização dos ponteiros e contadores
  initial begin
    wr_ptr = 0;
    rd_ptr = 0;
    count  = 0;
  end

  // Escreve um byte na FIFO caso não esteja cheia
  task automatic write(input byte_t data);
    if (!full) begin
      mem[wr_ptr] = data;
      wr_ptr = (wr_ptr + 1) % DEPTH;
      count++;
    end
  endtask

  // Lê um byte da FIFO caso não esteja vazia
  task automatic read(output byte_t data);
    if (!empty) begin
      data = mem[rd_ptr];
      rd_ptr = (rd_ptr + 1) % DEPTH;
      count--;
    end
  endtask

  // Flags de status
  assign full  = (count == DEPTH);
  assign empty = (count == 0);

  // Modport para o produtor de bytes
  modport producer (import write, input full);

  // Modport para o consumidor de bytes
  modport consumer (import read, input empty);
endinterface
`endif
