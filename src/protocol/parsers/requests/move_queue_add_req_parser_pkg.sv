// -----------------------------------------------------------------------------
// move_queue_add_req_parser_pkg.sv
//
// Parser orientado a bytes para frames MOVE_QUEUE_ADD (42 bytes). Cada chamada
// de `feed` fornece um byte e a FSM interna mantém um índice de posição. Os
// bytes de msgType..kd_z são acumulados em um vetor bruto e usados para cálculo
// da paridade (XOR de todos os bits). Após a recepção do byte de tail, o frame
// completo é decodificado e retornado.
// -----------------------------------------------------------------------------
`ifndef MOVE_QUEUE_ADD_REQ_PARSER_PKG_SV
`define MOVE_QUEUE_ADD_REQ_PARSER_PKG_SV
package move_queue_add_req_parser_pkg;
  import move_queue_add_request_pkg::*;
  import protocol_constants_pkg::*;

  localparam int FRAME_BYTES = 42;

  typedef struct packed {
    logic [5:0] idx;                      // índice do próximo byte esperado
    logic [FRAME_BITS-1:0] raw;           // buffer bruto acumulado
    logic        parity_calc;             // paridade parcial (bits)
  } parser_ctx_t;

  // Inicia contexto zerado
  function automatic parser_ctx_t init();
    parser_ctx_t ctx;
    ctx.idx         = 0;
    ctx.raw         = '0;
    ctx.parity_calc = 1'b0;
    return ctx;
  endfunction

  // Alimenta o parser com um byte
  function automatic parser_ctx_t feed(
      input  parser_ctx_t            in_ctx,
      input  byte_t                  data,
      output logic                   frame_valid,
      output logic                   frame_error,
      output move_queue_add_req_bytes_t out_frame
  );
    parser_ctx_t ctx = in_ctx;
    frame_valid = 1'b0;
    frame_error = 1'b0;
    out_frame   = move_queue_add_request_pkg::make_default();

    // Armazena byte no buffer na posição correspondente (big-endian)
    ctx.raw[FRAME_BITS-1 - ctx.idx*8 -: 8] = data;

    // Verificações específicas por índice
    case (ctx.idx)
      0: begin // Header
        if (data != REQ_HEADER) frame_error = 1'b1; // permanece em idx 0
      end
      1: begin // MsgType
        if (data == MOVE_TYPE) begin
          ctx.parity_calc = ^data; // inicia paridade
        end else begin
          frame_error = 1'b1;
          ctx.idx     = 0; // ressincroniza
          return ctx;
        end
      end
      40: begin // Parity byte
        if (data[0] != ctx.parity_calc) begin
          frame_error = 1'b1;
          ctx.idx         = 0;
          ctx.parity_calc = 1'b0;
          return ctx;
        end
      end
      41: begin // Tail
        if (data == REQ_TAIL) begin
          move_queue_add_req_bytes_t tmp = decoder(ctx.raw);
          out_frame   = tmp;
          frame_valid = 1'b1;
        end else begin
          frame_error = 1'b1;
        end
        ctx.idx         = 0;
        ctx.parity_calc = 1'b0;
        return ctx;
      end
      default: begin
        // bytes intermediários acumulam paridade (1..39)
        if (ctx.idx >= 2 && ctx.idx <= 39)
          ctx.parity_calc ^= ^data;
      end
    endcase

    // Avança para esperar próximo byte somente se não houve erro e não completou
    if (!frame_error) begin
      if (ctx.idx < FRAME_BYTES-1)
        ctx.idx++;
    end else begin
      // Em caso de erro zera índice para reiniciar
      ctx.idx         = 0;
      ctx.parity_calc = 1'b0;
    end

    return ctx;
  endfunction

endpackage
`endif
