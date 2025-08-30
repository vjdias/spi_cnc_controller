// -----------------------------------------------------------------------------
// led_service.sv
//
// Serviço simples que recebe frames LED_CTRL já decodificados e atualiza
// o estado de 6 LEDs. Gera um frame de resposta indicando sucesso ou erro
// de LED inexistente.
// -----------------------------------------------------------------------------
`ifndef LED_SERVICE_SV
`define LED_SERVICE_SV
module led_service (
    input  logic clk,
    input  logic rst_n,
    input  logic frame_valid,
    input  spi_service_pkg::byte_t msgType,
    input  var led_control_request_pkg::led_ctrl_req_bytes_t led_req,
    output logic [5:0] leds,
    output logic resp_valid,
    output led_control_response_pkg::led_ctrl_resp_bytes_t resp_frame,
    // Publicação direta no stream genérico de respostas
    resp_stream_if.producer tx_stream
);
  import protocol_constants_pkg::*;
  import led_control_request_pkg::*;
  import led_control_response_pkg::*;

  logic [5:0] leds_r;

  // Buffer de publicação no stream genérico
  localparam int SHIFT_BITS = spi_service_pkg::RESP_MAX_BYTES * 8;
  logic                       pending;
  logic [SHIFT_BITS-1:0]      pend_bits;
  int unsigned                pend_len;

  // Registradores de saída
  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      leds_r     <= 6'b0;
      resp_valid <= 1'b0;
      resp_frame <= led_control_response_pkg::make_default();
      pending    <= 1'b0;
      pend_bits  <= '0;
      pend_len   <= '0;
    end else begin
      resp_valid <= 1'b0; // baixa por padrão
      // consumo do handshake do stream
      if (pending && tx_stream.ready) begin
        pending <= 1'b0;
      end
      if (frame_valid && msgType == LED_CTRL_TYPE) begin
        led_ctrl_resp_bytes_t r;
        r = led_control_response_pkg::make_default();
        r.frameIdEcho = led_req.frameId;
        r.ledMask     = led_req.ledMask;
        if (|led_req.ledMask[7:6]) begin
          // bits fora do intervalo 0..5 -> erro
          r.status = 8'h01; // LED inexistente
        end else begin
          if (led_req.ledValue[0])
            leds_r <= leds_r | led_req.ledMask[5:0];
          else
            leds_r <= leds_r & ~led_req.ledMask[5:0];
          r.status = 8'h00; // sucesso
        end
        r = led_control_response_pkg::set_parity(r);
        resp_frame <= r;
        resp_valid <= 1'b1;

        // Prepara publicação no stream genérico
        pend_bits                 <= '0;
        pend_bits[SHIFT_BITS-1 -: led_control_response_pkg::FRAME_BITS]
                                   <= led_control_response_pkg::encoder(r);
        pend_len                  <= led_control_response_pkg::FRAME_BITS/8; // 7
        pending                   <= 1'b1;
      end
    end
  end

  assign leds = leds_r;

  // Sinais do stream de resposta
  assign tx_stream.valid = pending;
  assign tx_stream.bits  = pend_bits;
  assign tx_stream.len   = pend_len;
endmodule
`endif
