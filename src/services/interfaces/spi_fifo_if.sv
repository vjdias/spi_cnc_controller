// -----------------------------------------------------------------------------
// spi_fifo_if.sv
//
// Interface de FIFO simples usada para interligar os serviços SPI. Contém
// memória interna e tarefas de escrita/leitura. Opcionalmente pode descartar o
// item mais antigo quando cheia (modo "drop-old").
// -----------------------------------------------------------------------------
`ifndef SPI_FIFO_IF_SV
`define SPI_FIFO_IF_SV
interface spi_fifo_if #(
    parameter int DEPTH = spi_service_pkg::RX_FIFO_DEPTH,
    parameter bit DROP_OLD_ON_FULL = 1'b0
  );
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

  // Escreve um byte na FIFO. Se `DROP_OLD_ON_FULL` for 1, o dado mais antigo é
  // descartado para abrir espaço.
  task automatic write(input byte_t data);
    if (!full) begin
      mem[wr_ptr] = data;
      wr_ptr = (wr_ptr + 1) % DEPTH;
      count++;
    end else if (DROP_OLD_ON_FULL) begin
      mem[wr_ptr] = data;
      wr_ptr = (wr_ptr + 1) % DEPTH;
      rd_ptr = (rd_ptr + 1) % DEPTH; // descarta o mais antigo
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
  modport producer (import write, input full, input count);

  // Modport para o consumidor de bytes
  modport consumer (import read, input empty, input count);
endinterface
`endif
