`timescale 1ns/1ps
`define TEST_ASSERT(cond, name) if(!(cond)) begin $display("Falha: %s", name); $finish; end

module led_service_tb;
  import spi_service_pkg::*;
  import protocol_constants_pkg::*;
  import led_control_request_pkg::*;
  import led_control_response_pkg::*;

  logic clk = 0;
  logic rst_n = 0;
  logic frame_valid;
  byte_t msgType;
  led_ctrl_req_bytes_t led_req;
  logic [5:0] leds;
  logic resp_valid;
  led_ctrl_resp_bytes_t resp_frame;

  led_service svc(
    .clk(clk), .rst_n(rst_n),
    .frame_valid(frame_valid), .msgType(msgType),
    .led_req(led_req), .leds(leds),
    .resp_valid(resp_valid), .resp_frame(resp_frame)
  );

  always #5 clk = ~clk;

  initial begin
    frame_valid = 0; msgType = 0; led_req = make_default();
    #12 rst_n = 1; @(posedge clk);

    // Liga todos os LEDs
    led_req.frameId = 8'h01; led_req.ledMask = 8'h3F; led_req.ledValue = 8'h01;
    frame_valid = 1; msgType = LED_CTRL_TYPE; @(posedge clk); frame_valid = 0; @(posedge clk);
    wait_response(8'h01, 8'h3F, 8'h00);
    `TEST_ASSERT(leds == 6'b111111, "all_on");

    // Desliga todos os LEDs
    led_req.frameId = 8'h02; led_req.ledMask = 8'h3F; led_req.ledValue = 8'h00;
    frame_valid = 1; msgType = LED_CTRL_TYPE; @(posedge clk); frame_valid = 0; @(posedge clk);
    wait_response(8'h02, 8'h3F, 8'h00);
    `TEST_ASSERT(leds == 6'b000000, "all_off");

    // Requisição com LED inexistente
    led_req.frameId = 8'h03; led_req.ledMask = 8'h40; led_req.ledValue = 8'h01;
    frame_valid = 1; msgType = LED_CTRL_TYPE; @(posedge clk); frame_valid = 0; @(posedge clk);
    wait_response(8'h03, 8'h40, 8'h01);
    `TEST_ASSERT(leds == 6'b000000, "invalid_led_no_change");

    $display("Sucesso: led_service_tb");
    $finish;
  end

  task automatic wait_response(byte_t frameId, byte_t mask, byte_t status);
    int cycles = 0;
    while (!resp_valid && cycles < 20) begin
      @(posedge clk); cycles++;
    end
    `TEST_ASSERT(resp_valid, "resp_valid_timeout");
    `TEST_ASSERT(resp_frame.frameIdEcho == frameId, "resp_frameid");
    `TEST_ASSERT(resp_frame.ledMask == mask, "resp_mask");
    `TEST_ASSERT(resp_frame.status == status, "resp_status");
  endtask
endmodule
