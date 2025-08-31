// -----------------------------------------------------------------------------
// spi_fifo_if.sv
//
// Interface de FIFO simples usada para interligar os serviÃ§os SPI. ContÃ©m
// memÃ³ria interna e tarefas de escrita/leitura. Opcionalmente pode descartar o
// item mais antigo quando cheia (modo "drop-old").
// -----------------------------------------------------------------------------
`ifndef SPI_FIFO_IF_SV
`define SPI_FIFO_IF_SV
interface spi_fifo_if #(
    parameter int DEPTH = spi_service_pkg::RX_FIFO_DEPTH,
    parameter bit DROP_OLD_ON_FULL = 1'b0
  );
  // Import apenas para constantes; qualifique tipos para evitar ambiguidade com -mfcu
  import spi_service_pkg::*;
  // Detecta build de simulação
`ifdef MODEL_TECH
`define __SIM_BUILD__
`endif
`ifdef VERILATOR
`define __SIM_BUILD__
`endif

  // MemÃ³ria circular para armazenar os bytes
  spi_service_pkg::byte_t mem[DEPTH];
  int unsigned wr_ptr, rd_ptr, count;
  logic full;
  logic empty;

  // InicializaÃ§Ã£o dos ponteiros e contadores
  initial begin
    wr_ptr = 0;
    rd_ptr = 0;
    count  = 0;
  end

  // Escreve um byte na FIFO. Se `DROP_OLD_ON_FULL` for 1, o dado mais antigo Ã©
  // descartado para abrir espaÃ§o.
  task automatic write(input spi_service_pkg::byte_t data);
    if (!full) begin
      mem[wr_ptr] = data;
      wr_ptr = (wr_ptr + 1) % DEPTH;
      
      `ifdef __SIM_BUILD__
      count++;
      `endif

    end else if (DROP_OLD_ON_FULL) begin
      mem[wr_ptr] = data;
      wr_ptr = (wr_ptr + 1) % DEPTH;
      rd_ptr = (rd_ptr + 1) % DEPTH; // descarta o mais antigo
    end
  endtask

  // LÃª um byte da FIFO caso nÃ£o esteja vazia
  task automatic read(output spi_service_pkg::byte_t data);
    if (!empty) begin
      data = mem[rd_ptr];
      rd_ptr = (rd_ptr + 1) % DEPTH;
      
      `ifdef __SIM_BUILD__
      count--;
      `endif

    end
  endtask

  // Flags de status
  
  
`ifdef __SIM_BUILD__
  assign full  = (count == DEPTH);
  assign empty = (count == 0);
`else
  assign full  = (((wr_ptr + 1) % DEPTH) == rd_ptr);
  assign empty = (wr_ptr == rd_ptr);
`endif


  // Modports (sem 'count' nos modports; evita multi-driver em sÃ­ntese)
`ifdef __SIM_BUILD__
  modport producer (import write, input full,  input count);
  modport consumer (import read,  input empty, input count);
`else
  modport producer (import write, input full);
  modport consumer (import read,  input empty);
`endif
endinterface
`endif
