// -----------------------------------------------------------------------------
// led_control_req_parser_pkg.sv
//
// Parser byte a byte para frames LED_CTRL. Recebe 7 bytes sequenciais e
// valida header, msgType, paridade e tail antes de liberar o frame
// decodificado.
// -----------------------------------------------------------------------------
`ifndef LED_CONTROL_REQ_PARSER_PKG_SV
`define LED_CONTROL_REQ_PARSER_PKG_SV
package led_control_req_parser_pkg;
  import led_control_request_pkg::*;
  import protocol_constants_pkg::*;

  // FSM para recepção dos 7 bytes
  typedef enum logic [2:0] {
    S_HEADER,
    S_MSGTYPE,
    S_FRAMEID,
    S_MASK,
    S_VALUE,
    S_PARITY,
    S_TAIL
  } parser_state_t;

  // Contexto do parser
  typedef struct packed {
    parser_state_t        state;
    led_ctrl_req_bytes_t  frame;
    byte_t                parity_calc;
  } parser_ctx_t;

  // Inicialização do contexto
  function automatic parser_ctx_t init();
    parser_ctx_t ctx;
    ctx.state       = S_HEADER;
    ctx.frame       = led_control_request_pkg::make_default();
    ctx.parity_calc = 8'h00;
    return ctx;
  endfunction

  // Alimenta um byte; retorna novo contexto e flags de status
  function automatic parser_ctx_t feed(
      input  parser_ctx_t          in_ctx,
      input  byte_t                data,
      output logic                 frame_valid,
      output logic                 frame_error,
      output led_ctrl_req_bytes_t  out_frame
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
          ctx.parity_calc  = 8'h00;
        end else frame_error = 1'b1;
      end
      S_MSGTYPE: begin
        if (data == LED_CTRL_TYPE) begin
          ctx.frame.msgType = data;
          ctx.parity_calc   = data;
          ctx.state         = S_FRAMEID;
        end else begin
          frame_error = 1'b1;
          ctx.state   = S_HEADER;
        end
      end
      S_FRAMEID: begin
        ctx.frame.frameId = data;
        ctx.parity_calc  ^= data;
        ctx.state         = S_MASK;
      end
      S_MASK: begin
        ctx.frame.ledMask = data;
        ctx.parity_calc  ^= data;
        ctx.state         = S_VALUE;
      end
      S_VALUE: begin
        ctx.frame.ledValue = data;
        ctx.parity_calc   ^= data;
        ctx.state          = S_PARITY;
      end
      S_PARITY: begin
        ctx.frame.parity = data;
        if (data == ctx.parity_calc) ctx.state = S_TAIL;
        else begin
          frame_error = 1'b1;
          ctx.state   = S_HEADER;
        end
      end
      S_TAIL: begin
        if (data == REQ_TAIL) begin
          ctx.frame.tail = data;
          frame_valid    = 1'b1;
          out_frame      = ctx.frame;
        end else frame_error = 1'b1;
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
