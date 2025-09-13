// -----------------------------------------------------------------------------
// spi_tx_hub_service.sv
//
// Hub de TX genérico: consome N streams de respostas já codificadas
// (resp_stream_if), arbitra com round-robin simples e serializa bytes na
// FIFO de TX (spi_fifo_if) para envio ao master SPI.
// -----------------------------------------------------------------------------
`ifndef SPI_TX_HUB_SERVICE_SV
`define SPI_TX_HUB_SERVICE_SV
// Módulo disponível apenas quando SPI_USE_INTERFACES está definido (ex.: testbenches ModelSim).
// Para o Verilator e para síntese, a alternativa integrada no top usa sinais simples.
`ifdef SPI_USE_INTERFACES
`define __SIM_BUILD__
`endif
`ifdef __SIM_BUILD__
module spi_tx_hub_service #(
    parameter int NUM_STREAMS = 4
  )(
    input  logic clk,
    input  logic rst_n,

    // Streams de respostas já codificadas (bits + len)
    resp_stream_if.consumer streams[NUM_STREAMS],

    // FIFO de transmissão (bytes para retornar ao master)
    spi_fifo_if.producer tx_fifo,

    output logic tx_busy
);
  import spi_service_pkg::*; // usado para RESP_MAX_BYTES e byte_t qualificado

  localparam int SHIFT_BITS = RESP_MAX_BYTES * 8;
  localparam int LENW       = $clog2(RESP_MAX_BYTES + 1);

  typedef enum logic [1:0] {IDLE, SEND} state_t;
  state_t state;

  logic [SHIFT_BITS-1:0] shift;
  int unsigned len_bytes; // 1..RESP_MAX_BYTES
  int unsigned idx;       // 0..len_bytes-1

  // Ponteiro de round-robin
  int unsigned rr_ptr;

  // Espelhos dos sinais das interfaces para permitir indexação variável
  logic                     valid_arr   [NUM_STREAMS];
  logic [SHIFT_BITS-1:0]    bits_arr    [NUM_STREAMS];
  logic [LENW-1:0]          len_arr     [NUM_STREAMS];
  logic                     ready_arr   [NUM_STREAMS];

  // Seleção combinacional do próximo stream
  logic pick;
  int unsigned pick_idx;
  // Variáveis de loop pré-declaradas para compatibilidade com simuladores
  int unsigned i;
  int unsigned k;
  int unsigned cand;

  // Combinacional: default dos readys
  // Espelha sinais das interfaces e aplica ready por índice constante
  genvar gi;
  generate
    for (gi = 0; gi < NUM_STREAMS; gi++) begin : G_MAP
      // Espelhamento via atribuições contínuas evita conflitos de always_comb
      assign valid_arr[gi]      = streams[gi].valid;
      assign bits_arr[gi]       = streams[gi].bits;
      assign len_arr[gi]        = streams[gi].len;
      assign streams[gi].ready  = ready_arr[gi];
    end
  endgenerate

  // Seleção combinacional + geração de ready
  always_comb begin
    pick = 1'b0;
    pick_idx = '0;
    // default: nenhum ready
    for (i = 0; i < NUM_STREAMS; i++) begin
      ready_arr[i] = 1'b0;
    end
    if (state == IDLE) begin
      // procura válido a partir de rr_ptr (round-robin)
      for (k = 0; k < NUM_STREAMS; k++) begin
        cand = (rr_ptr + k) % NUM_STREAMS;
        if (!pick && valid_arr[cand]) begin
          pick = 1'b1;
          pick_idx = cand;
        end
      end
      if (pick) begin
        ready_arr[pick_idx] = 1'b1; // handshake neste ciclo
      end
    end
  end

  // FSM principal
  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      state     <= IDLE;
      shift     <= '0;
      len_bytes <= '0;
      idx       <= '0;
      rr_ptr    <= '0;
      tx_busy   <= 1'b0;
    end else begin
      unique case (state)
        IDLE: begin
          tx_busy <= 1'b0;
          if (pick) begin
            // Lê payload neste ciclo (handshake combinacional já ativo)
            shift     <= bits_arr[pick_idx];
            len_bytes <= len_arr[pick_idx];
            idx       <= 0;
            state     <= SEND;
            tx_busy   <= 1'b1;
            rr_ptr    <= (pick_idx + 1) % NUM_STREAMS; // avança RR
          end
        end

        SEND: begin
          if (!tx_fifo.full) begin
            spi_service_pkg::byte_t b;
            b = shift[SHIFT_BITS-1 - idx*8 -: 8];
            tx_fifo.write(b);
            if (idx + 1 >= len_bytes) begin
              state   <= IDLE;
              tx_busy <= 1'b0;
            end else begin
              idx <= idx + 1;
            end
          end
        end

        default: state <= IDLE;
      endcase
    end
  end
endmodule
`endif
`endif // __SIM_BUILD__
