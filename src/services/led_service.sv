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
    input  led_control_request_pkg::led_ctrl_req_bytes_t led_req,
    output logic [5:0] leds,
    output logic resp_valid,
    output led_control_response_pkg::led_ctrl_resp_bytes_t resp_frame
);
  import protocol_constants_pkg::*;
  import led_control_request_pkg::*;
  import led_control_response_pkg::*;

  logic [5:0] leds_r;

  // Registradores de saída
  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      leds_r     <= 6'b0;
      resp_valid <= 1'b0;
      resp_frame <= led_control_response_pkg::make_default();
    end else begin
      resp_valid <= 1'b0; // baixa por padrão
      if (frame_valid && msgType == LED_CTRL_TYPE) begin
        led_ctrl_resp_bytes_t r = led_control_response_pkg::make_default();
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
      end
    end
  end

  assign leds = leds_r;
endmodule
`endif
