// -----------------------------------------------------------------------------
// move_home_req_parser_pkg.sv
//
// Parser orientado a bytes para frames MOVE_HOME. Cada chamada de `feed`
// recebe um único byte, permitindo reconstruir o frame mesmo quando o
// transporte entrega dados de forma serial. Todos os campos são validados
// contra as constantes do protocolo: o header e o tipo de mensagem devem
// corresponder aos valores fixos, o byte de paridade deve ser o XOR dos bytes
// do payload e o tail marca o fim do frame. Quando todas as verificações passam
// `frame_valid` é acionado e a struct `move_home_req_bytes_t` preenchida é
// retornada.
// -----------------------------------------------------------------------------
`ifndef MOVE_HOME_REQ_PARSER_PKG_SV
`define MOVE_HOME_REQ_PARSER_PKG_SV
package move_home_req_parser_pkg;
  import move_home_request_pkg::*;
  import protocol_constants_pkg::*;

  // Estados da FSM para recepção sequencial dos nove bytes do frame
  typedef enum logic [3:0] {
    S_HEADER,  // espera marcador REQ_HEADER
    S_MSGTYPE, // espera identificador MOVE_HOME_TYPE
    S_FRAMEID, // byte de ID do frame
    S_AXIS,    // byte de máscara de eixos
    S_DIR,     // byte de máscara de direções
    S_VH_HI,   // byte alto da velocidade vhome
    S_VH_LO,   // byte baixo da velocidade vhome
    S_PARITY,  // byte de paridade (XOR de msgType..vhome)
    S_TAIL     // espera marcador REQ_TAIL
  } parser_state_t;

  // Contexto do parser com estado da FSM e frame parcialmente montado
  typedef struct packed {
    parser_state_t        state;       // estado atual do parser
    move_home_req_bytes_t frame;       // frame em construção
    byte_t                parity_calc; // acumulador de paridade
  } parser_ctx_t;

  // Cria um contexto novo pronto para receber um novo frame
  function automatic parser_ctx_t init();
    parser_ctx_t ctx;
    ctx.state       = S_HEADER;                              // aguarda cabeçalho
    ctx.frame       = move_home_request_pkg::make_default(); // zera todos os campos
    ctx.parity_calc = 8'h00;                                 // zera paridade
    return ctx;
  endfunction

  // Alimenta o parser com um byte. O contexto retornado deve ser armazenado
  // pelo chamador para a próxima invocação. `frame_valid` é acionado em
  // exatamente uma chamada quando um frame completo é recebido, enquanto
  // `frame_error` sinaliza qualquer violação de protocolo. Após qualquer um
  // desses eventos a máquina de estados retorna a `S_HEADER` pronta para o
  // próximo frame.
  function automatic parser_ctx_t feed(
      input  parser_ctx_t          in_ctx,
      input  byte_t                data,
      output logic                 frame_valid,
      output logic                 frame_error,
      output move_home_req_bytes_t out_frame
  );
    parser_ctx_t ctx = in_ctx;
    frame_valid = 1'b0;
    frame_error = 1'b0;
    out_frame   = ctx.frame;

    case (ctx.state)
      // Verifica cabeçalho do frame
      S_HEADER: begin
        if (data == REQ_HEADER) begin
          ctx.frame.header = data;
          ctx.state        = S_MSGTYPE;
          ctx.parity_calc  = 8'h00;
        end else begin
          // byte inicial inválido, sinaliza erro e permanece em HEADER
          frame_error = 1'b1;
        end
      end

      // Verifica se o tipo de mensagem é MOVE_HOME
      S_MSGTYPE: begin
        if (data == MOVE_HOME_TYPE) begin
          ctx.frame.msgType = data;
          ctx.parity_calc   = data;   // inicia paridade com msgType
          ctx.state         = S_FRAMEID;
        end else begin
          frame_error = 1'b1;
          ctx.state   = S_HEADER;     // ressincroniza
        end
      end

      // Acumula o ID do frame
      S_FRAMEID: begin
        ctx.frame.frameId = data;
        ctx.parity_calc  ^= data;
        ctx.state         = S_AXIS;
      end

      // Byte de máscara de eixos
      S_AXIS: begin
        ctx.frame.axisMask = data;
        ctx.parity_calc   ^= data;
        ctx.state          = S_DIR;
      end

      // Byte de máscara de direções
      S_DIR: begin
        ctx.frame.dirMask = data;
        ctx.parity_calc  ^= data;
        ctx.state         = S_VH_HI;
      end

      // Byte alto da velocidade vhome
      S_VH_HI: begin
        ctx.frame.vhome[15:8] = data;
        ctx.parity_calc      ^= data;
        ctx.state             = S_VH_LO;
      end

      // Byte baixo da velocidade vhome
      S_VH_LO: begin
        ctx.frame.vhome[7:0] = data;
        ctx.parity_calc     ^= data;
        ctx.state            = S_PARITY;
      end

      // Compara paridade calculada com a recebida
      S_PARITY: begin
        ctx.frame.parity = data;
        if (data == ctx.parity_calc) begin
          ctx.state = S_TAIL;
        end else begin
          frame_error = 1'b1;
          ctx.state   = S_HEADER;
        end
      end

      // Byte final tail completa o frame
      S_TAIL: begin
        if (data == REQ_TAIL) begin
          ctx.frame.tail = data;
          frame_valid    = 1'b1;
          out_frame      = ctx.frame;
        end else begin
          frame_error = 1'b1;
        end
        ctx.state = S_HEADER; // reinicia para o próximo frame
      end

      // Não deveria acontecer, mas reinicia em qualquer estado inesperado
      default: begin
        frame_error = 1'b1;
        ctx.state   = S_HEADER;
      end
    endcase

    return ctx;
  endfunction

endpackage
`endif
