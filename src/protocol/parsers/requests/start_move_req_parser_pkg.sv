// -----------------------------------------------------------------------------
// start_move_req_parser_pkg.sv
//
// Parser orientado a bytes para frames START_MOVE. Cada chamada de `feed`
// consome um único byte em ordem e valida header, tipo de mensagem e tail.
// Quando os quatro bytes são recebidos corretamente `frame_valid` é acionado e
// a struct `start_move_req_bytes_t` preenchida é retornada.
// -----------------------------------------------------------------------------
`ifndef START_MOVE_REQ_PARSER_PKG_SV
`define START_MOVE_REQ_PARSER_PKG_SV
package start_move_req_parser_pkg;
  import start_move_request_pkg::*;
  import protocol_constants_pkg::*;

  // Estados da FSM para recepção sequencial dos quatro bytes
  typedef enum logic [1:0] {
    S_HEADER,  // espera marcador REQ_HEADER
    S_MSGTYPE, // espera identificador START_MOVE_TYPE
    S_FRAMEID, // byte de ID do frame
    S_TAIL     // espera marcador REQ_TAIL
  } parser_state_t;

  // Contexto do parser com estado atual e frame em construção
  typedef struct packed {
    parser_state_t        state;
    start_move_req_bytes_t frame;
  } parser_ctx_t;

  // Cria contexto inicial pronto para novo frame
  function automatic parser_ctx_t init();
    parser_ctx_t ctx;
    ctx.state = S_HEADER;
    ctx.frame = start_move_request_pkg::make_default();
    return ctx;
  endfunction

  // Alimenta o parser com um byte
  function automatic parser_ctx_t feed(
      input  parser_ctx_t           in_ctx,
      input  byte_t                 data,
      output logic                  frame_valid,
      output logic                  frame_error,
      output start_move_req_bytes_t out_frame
  );
    parser_ctx_t ctx = in_ctx;
    frame_valid = 1'b0;
    frame_error = 1'b0;
    out_frame   = ctx.frame;

    case (ctx.state)
      // Verifica cabeçalho
      S_HEADER: begin
        if (data == REQ_HEADER) begin
          ctx.frame.header = data;
          ctx.state        = S_MSGTYPE;
        end else begin
          frame_error = 1'b1;
        end
      end

      // Verifica tipo de mensagem
      S_MSGTYPE: begin
        if (data == START_MOVE_TYPE) begin
          ctx.frame.msgType = data;
          ctx.state         = S_FRAMEID;
        end else begin
          frame_error = 1'b1;
          ctx.state   = S_HEADER;
        end
      end

      // Captura ID do frame
      S_FRAMEID: begin
        ctx.frame.frameId = data;
        ctx.state         = S_TAIL;
      end

      // Verifica tail final
      S_TAIL: begin
        if (data == REQ_TAIL) begin
          ctx.frame.tail = data;
          frame_valid    = 1'b1;
          out_frame      = ctx.frame;
        end else begin
          frame_error = 1'b1;
        end
        ctx.state = S_HEADER;
      end

      default: begin
        frame_error = 1'b1;
        ctx.state   = S_HEADER;
      end
    endcase

    return ctx;
  endfunction

endpackage
`endif
