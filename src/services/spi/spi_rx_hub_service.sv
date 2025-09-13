// -----------------------------------------------------------------------------
// spi_rx_hub_service.sv
//
// Consome bytes da FIFO proveniente do serviço de captura e os encaminha ao
// roteador de requisições. Cada byte removido da FIFO é enviado para o
// `request_router_pkg::feed`, que sinaliza `frame_valid` ou `frame_error` ao
// final do frame. Os frames decodificados são disponibilizados nas saídas
// correspondentes.
// -----------------------------------------------------------------------------
`ifndef SPI_RX_HUB_SERVICE_SV
`define SPI_RX_HUB_SERVICE_SV
// Versão com interface direta disponível somente quando SPI_USE_INTERFACES estiver definido
// (como em testbenches ModelSim). Por padrão, inclui a versão sintetizável baseada em sinais
// simples para suportar Verilator.
`ifdef SPI_USE_INTERFACES
`define __SIM_BUILD__
`endif

// -----------------------------------------------------------------------------
// Versão de simulação (usa interface de FIFO direta)
// -----------------------------------------------------------------------------
`ifdef __SIM_BUILD__
module spi_rx_hub_service (
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
      frame_valid = 1'b0;
      frame_error = 1'b0;

      if (!fifo.empty) begin
        spi_service_pkg::byte_t data;
        fifo.read(data);
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

// -----------------------------------------------------------------------------
// Versão sintetizável (handshake da FIFO + pipeline de 1 ciclo)
// -----------------------------------------------------------------------------
`else
module spi_rx_hub_service (
    input  logic           clk,
    input  logic           rst_n,
    // Handshake de leitura da FIFO
    input  logic           fifo_empty,
    output logic           fifo_rd_en,
    input  logic [7:0]     fifo_rd_data,
    input  logic           fifo_rd_valid,
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

  // Pipeline de 1 ciclo: stage0 captura, stage1 processa
  logic        stage0_valid, stage1_valid;
  logic [7:0]  stage0_data,  stage1_data;

  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      ctx           <= request_router_pkg::init();
      frame_valid   <= 1'b0;
      frame_error   <= 1'b0;
      out_msgType   <= '0;
      move_home_frame    = move_home_request_pkg::make_default();
      start_move_frame   = start_move_request_pkg::make_default();
      move_probe_frame   = move_probe_level_request_pkg::make_default();
      queue_add_frame    = move_queue_add_request_pkg::make_default();
      move_end_frame     = move_end_request_pkg::make_default();
      queue_status_frame = move_queue_status_request_pkg::make_default();
      fpga_status_frame  = fpga_status_request_pkg::make_default();
      led_ctrl_frame     = led_control_request_pkg::make_default();
      fifo_rd_en         <= 1'b0;
      stage0_valid       <= 1'b0;
      stage1_valid       <= 1'b0;
      stage0_data        <= '0;
      stage1_data        <= '0;
    end else begin
      // Defaults
      frame_valid <= 1'b0;
      frame_error <= 1'b0;
      fifo_rd_en  <= 1'b0;

      // Lê quando há dado e stage0 livre
      if (!fifo_empty && !stage0_valid) begin
        fifo_rd_en <= 1'b1;
      end

      // Avança pipeline
      stage1_valid <= stage0_valid;
      stage1_data  <= stage0_data;
      stage0_valid <= fifo_rd_valid;
      stage0_data  <= fifo_rd_data;

      // Processa byte do stage1
      if (stage1_valid) begin
        logic                   frame_valid_w;
        logic                   frame_error_w;
        spi_service_pkg::byte_t out_msgType_w;
        frame_valid_w = 1'b0;
        frame_error_w = 1'b0;
        out_msgType_w = '0;
        ctx <= request_router_pkg::feed(
                 ctx,
                 protocol_constants_pkg::byte_t'(stage1_data),
                 frame_valid_w,
                 frame_error_w,
                 out_msgType_w,
                 move_home_frame,
                 start_move_frame,
                 move_probe_frame,
                 queue_add_frame,
                 move_end_frame,
                 queue_status_frame,
                 fpga_status_frame,
                 led_ctrl_frame
               );
        frame_valid <= frame_valid_w;
        frame_error <= frame_error_w;
        out_msgType <= out_msgType_w;
      end
    end
  end
endmodule
`endif
`endif // __SIM_BUILD__
