// -----------------------------------------------------------------------------
// move_end_req_parser_pkg.sv
//
// Parser orientado a bytes para frames MOVE_END. Utiliza uma FSM simples que
// valida header, tipo MOVE_END e byte de tail. Quando todos os quatro bytes
// são aceitos o frame é retornado via `out_frame` e `frame_valid` é acionado.
// -----------------------------------------------------------------------------
`ifndef MOVE_END_REQ_PARSER_PKG_SV
`define MOVE_END_REQ_PARSER_PKG_SV
package move_end_req_parser_pkg;
  import move_end_request_pkg::*;
  import protocol_constants_pkg::*;

  typedef enum logic [1:0] {
    S_HEADER,
    S_MSGTYPE,
    S_FRAMEID,
    S_TAIL
  } parser_state_t;

  typedef struct packed {
    parser_state_t       state;
    move_end_req_bytes_t frame;
  } parser_ctx_t;

  function automatic parser_ctx_t init();
    parser_ctx_t ctx;
    ctx.state = S_HEADER;
    ctx.frame = move_end_request_pkg::make_default();
    return ctx;
  endfunction

  function automatic parser_ctx_t feed(
      input  parser_ctx_t        in_ctx,
      input  byte_t              data,
      output logic               frame_valid,
      output logic               frame_error,
      output move_end_req_bytes_t out_frame
  );
    parser_ctx_t ctx = in_ctx;
    frame_valid = 1'b0;
    frame_error = 1'b0;
    out_frame   = ctx.frame;

    case (ctx.state)
      S_HEADER: begin
        if (data == REQ_HEADER) begin
          ctx.frame.header = data;
          ctx.state        = S_MSGTYPE;
        end else begin
          frame_error = 1'b1;
        end
      end

      S_MSGTYPE: begin
        if (data == MOVE_END_TYPE) begin
          ctx.frame.msgType = data;
          ctx.state         = S_FRAMEID;
        end else begin
          frame_error = 1'b1;
          ctx.state   = S_HEADER;
        end
      end

      S_FRAMEID: begin
        ctx.frame.frameId = data;
        ctx.state         = S_TAIL;
      end

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
