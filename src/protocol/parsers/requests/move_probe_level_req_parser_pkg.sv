// -----------------------------------------------------------------------------
// move_probe_level_req_parser_pkg.sv
//
// Parser orientado a bytes para frames MOVE_PROBE_LEVEL. Possui verificação de
// paridade simples (XOR dos bytes msgType..vprobe) antes do byte final de tail.
// -----------------------------------------------------------------------------
`ifndef MOVE_PROBE_LEVEL_REQ_PARSER_PKG_SV
`define MOVE_PROBE_LEVEL_REQ_PARSER_PKG_SV
package move_probe_level_req_parser_pkg;
  import move_probe_level_request_pkg::*;
  import protocol_constants_pkg::*;

  typedef enum logic [2:0] {
    S_HEADER,
    S_MSGTYPE,
    S_FRAMEID,
    S_AXIS,
    S_VP_HI,
    S_VP_LO,
    S_PARITY,
    S_TAIL
  } parser_state_t;

  typedef struct packed {
    parser_state_t            state;
    move_probe_level_req_bytes_t frame;
    byte_t                   parity_calc;
  } parser_ctx_t;

  function automatic parser_ctx_t init();
    parser_ctx_t ctx;
    ctx.state       = S_HEADER;
    ctx.frame       = move_probe_level_request_pkg::make_default();
    ctx.parity_calc = 8'h00;
    return ctx;
  endfunction

  function automatic parser_ctx_t feed(
      input  parser_ctx_t              in_ctx,
      input  byte_t                    data,
      output logic                     frame_valid,
      output logic                     frame_error,
      output move_probe_level_req_bytes_t out_frame
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
        end else begin
          frame_error = 1'b1;
        end
      end

      S_MSGTYPE: begin
        if (data == MOVE_PROBE_LEVEL_TYPE) begin
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
        ctx.state         = S_AXIS;
      end

      S_AXIS: begin
        ctx.frame.axisMask = data;
        ctx.parity_calc   ^= data;
        ctx.state          = S_VP_HI;
      end

      S_VP_HI: begin
        ctx.frame.vprobe[15:8] = data;
        ctx.parity_calc       ^= data;
        ctx.state              = S_VP_LO;
      end

      S_VP_LO: begin
        ctx.frame.vprobe[7:0] = data;
        ctx.parity_calc      ^= data;
        ctx.state             = S_PARITY;
      end

      S_PARITY: begin
        ctx.frame.parity = data;
        if (data == ctx.parity_calc) begin
          ctx.state = S_TAIL;
        end else begin
          frame_error = 1'b1;
          ctx.state   = S_HEADER;
        end
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
