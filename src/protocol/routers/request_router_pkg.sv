// -----------------------------------------------------------------------------
// request_router_pkg.sv
//
// Roteador genérico para frames de requisição. Os bytes chegam sempre em
// sequência (8 bits) e o roteador analisa o `msgType` para decidir qual parser
// deve receber os próximos bytes. Cada parser valida header, payload, paridade
// e tail do frame. O roteador apenas encaminha os bytes, propagando os sinais
// `frame_valid` e `frame_error` e informando qual `msgType` foi decodificado.
// -----------------------------------------------------------------------------
`ifndef REQUEST_ROUTER_PKG_SV
`define REQUEST_ROUTER_PKG_SV
package request_router_pkg;
  import protocol_constants_pkg::*;
  import move_home_req_parser_pkg::*;
  import start_move_req_parser_pkg::*;
  import move_probe_level_req_parser_pkg::*;
  import move_queue_add_req_parser_pkg::*;
  import move_end_req_parser_pkg::*;
  import move_queue_status_req_parser_pkg::*;
  import fpga_status_req_parser_pkg::*;
  import led_control_req_parser_pkg::*;

  // Pacotes de framing para acesso às structs e funções make_default
  import start_move_request_pkg::*;
  import move_end_request_pkg::*;
  import move_home_request_pkg::*;
  import move_probe_level_request_pkg::*;
  import move_queue_add_request_pkg::*;
  import move_queue_status_request_pkg::*;
  import fpga_status_request_pkg::*;
  import led_control_request_pkg::*;

  // Estado do roteador: controla a etapa de recepção
  typedef enum logic [1:0] {
    R_HEADER,   // aguardando REQ_HEADER do frame
    R_MSGTYPE,  // header recebido; precisa do msgType
    R_PARSING   // roteador encaminhando bytes ao parser ativo
  } router_state_t;

  // Identificador do parser ativo. Ajuda a direcionar os bytes
  typedef enum logic [3:0] {
    P_NONE,            // nenhum parser selecionado
    P_MOVE_HOME,       // parser de MOVE_HOME
    P_START_MOVE,      // parser de START_MOVE
    P_MOVE_PROBE_LEVEL,// parser de MOVE_PROBE_LEVEL
    P_MOVE_QUEUE_ADD,  // parser de MOVE_QUEUE_ADD
    P_MOVE_END,        // parser de MOVE_END
    P_MOVE_QUEUE_STATUS,// parser de MOVE_QUEUE_STATUS
    P_FPGA_STATUS,     // parser de FPGA_STATUS
    P_LED_CTRL         // parser de LED_CTRL
  } parser_id_t;

  // Contexto principal do roteador. Armazena estado, parser ativo e
  // o contexto individual de cada parser.
  typedef struct packed {
    router_state_t                          state;            // estado da FSM
    parser_id_t                             active;           // parser atual
    byte_t                                  hdr;              // header já lido
    byte_t                                  mtype;            // msgType já lido
    move_home_req_parser_pkg::parser_ctx_t        move_home_ctx;   // ctx MOVE_HOME
    start_move_req_parser_pkg::parser_ctx_t       start_move_ctx;  // ctx START_MOVE
    move_probe_level_req_parser_pkg::parser_ctx_t move_probe_ctx;  // ctx MOVE_PROBE_LEVEL
    move_queue_add_req_parser_pkg::parser_ctx_t   queue_add_ctx;   // ctx MOVE_QUEUE_ADD
    move_end_req_parser_pkg::parser_ctx_t         move_end_ctx;    // ctx MOVE_END
    move_queue_status_req_parser_pkg::parser_ctx_t queue_status_ctx; // ctx MOVE_QUEUE_STATUS
    fpga_status_req_parser_pkg::parser_ctx_t      fpga_status_ctx; // ctx FPGA_STATUS
    led_control_req_parser_pkg::parser_ctx_t      led_ctrl_ctx;    // ctx LED_CTRL
  } router_ctx_t;

  // Inicializa o contexto do roteador e de cada parser individual
  function automatic router_ctx_t init();
    router_ctx_t ctx;
    // estado da FSM e parser ativo
    ctx.state  = R_HEADER; // aguardando novo frame
    ctx.active = P_NONE;
    // valores iniciais de header e msgType
    ctx.hdr    = 8'h00;
    ctx.mtype  = 8'h00;

    // cada parser precisa estar zerado para receber o header e o msgType
    ctx.move_home_ctx    = move_home_req_parser_pkg::init();
    ctx.start_move_ctx   = start_move_req_parser_pkg::init();
    ctx.move_probe_ctx   = move_probe_level_req_parser_pkg::init();
    ctx.queue_add_ctx    = move_queue_add_req_parser_pkg::init();
    ctx.move_end_ctx     = move_end_req_parser_pkg::init();
    ctx.queue_status_ctx = move_queue_status_req_parser_pkg::init();
    ctx.fpga_status_ctx  = fpga_status_req_parser_pkg::init();
    ctx.led_ctrl_ctx     = led_control_req_parser_pkg::init();
    return ctx;
  endfunction

  // Alimenta o roteador com um byte e retorna o novo contexto
  function automatic router_ctx_t feed(
      input  router_ctx_t              in_ctx,
      input  byte_t                    data,
      output logic                     frame_valid,
      output logic                     frame_error,
      output byte_t                    out_msgType,
      output move_home_req_bytes_t     move_home_frame,
      output start_move_req_bytes_t    start_move_frame,
      output move_probe_level_req_bytes_t move_probe_frame,
      output move_queue_add_req_bytes_t   queue_add_frame,
      output move_end_req_bytes_t         move_end_frame,
      output move_queue_status_bytes_t    queue_status_frame,
      output request_fpga_status_bytes_t  fpga_status_frame,
      output led_ctrl_req_bytes_t         led_ctrl_frame
  );
    router_ctx_t ctx = in_ctx;      // cópia local para ser atualizada
    logic d_valid, d_err;           // sinais descartados dos parsers

    // valores default das saídas; serão sobrescritos se algum parser completar
    frame_valid    = 1'b0;
    frame_error    = 1'b0;
    out_msgType    = ctx.mtype;
    move_home_frame    = move_home_request_pkg::make_default();
    start_move_frame   = start_move_request_pkg::make_default();
    move_probe_frame   = move_probe_level_request_pkg::make_default();
    queue_add_frame    = move_queue_add_request_pkg::make_default();
    move_end_frame     = move_end_request_pkg::make_default();
    queue_status_frame = move_queue_status_request_pkg::make_default();
    fpga_status_frame  = fpga_status_request_pkg::make_default();
    led_ctrl_frame     = led_control_request_pkg::make_default();

    case (ctx.state)
      // Primeiro byte do frame: valida o HEADER
      R_HEADER: begin
        if (data == REQ_HEADER) begin
          ctx.hdr   = data;    // guarda header para repassar ao parser
          ctx.state = R_MSGTYPE;
        end else begin
          // Opção de tolerância a ruído: ignorar bytes até encontrar HEADER
          // Ative com +define+ROUTER_IGNORE_NOISE na compilação
`ifdef ROUTER_IGNORE_NOISE
          // Não sinaliza erro; permanece aguardando HEADER
          frame_error = 1'b0;
`else
          frame_error = 1'b1; // byte inesperado
`endif
        end
      end

      // Segundo byte: determina o tipo de mensagem e o parser a ser usado
      R_MSGTYPE: begin
        ctx.mtype = data;
        case (data)
          MOVE_HOME_TYPE: begin
            ctx.active        = P_MOVE_HOME;                               // seleciona parser
            ctx.move_home_ctx = move_home_req_parser_pkg::init();          // zera contexto
            // reenviar header e msgType ao parser para alinhar sua FSM
            ctx.move_home_ctx = move_home_req_parser_pkg::feed(ctx.move_home_ctx, ctx.hdr, d_valid, d_err, move_home_frame);
            ctx.move_home_ctx = move_home_req_parser_pkg::feed(ctx.move_home_ctx, data,   d_valid, d_err, move_home_frame);
            ctx.state         = R_PARSING;                                 // pronto para os próximos bytes
          end
          START_MOVE_TYPE: begin
            ctx.active         = P_START_MOVE;
            ctx.start_move_ctx = start_move_req_parser_pkg::init();
            // header e msgType também são reenviados ao parser
            ctx.start_move_ctx = start_move_req_parser_pkg::feed(ctx.start_move_ctx, ctx.hdr, d_valid, d_err, start_move_frame);
            ctx.start_move_ctx = start_move_req_parser_pkg::feed(ctx.start_move_ctx, data,   d_valid, d_err, start_move_frame);
            ctx.state          = R_PARSING;
          end
          MOVE_PROBE_LEVEL_TYPE: begin
            ctx.active        = P_MOVE_PROBE_LEVEL;
            ctx.move_probe_ctx = move_probe_level_req_parser_pkg::init();
            // repassa header e msgType para o parser especializado
            ctx.move_probe_ctx = move_probe_level_req_parser_pkg::feed(ctx.move_probe_ctx, ctx.hdr, d_valid, d_err, move_probe_frame);
            ctx.move_probe_ctx = move_probe_level_req_parser_pkg::feed(ctx.move_probe_ctx, data,   d_valid, d_err, move_probe_frame);
            ctx.state          = R_PARSING;
          end
          MOVE_TYPE: begin
            ctx.active        = P_MOVE_QUEUE_ADD;
            ctx.queue_add_ctx = move_queue_add_req_parser_pkg::init();
            // header e msgType também são enviados ao parser de fila
            ctx.queue_add_ctx = move_queue_add_req_parser_pkg::feed(ctx.queue_add_ctx, ctx.hdr, d_valid, d_err, queue_add_frame);
            ctx.queue_add_ctx = move_queue_add_req_parser_pkg::feed(ctx.queue_add_ctx, data,   d_valid, d_err, queue_add_frame);
            ctx.state         = R_PARSING;
          end
          MOVE_END_TYPE: begin
            ctx.active      = P_MOVE_END;
            ctx.move_end_ctx = move_end_req_parser_pkg::init();
            // reenviar header e msgType
            ctx.move_end_ctx = move_end_req_parser_pkg::feed(ctx.move_end_ctx, ctx.hdr, d_valid, d_err, move_end_frame);
            ctx.move_end_ctx = move_end_req_parser_pkg::feed(ctx.move_end_ctx, data,   d_valid, d_err, move_end_frame);
            ctx.state        = R_PARSING;
          end
          MOVE_QUEUE_STATUS_TYPE: begin
            ctx.active           = P_MOVE_QUEUE_STATUS;
            ctx.queue_status_ctx = move_queue_status_req_parser_pkg::init();
            // header e msgType também são necessários ao parser
            ctx.queue_status_ctx = move_queue_status_req_parser_pkg::feed(ctx.queue_status_ctx, ctx.hdr, d_valid, d_err, queue_status_frame);
            ctx.queue_status_ctx = move_queue_status_req_parser_pkg::feed(ctx.queue_status_ctx, data,   d_valid, d_err, queue_status_frame);
            ctx.state            = R_PARSING;
          end
          FPGA_STATUS_TYPE: begin
            ctx.active         = P_FPGA_STATUS;
            ctx.fpga_status_ctx = fpga_status_req_parser_pkg::init();
            // repassa header e msgType ao parser de status
            ctx.fpga_status_ctx = fpga_status_req_parser_pkg::feed(ctx.fpga_status_ctx, ctx.hdr, d_valid, d_err, fpga_status_frame);
            ctx.fpga_status_ctx = fpga_status_req_parser_pkg::feed(ctx.fpga_status_ctx, data,   d_valid, d_err, fpga_status_frame);
            ctx.state           = R_PARSING;
          end
          LED_CTRL_TYPE: begin
            ctx.active      = P_LED_CTRL;
            ctx.led_ctrl_ctx = led_control_req_parser_pkg::init();
            // header e msgType são reenviados ao parser de LEDs
            ctx.led_ctrl_ctx = led_control_req_parser_pkg::feed(ctx.led_ctrl_ctx, ctx.hdr, d_valid, d_err, led_ctrl_frame);
            ctx.led_ctrl_ctx = led_control_req_parser_pkg::feed(ctx.led_ctrl_ctx, data,   d_valid, d_err, led_ctrl_frame);
            ctx.state        = R_PARSING;
          end
          default: begin
            // msgType desconhecido
            frame_error = 1'b1;
            ctx.state   = R_HEADER;
            ctx.active  = P_NONE;
          end
        endcase
      end

        // Demais bytes do frame são encaminhados ao parser selecionado
        R_PARSING: begin
          case (ctx.active)
            P_MOVE_HOME: begin
              // passa o byte ao parser MOVE_HOME
              ctx.move_home_ctx = move_home_req_parser_pkg::feed(ctx.move_home_ctx, data, frame_valid, frame_error, move_home_frame);
              out_msgType       = MOVE_HOME_TYPE;
            end
            P_START_MOVE: begin
              // passa o byte ao parser START_MOVE
              ctx.start_move_ctx = start_move_req_parser_pkg::feed(ctx.start_move_ctx, data, frame_valid, frame_error, start_move_frame);
              out_msgType        = START_MOVE_TYPE;
            end
            P_MOVE_PROBE_LEVEL: begin
              // passa o byte ao parser MOVE_PROBE_LEVEL
              ctx.move_probe_ctx = move_probe_level_req_parser_pkg::feed(ctx.move_probe_ctx, data, frame_valid, frame_error, move_probe_frame);
              out_msgType        = MOVE_PROBE_LEVEL_TYPE;
            end
            P_MOVE_QUEUE_ADD: begin
              // passa o byte ao parser MOVE_QUEUE_ADD
              ctx.queue_add_ctx = move_queue_add_req_parser_pkg::feed(ctx.queue_add_ctx, data, frame_valid, frame_error, queue_add_frame);
              out_msgType       = MOVE_TYPE;
            end
            P_MOVE_END: begin
              // passa o byte ao parser MOVE_END
              ctx.move_end_ctx = move_end_req_parser_pkg::feed(ctx.move_end_ctx, data, frame_valid, frame_error, move_end_frame);
              out_msgType      = MOVE_END_TYPE;
            end
            P_MOVE_QUEUE_STATUS: begin
              // passa o byte ao parser MOVE_QUEUE_STATUS
              ctx.queue_status_ctx = move_queue_status_req_parser_pkg::feed(ctx.queue_status_ctx, data, frame_valid, frame_error, queue_status_frame);
              out_msgType          = MOVE_QUEUE_STATUS_TYPE;
            end
            P_FPGA_STATUS: begin
              // passa o byte ao parser FPGA_STATUS
              ctx.fpga_status_ctx = fpga_status_req_parser_pkg::feed(ctx.fpga_status_ctx, data, frame_valid, frame_error, fpga_status_frame);
              out_msgType         = FPGA_STATUS_TYPE;
            end
            P_LED_CTRL: begin
              // passa o byte ao parser LED_CTRL
              ctx.led_ctrl_ctx = led_control_req_parser_pkg::feed(ctx.led_ctrl_ctx, data, frame_valid, frame_error, led_ctrl_frame);
              out_msgType      = LED_CTRL_TYPE;
            end
            default: begin
              frame_error = 1'b1; // parser inválido (não deveria ocorrer)
            end
          endcase
          if (frame_valid || frame_error) begin
            // Após concluir ou falhar, volta a esperar novo HEADER
            ctx.state  = R_HEADER;
            ctx.active = P_NONE;
          end
        end

        default: begin
        frame_error = 1'b1;
        ctx.state   = R_HEADER;
        ctx.active  = P_NONE;
      end
    endcase

    return ctx;
  endfunction

endpackage
`endif
