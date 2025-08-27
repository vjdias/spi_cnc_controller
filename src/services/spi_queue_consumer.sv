// -----------------------------------------------------------------------------
// spi_queue_consumer.sv
//
// Consome bytes da FIFO proveniente do serviço de captura e os encaminha ao
// roteador de requisições. Cada byte removido da FIFO é enviado para o
// `request_router_pkg::feed`, que sinaliza `frame_valid` ou `frame_error` ao
// final do frame. Os frames decodificados são disponibilizados nas saídas
// correspondentes.
// -----------------------------------------------------------------------------
`ifndef SPI_QUEUE_CONSUMER_SV
`define SPI_QUEUE_CONSUMER_SV
module spi_queue_consumer (
    input  logic           clk,
    input  logic           rst_n,
    spi_fifo_if.consumer   fifo,
    output logic           frame_valid,
    output logic           frame_error,
    output spi_service_pkg::byte_t out_msgType,
    output move_home_request_pkg::move_home_req_bytes_t        move_home_frame,
    output start_move_request_pkg::start_move_req_bytes_t       start_move_frame,
    output move_probe_level_request_pkg::move_probe_level_req_bytes_t move_probe_frame,
    output move_queue_add_request_pkg::move_queue_add_req_bytes_t   queue_add_frame,
    output move_end_request_pkg::move_end_req_bytes_t         move_end_frame,
    output move_queue_status_request_pkg::move_queue_status_bytes_t    queue_status_frame,
    output fpga_status_request_pkg::request_fpga_status_bytes_t  fpga_status_frame,
    output led_control_request_pkg::led_ctrl_req_bytes_t        led_ctrl_frame
);
  import spi_service_pkg::*;
  import request_router_pkg::*;
  import protocol_constants_pkg::*;
  import move_home_request_pkg::*;
  import start_move_request_pkg::*;
  import move_probe_level_request_pkg::*;
  import move_queue_add_request_pkg::*;
  import move_end_request_pkg::*;
  import move_queue_status_request_pkg::*;
  import fpga_status_request_pkg::*;
  import led_control_request_pkg::*;

  router_ctx_t ctx;

  // Contexto inicial do roteador
  initial ctx = request_router_pkg::init();

  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      ctx           <= request_router_pkg::init();
      frame_valid   = 1'b0;
      frame_error   = 1'b0;
      out_msgType   = '0;
      move_home_frame    = move_home_request_pkg::make_default();
      start_move_frame   = start_move_request_pkg::make_default();
      move_probe_frame   = move_probe_level_request_pkg::make_default();
      queue_add_frame    = move_queue_add_request_pkg::make_default();
      move_end_frame     = move_end_request_pkg::make_default();
      queue_status_frame = move_queue_status_request_pkg::make_default();
      fpga_status_frame  = fpga_status_request_pkg::make_default();
      led_ctrl_frame     = led_control_request_pkg::make_default();
    end else begin
      // Sinais baixos por padrão a cada ciclo
      frame_valid = 1'b0;
      frame_error = 1'b0;

      if (!fifo.empty) begin
        byte_t data;
        fifo.read(data); // obtém próximo byte da fila
        ctx <= request_router_pkg::feed(
                 ctx,
                 data,
                 frame_valid,
                 frame_error,
                 out_msgType,
                 move_home_frame,
                 start_move_frame,
                 move_probe_frame,
                 queue_add_frame,
                 move_end_frame,
                 queue_status_frame,
                 fpga_status_frame,
                 led_ctrl_frame
               );
      end
    end
  end
endmodule
`endif
