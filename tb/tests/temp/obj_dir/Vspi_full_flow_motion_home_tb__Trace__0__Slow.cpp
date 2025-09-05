// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vspi_full_flow_motion_home_tb__Syms.h"


VL_ATTR_COLD void Vspi_full_flow_motion_home_tb___024root__trace_init_sub__TOP__protocol_constants_pkg__0(Vspi_full_flow_motion_home_tb___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vspi_full_flow_motion_home_tb___024root__trace_init_sub__TOP__led_control_request_pkg__0(Vspi_full_flow_motion_home_tb___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vspi_full_flow_motion_home_tb___024root__trace_init_sub__TOP__move_home_request_pkg__0(Vspi_full_flow_motion_home_tb___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vspi_full_flow_motion_home_tb___024root__trace_init_sub__TOP__move_probe_level_request_pkg__0(Vspi_full_flow_motion_home_tb___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vspi_full_flow_motion_home_tb___024root__trace_init_sub__TOP__move_queue_add_request_pkg__0(Vspi_full_flow_motion_home_tb___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vspi_full_flow_motion_home_tb___024root__trace_init_sub__TOP__led_control_response_pkg__0(Vspi_full_flow_motion_home_tb___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vspi_full_flow_motion_home_tb___024root__trace_init_sub__TOP__move_home_response_pkg__0(Vspi_full_flow_motion_home_tb___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vspi_full_flow_motion_home_tb___024root__trace_init_sub__TOP__move_probe_level_response_pkg__0(Vspi_full_flow_motion_home_tb___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vspi_full_flow_motion_home_tb___024root__trace_init_sub__TOP__move_queue_add_response_pkg__0(Vspi_full_flow_motion_home_tb___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vspi_full_flow_motion_home_tb___024root__trace_init_sub__TOP__move_queue_add_req_parser_pkg__0(Vspi_full_flow_motion_home_tb___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vspi_full_flow_motion_home_tb___024root__trace_init_sub__TOP__spi_service_pkg__0(Vspi_full_flow_motion_home_tb___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vspi_full_flow_motion_home_tb___024root__trace_init_sub__TOP__spi_full_flow_motion_home_tb__DOT__rx_fifo__0(Vspi_full_flow_motion_home_tb___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vspi_full_flow_motion_home_tb___024root__trace_init_sub__TOP__spi_full_flow_motion_home_tb__DOT__tx_fifo__0(Vspi_full_flow_motion_home_tb___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vspi_full_flow_motion_home_tb___024root__trace_init_sub__TOP__spi_full_flow_motion_home_tb__DOT__motion_stream__0(Vspi_full_flow_motion_home_tb___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vspi_full_flow_motion_home_tb___024root__trace_init_sub__TOP__spi_full_flow_motion_home_tb__DOT__streams__BRA__0__KET____0(Vspi_full_flow_motion_home_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vspi_full_flow_motion_home_tb___024root__trace_init_sub__TOP__0(Vspi_full_flow_motion_home_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_full_flow_motion_home_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_full_flow_motion_home_tb___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("protocol_constants_pkg", VerilatedTracePrefixType::SCOPE_MODULE);
    Vspi_full_flow_motion_home_tb___024root__trace_init_sub__TOP__protocol_constants_pkg__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("led_control_request_pkg", VerilatedTracePrefixType::SCOPE_MODULE);
    Vspi_full_flow_motion_home_tb___024root__trace_init_sub__TOP__led_control_request_pkg__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("move_home_request_pkg", VerilatedTracePrefixType::SCOPE_MODULE);
    Vspi_full_flow_motion_home_tb___024root__trace_init_sub__TOP__move_home_request_pkg__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("move_probe_level_request_pkg", VerilatedTracePrefixType::SCOPE_MODULE);
    Vspi_full_flow_motion_home_tb___024root__trace_init_sub__TOP__move_probe_level_request_pkg__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("move_queue_add_request_pkg", VerilatedTracePrefixType::SCOPE_MODULE);
    Vspi_full_flow_motion_home_tb___024root__trace_init_sub__TOP__move_queue_add_request_pkg__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("led_control_response_pkg", VerilatedTracePrefixType::SCOPE_MODULE);
    Vspi_full_flow_motion_home_tb___024root__trace_init_sub__TOP__led_control_response_pkg__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("move_home_response_pkg", VerilatedTracePrefixType::SCOPE_MODULE);
    Vspi_full_flow_motion_home_tb___024root__trace_init_sub__TOP__move_home_response_pkg__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("move_probe_level_response_pkg", VerilatedTracePrefixType::SCOPE_MODULE);
    Vspi_full_flow_motion_home_tb___024root__trace_init_sub__TOP__move_probe_level_response_pkg__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("move_queue_add_response_pkg", VerilatedTracePrefixType::SCOPE_MODULE);
    Vspi_full_flow_motion_home_tb___024root__trace_init_sub__TOP__move_queue_add_response_pkg__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("move_queue_add_req_parser_pkg", VerilatedTracePrefixType::SCOPE_MODULE);
    Vspi_full_flow_motion_home_tb___024root__trace_init_sub__TOP__move_queue_add_req_parser_pkg__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("spi_service_pkg", VerilatedTracePrefixType::SCOPE_MODULE);
    Vspi_full_flow_motion_home_tb___024root__trace_init_sub__TOP__spi_service_pkg__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("spi_full_flow_motion_home_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+247,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("rx_fifo", VerilatedTracePrefixType::SCOPE_INTERFACE);
    Vspi_full_flow_motion_home_tb___024root__trace_init_sub__TOP__spi_full_flow_motion_home_tb__DOT__rx_fifo__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBit(c+20,0,"rd_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+251,0,"raddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+21,0,"rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+22,0,"irq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"spi_byte_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+24,0,"spi_byte",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+25,0,"overflow_error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"slave_busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"frame_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"frame_error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+28,0,"out_msgType",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+29,0,"start_move_frame",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+30,0,"move_home_frame",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 71,0);
    tracep->declBus(c+2,0,"enc_pos",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"enc_vel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+4,0,"prox_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"estop_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"tmc_step_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"tmc_dir_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"tmc_enn_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+36,0,"tmc_step_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"tmc_dir_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"tmc_enn_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"tmc_step_z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"tmc_dir_z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"tmc_enn_z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("tx_fifo", VerilatedTracePrefixType::SCOPE_INTERFACE);
    Vspi_full_flow_motion_home_tb___024root__trace_init_sub__TOP__spi_full_flow_motion_home_tb__DOT__tx_fifo__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBit(c+42,0,"tx_busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("motion_stream", VerilatedTracePrefixType::SCOPE_INTERFACE);
    Vspi_full_flow_motion_home_tb___024root__trace_init_sub__TOP__spi_full_flow_motion_home_tb__DOT__motion_stream__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("streams[0]", VerilatedTracePrefixType::SCOPE_INTERFACE);
    Vspi_full_flow_motion_home_tb___024root__trace_init_sub__TOP__spi_full_flow_motion_home_tb__DOT__streams__BRA__0__KET____0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBit(c+43,0,"wr_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+44,0,"waddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+45,0,"wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+252,0,"RESP_CAP_BYTES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("resp_bytes", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+46+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+78,0,"resp_byte_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+79,0,"step_count_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+80,0,"prev_step_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_cap", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+247,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"spi_byte_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+24,0,"spi_byte",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("fifo", VerilatedTracePrefixType::SCOPE_INTERFACE);
    Vspi_full_flow_motion_home_tb___024root__trace_init_sub__TOP__spi_full_flow_motion_home_tb__DOT__rx_fifo__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBit(c+25,0,"overflow_error",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"slave_busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_cons", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+247,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("fifo", VerilatedTracePrefixType::SCOPE_INTERFACE);
    Vspi_full_flow_motion_home_tb___024root__trace_init_sub__TOP__spi_full_flow_motion_home_tb__DOT__rx_fifo__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBit(c+26,0,"frame_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"frame_error",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+28,0,"out_msgType",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declArray(c+30,0,"move_home_frame",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 71,0);
    tracep->declBus(c+29,0,"start_move_frame",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+81,0,"move_probe_frame",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declArray(c+83,0,"queue_add_frame",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 335,0);
    tracep->declBus(c+94,0,"move_end_frame",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+95,0,"queue_status_frame",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+96,0,"fpga_status_frame",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+97,0,"led_ctrl_frame",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 55,0);
    tracep->declArray(c+99,0,"ctx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 726,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+122,0,"data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_miso", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+251,0,"TX_DATA_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+253,0,"WAIT_CYCLES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+247,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("tx_fifo", VerilatedTracePrefixType::SCOPE_INTERFACE);
    Vspi_full_flow_motion_home_tb___024root__trace_init_sub__TOP__spi_full_flow_motion_home_tb__DOT__tx_fifo__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBit(c+43,0,"wr_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+44,0,"waddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+45,0,"wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+123,0,"gap",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+124,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_motion", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+247,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"frame_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+28,0,"msgType",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+29,0,"start_move_frame",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+254,0,"queue_add_frame",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 335,0);
    tracep->declBus(c+265,0,"move_end_frame",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+30,0,"move_home_frame",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 71,0);
    tracep->declQuad(c+266,0,"probe_frame",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+265,0,"queue_status_frame",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"enc_position",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"enc_velocity",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+4,0,"i_prox_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"i_estop_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"tmc_step_x",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"tmc_dir_x",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"tmc_enn_x",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+36,0,"tmc_step_y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"tmc_dir_y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"tmc_enn_y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"tmc_step_z",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"tmc_dir_z",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"tmc_enn_z",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("tx_stream", VerilatedTracePrefixType::SCOPE_INTERFACE);
    Vspi_full_flow_motion_home_tb___024root__trace_init_sub__TOP__spi_full_flow_motion_home_tb__DOT__motion_stream__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBit(c+125,0,"prox_active",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+126,0,"estop_inhibit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+268,0,"TICK_DIV",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+269,0,"PID_DIV",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+127,0,"tick",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+128,0,"pid_tick",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+129,0,"sync_start",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+130,0,"sync_req",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"tick_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+132,0,"start_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+133,0,"start_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+134,0,"start_z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"stop_all",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+136,0,"dir_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+137,0,"step_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+138,0,"step_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+139,0,"step_z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+140,0,"ff_rate_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+141,0,"ff_rate_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+142,0,"ff_rate_z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+248,0,"pid_rate_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+249,0,"pid_rate_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+250,0,"pid_rate_z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+143,0,"kp_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+144,0,"ki_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+145,0,"kd_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+146,0,"kp_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+147,0,"ki_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+148,0,"kd_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+149,0,"kp_z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+150,0,"ki_z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+151,0,"kd_z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+270,0,"pid_err_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+270,0,"pid_err_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+270,0,"pid_err_z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+152,0,"cont_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+153,0,"cont_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+154,0,"cont_z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+155,0,"current_move_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+156,0,"home_pending",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+157,0,"home_frame_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+158,0,"home_axis_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+135,0,"move_end_pulse",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+159,0,"busy_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+160,0,"busy_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+161,0,"busy_z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+271,0,"SAFETY_ENABLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+131,0,"move_enabled",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"drv_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+162,0,"start_pending",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+272,0,"SHIFT_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+163,0,"pending",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+164,0,"pend_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 159,0);
    tracep->declBus(c+169,0,"pend_len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("u_drv_x", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+273,0,"STEP_ACTIVE_HIGH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+273,0,"DIR_ACTIVE_HIGH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+273,0,"ENN_ACTIVE_LOW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+274,0,"DIR_SETUP_CYCLES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+275,0,"SYNC_MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+276,0,"DDA_FRACT_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+274,0,"DIR_SETUP_TICKS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+247,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"i_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+170,0,"i_dir",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+132,0,"i_start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"i_stop",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"i_continuous",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+137,0,"i_steps",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+265,0,"i_period_cycles",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+265,0,"i_pulse_cycles",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+127,0,"i_tick",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+248,0,"i_rate_inc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+277,0,"i_pulse_ticks",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+33,0,"o_step",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"o_dir",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"o_enn",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+159,0,"o_busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+171,0,"o_done_pulse",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+278,0,"period_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+279,0,"pulse_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+172,0,"steps_rem_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+280,0,"dir_cmd_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+281,0,"dir_out_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+282,0,"period_cnt_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+283,0,"pulse_cnt_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+284,0,"step_on_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+285,0,"dir_setup_cnt_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+286,0,"busy_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+287,0,"done_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+173,0,"step_on_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"dir_out_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+159,0,"busy_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+171,0,"done_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("g_sync", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+288,0,"ONE_Q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+174,0,"acc_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+175,0,"pulse_tick_cnt_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+173,0,"step_on_tk_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+176,0,"dir_setup_tk_cnt_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+159,0,"busy_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+171,0,"done_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"dir_out_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+177,0,"dir_cmd_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_drv_y", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+273,0,"STEP_ACTIVE_HIGH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+273,0,"DIR_ACTIVE_HIGH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+273,0,"ENN_ACTIVE_LOW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+274,0,"DIR_SETUP_CYCLES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+275,0,"SYNC_MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+276,0,"DDA_FRACT_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+274,0,"DIR_SETUP_TICKS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+247,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"i_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+178,0,"i_dir",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+133,0,"i_start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"i_stop",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+153,0,"i_continuous",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+138,0,"i_steps",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+265,0,"i_period_cycles",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+265,0,"i_pulse_cycles",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+127,0,"i_tick",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+249,0,"i_rate_inc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+277,0,"i_pulse_ticks",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+36,0,"o_step",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"o_dir",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"o_enn",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+160,0,"o_busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+179,0,"o_done_pulse",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+289,0,"period_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+290,0,"pulse_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+180,0,"steps_rem_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+291,0,"dir_cmd_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+292,0,"dir_out_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+293,0,"period_cnt_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+294,0,"pulse_cnt_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+295,0,"step_on_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+296,0,"dir_setup_cnt_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+297,0,"busy_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+298,0,"done_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+181,0,"step_on_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"dir_out_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+160,0,"busy_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+179,0,"done_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("g_sync", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+288,0,"ONE_Q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+182,0,"acc_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+183,0,"pulse_tick_cnt_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+181,0,"step_on_tk_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+184,0,"dir_setup_tk_cnt_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+160,0,"busy_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+179,0,"done_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"dir_out_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+185,0,"dir_cmd_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_drv_z", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+273,0,"STEP_ACTIVE_HIGH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+273,0,"DIR_ACTIVE_HIGH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+273,0,"ENN_ACTIVE_LOW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+274,0,"DIR_SETUP_CYCLES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+275,0,"SYNC_MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+276,0,"DDA_FRACT_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+274,0,"DIR_SETUP_TICKS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+247,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"i_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+186,0,"i_dir",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+134,0,"i_start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"i_stop",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+154,0,"i_continuous",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+139,0,"i_steps",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+265,0,"i_period_cycles",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+265,0,"i_pulse_cycles",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+127,0,"i_tick",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+250,0,"i_rate_inc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+277,0,"i_pulse_ticks",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+39,0,"o_step",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"o_dir",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"o_enn",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+161,0,"o_busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+187,0,"o_done_pulse",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+299,0,"period_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+300,0,"pulse_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+188,0,"steps_rem_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+301,0,"dir_cmd_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+302,0,"dir_out_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+303,0,"period_cnt_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+304,0,"pulse_cnt_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+305,0,"step_on_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+306,0,"dir_setup_cnt_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+307,0,"busy_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+308,0,"done_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"step_on_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"dir_out_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+161,0,"busy_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+187,0,"done_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("g_sync", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+288,0,"ONE_Q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+190,0,"acc_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+191,0,"pulse_tick_cnt_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+189,0,"step_on_tk_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+192,0,"dir_setup_tk_cnt_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+161,0,"busy_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+187,0,"done_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"dir_out_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+193,0,"dir_cmd_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_estop", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+273,0,"IS_NORMALLY_CLOSED",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+274,0,"DEBOUNCE_CYCLES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+273,0,"LATCH_UNTIL_CLEAR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+274,0,"CLEAR_HOLDOFF_CYCLES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+247,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"i_estop_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+309,0,"i_clear",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+126,0,"o_estop_active",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+194,0,"o_estop_engage_pulse",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+195,0,"o_estop_release_pulse",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+126,0,"o_inhibit",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+196,0,"in_meta",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"in_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+198,0,"raw_active",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+199,0,"debounced_active",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+200,0,"latched_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+201,0,"clear_cnt_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+202,0,"estop_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+126,0,"estop_final",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_pid", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+247,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+128,0,"pid_tick",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+137,0,"target_x",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+138,0,"target_y",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+139,0,"target_z",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+140,0,"ff_rate_x",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+141,0,"ff_rate_y",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+142,0,"ff_rate_z",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+143,0,"kp_x",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+144,0,"ki_x",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+145,0,"kd_x",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+146,0,"kp_y",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+147,0,"ki_y",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+148,0,"kd_y",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+149,0,"kp_z",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+150,0,"ki_z",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+151,0,"kd_z",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2,0,"enc_pos_x",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"enc_pos_y",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"enc_pos_z",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+248,0,"rate_x",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+249,0,"rate_y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+250,0,"rate_z",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+270,0,"pid_err_x",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+270,0,"pid_err_y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+270,0,"pid_err_z",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+310,0,"KP_SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_prox", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+273,0,"IS_PNP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+273,0,"IS_NORMALLY_OPEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+274,0,"DEBOUNCE_CYCLES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+247,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"i_sensor_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"o_active",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+203,0,"o_active_pulse",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+204,0,"o_inactive_pulse",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+205,0,"in_meta",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+206,0,"in_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+206,0,"raw_active",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+207,0,"debounced_active",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+208,0,"debounced_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_tick", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+311,0,"DIV_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+247,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"i_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+268,0,"i_tick_div",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+269,0,"i_pid_div",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+130,0,"i_sync_start_req",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+127,0,"o_tick",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+128,0,"o_pid_tick",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+129,0,"o_sync_start",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+209,0,"tick_cnt_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+127,0,"tick_pulse_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+210,0,"pid_cnt_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+128,0,"pid_pulse_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+211,0,"sync_req_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+212,0,"r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+214,0,"r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+215,0,"r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+217,0,"r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declArray(c+219,0,"r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 95,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+222,0,"r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_rxbridge", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+251,0,"RX_DATA_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+273,0,"BACK_TO_BACK_READS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+247,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"rd_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+251,0,"raddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+21,0,"rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+22,0,"irq",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"spi_byte_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+24,0,"spi_byte",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+223,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_tx", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+312,0,"NUM_STREAMS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+247,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("streams[0]", VerilatedTracePrefixType::SCOPE_INTERFACE);
    Vspi_full_flow_motion_home_tb___024root__trace_init_sub__TOP__spi_full_flow_motion_home_tb__DOT__streams__BRA__0__KET____0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("tx_fifo", VerilatedTracePrefixType::SCOPE_INTERFACE);
    Vspi_full_flow_motion_home_tb___024root__trace_init_sub__TOP__spi_full_flow_motion_home_tb__DOT__tx_fifo__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBit(c+42,0,"tx_busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+272,0,"SHIFT_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+313,0,"LENW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+224,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declArray(c+225,0,"shift",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 159,0);
    tracep->declBus(c+230,0,"len_bytes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+231,0,"idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+232,0,"rr_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("valid_arr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declBit(c+233+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("bits_arr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declArray(c+234+i*5,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 159,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("len_arr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+239+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 4,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("ready_arr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declBit(c+240+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->declBit(c+241,0,"pick",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+242,0,"pick_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+275,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+243,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+244,0,"cand",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+245,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+6,0,"cycles",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+7,0,"idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+8,0,"prev_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vspi_full_flow_motion_home_tb___024root__trace_init_sub__TOP__led_control_response_pkg__0(Vspi_full_flow_motion_home_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_full_flow_motion_home_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_full_flow_motion_home_tb___024root__trace_init_sub__TOP__led_control_response_pkg__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+314,0,"FRAME_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
}

VL_ATTR_COLD void Vspi_full_flow_motion_home_tb___024root__trace_init_sub__TOP__move_home_response_pkg__0(Vspi_full_flow_motion_home_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_full_flow_motion_home_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_full_flow_motion_home_tb___024root__trace_init_sub__TOP__move_home_response_pkg__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+315,0,"FRAME_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
}

VL_ATTR_COLD void Vspi_full_flow_motion_home_tb___024root__trace_init_sub__TOP__move_queue_add_response_pkg__0(Vspi_full_flow_motion_home_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_full_flow_motion_home_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_full_flow_motion_home_tb___024root__trace_init_sub__TOP__move_queue_add_response_pkg__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+316,0,"FRAME_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
}

VL_ATTR_COLD void Vspi_full_flow_motion_home_tb___024root__trace_init_sub__TOP__spi_full_flow_motion_home_tb__DOT__motion_stream__0(Vspi_full_flow_motion_home_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_full_flow_motion_home_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_full_flow_motion_home_tb___024root__trace_init_sub__TOP__spi_full_flow_motion_home_tb__DOT__motion_stream__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+272,0,"SHIFT_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+163,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+246,0,"ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+164,0,"bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 159,0);
    tracep->declBus(c+169,0,"len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
}

VL_ATTR_COLD void Vspi_full_flow_motion_home_tb___024root__trace_init_sub__TOP__spi_full_flow_motion_home_tb__DOT__streams__BRA__0__KET____0(Vspi_full_flow_motion_home_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_full_flow_motion_home_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_full_flow_motion_home_tb___024root__trace_init_sub__TOP__spi_full_flow_motion_home_tb__DOT__streams__BRA__0__KET____0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+272,0,"SHIFT_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+163,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+246,0,"ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+164,0,"bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 159,0);
    tracep->declBus(c+169,0,"len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
}

VL_ATTR_COLD void Vspi_full_flow_motion_home_tb___024root__trace_init_sub__TOP__spi_full_flow_motion_home_tb__DOT__rx_fifo__0(Vspi_full_flow_motion_home_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_full_flow_motion_home_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_full_flow_motion_home_tb___024root__trace_init_sub__TOP__spi_full_flow_motion_home_tb__DOT__rx_fifo__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+317,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+271,0,"DROP_OLD_ON_FULL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+10,0,"wr_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+11,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+12,0,"count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+13,0,"full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
}

VL_ATTR_COLD void Vspi_full_flow_motion_home_tb___024root__trace_init_sub__TOP__spi_full_flow_motion_home_tb__DOT__tx_fifo__0(Vspi_full_flow_motion_home_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_full_flow_motion_home_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_full_flow_motion_home_tb___024root__trace_init_sub__TOP__spi_full_flow_motion_home_tb__DOT__tx_fifo__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+318,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+273,0,"DROP_OLD_ON_FULL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+15,0,"wr_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+16,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+17,0,"count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+18,0,"full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
}

VL_ATTR_COLD void Vspi_full_flow_motion_home_tb___024root__trace_init_sub__TOP__move_queue_add_req_parser_pkg__0(Vspi_full_flow_motion_home_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_full_flow_motion_home_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_full_flow_motion_home_tb___024root__trace_init_sub__TOP__move_queue_add_req_parser_pkg__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+319,0,"FRAME_BYTES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
}

VL_ATTR_COLD void Vspi_full_flow_motion_home_tb___024root__trace_init_sub__TOP__spi_service_pkg__0(Vspi_full_flow_motion_home_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_full_flow_motion_home_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_full_flow_motion_home_tb___024root__trace_init_sub__TOP__spi_service_pkg__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+319,0,"REQ_MAX_BYTES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+320,0,"RESP_MAX_BYTES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+317,0,"RX_FIFO_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+321,0,"RX_BLOCK_LEVEL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+318,0,"TX_FIFO_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
}

VL_ATTR_COLD void Vspi_full_flow_motion_home_tb___024root__trace_init_sub__TOP__led_control_request_pkg__0(Vspi_full_flow_motion_home_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_full_flow_motion_home_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_full_flow_motion_home_tb___024root__trace_init_sub__TOP__led_control_request_pkg__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+314,0,"FRAME_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
}

VL_ATTR_COLD void Vspi_full_flow_motion_home_tb___024root__trace_init_sub__TOP__move_home_request_pkg__0(Vspi_full_flow_motion_home_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_full_flow_motion_home_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_full_flow_motion_home_tb___024root__trace_init_sub__TOP__move_home_request_pkg__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+322,0,"FRAME_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
}

VL_ATTR_COLD void Vspi_full_flow_motion_home_tb___024root__trace_init_sub__TOP__move_probe_level_request_pkg__0(Vspi_full_flow_motion_home_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_full_flow_motion_home_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_full_flow_motion_home_tb___024root__trace_init_sub__TOP__move_probe_level_request_pkg__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+315,0,"FRAME_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
}

VL_ATTR_COLD void Vspi_full_flow_motion_home_tb___024root__trace_init_sub__TOP__move_queue_add_request_pkg__0(Vspi_full_flow_motion_home_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_full_flow_motion_home_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_full_flow_motion_home_tb___024root__trace_init_sub__TOP__move_queue_add_request_pkg__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+323,0,"FRAME_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
}

VL_ATTR_COLD void Vspi_full_flow_motion_home_tb___024root__trace_init_sub__TOP__move_probe_level_response_pkg__0(Vspi_full_flow_motion_home_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_full_flow_motion_home_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_full_flow_motion_home_tb___024root__trace_init_sub__TOP__move_probe_level_response_pkg__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+272,0,"FRAME_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
}

VL_ATTR_COLD void Vspi_full_flow_motion_home_tb___024root__trace_init_sub__TOP__protocol_constants_pkg__0(Vspi_full_flow_motion_home_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_full_flow_motion_home_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_full_flow_motion_home_tb___024root__trace_init_sub__TOP__protocol_constants_pkg__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+324,0,"REQ_HEADER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+325,0,"REQ_TAIL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+326,0,"REQ_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+327,0,"RESP_HEADER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+328,0,"RESP_TAIL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+329,0,"MOVE_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+330,0,"MOVE_QUEUE_STATUS_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+331,0,"START_MOVE_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+332,0,"MOVE_HOME_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+333,0,"MOVE_PROBE_LEVEL_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+334,0,"MOVE_END_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+335,0,"LED_CTRL_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+326,0,"FPGA_STATUS_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
}

VL_ATTR_COLD void Vspi_full_flow_motion_home_tb___024root__trace_init_top(Vspi_full_flow_motion_home_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_full_flow_motion_home_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_full_flow_motion_home_tb___024root__trace_init_top\n"); );
    // Body
    Vspi_full_flow_motion_home_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vspi_full_flow_motion_home_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vspi_full_flow_motion_home_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vspi_full_flow_motion_home_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vspi_full_flow_motion_home_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vspi_full_flow_motion_home_tb___024root__trace_register(Vspi_full_flow_motion_home_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_full_flow_motion_home_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_full_flow_motion_home_tb___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vspi_full_flow_motion_home_tb___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vspi_full_flow_motion_home_tb___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vspi_full_flow_motion_home_tb___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vspi_full_flow_motion_home_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vspi_full_flow_motion_home_tb___024root__trace_const_0_sub_0(Vspi_full_flow_motion_home_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vspi_full_flow_motion_home_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_full_flow_motion_home_tb___024root__trace_const_0\n"); );
    // Init
    Vspi_full_flow_motion_home_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vspi_full_flow_motion_home_tb___024root*>(voidSelf);
    Vspi_full_flow_motion_home_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vspi_full_flow_motion_home_tb___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

extern const VlWide<11>/*351:0*/ Vspi_full_flow_motion_home_tb__ConstPool__CONST_hf2cc239e_0;

VL_ATTR_COLD void Vspi_full_flow_motion_home_tb___024root__trace_const_0_sub_0(Vspi_full_flow_motion_home_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_full_flow_motion_home_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_full_flow_motion_home_tb___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+251,(0U),3);
    bufp->fullIData(oldp+252,(0x20U),32);
    bufp->fullIData(oldp+253,(2U),32);
    bufp->fullWData(oldp+254,(Vspi_full_flow_motion_home_tb__ConstPool__CONST_hf2cc239e_0),336);
    bufp->fullIData(oldp+265,(0U),32);
    bufp->fullQData(oldp+266,(0ULL),64);
    bufp->fullIData(oldp+268,(1U),32);
    bufp->fullIData(oldp+269,(0x40U),32);
    bufp->fullCData(oldp+270,(0U),8);
    bufp->fullBit(oldp+271,(0U));
    bufp->fullIData(oldp+272,(0xa0U),32);
    bufp->fullBit(oldp+273,(1U));
    bufp->fullIData(oldp+274,(0U),32);
    bufp->fullIData(oldp+275,(1U),32);
    bufp->fullIData(oldp+276,(0x10U),32);
    bufp->fullSData(oldp+277,(4U),16);
    bufp->fullIData(oldp+278,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_x__DOT__period_q),32);
    bufp->fullIData(oldp+279,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_x__DOT__pulse_q),32);
    bufp->fullBit(oldp+280,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_x__DOT__dir_cmd_q));
    bufp->fullBit(oldp+281,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_x__DOT__dir_out_q));
    bufp->fullIData(oldp+282,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_x__DOT__period_cnt_q),32);
    bufp->fullIData(oldp+283,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_x__DOT__pulse_cnt_q),32);
    bufp->fullBit(oldp+284,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_x__DOT__step_on_q));
    bufp->fullIData(oldp+285,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_x__DOT__dir_setup_cnt_q),32);
    bufp->fullBit(oldp+286,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_x__DOT__busy_q));
    bufp->fullBit(oldp+287,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_x__DOT__done_q));
    bufp->fullIData(oldp+288,(0x10000U),32);
    bufp->fullIData(oldp+289,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_y__DOT__period_q),32);
    bufp->fullIData(oldp+290,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_y__DOT__pulse_q),32);
    bufp->fullBit(oldp+291,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_y__DOT__dir_cmd_q));
    bufp->fullBit(oldp+292,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_y__DOT__dir_out_q));
    bufp->fullIData(oldp+293,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_y__DOT__period_cnt_q),32);
    bufp->fullIData(oldp+294,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_y__DOT__pulse_cnt_q),32);
    bufp->fullBit(oldp+295,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_y__DOT__step_on_q));
    bufp->fullIData(oldp+296,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_y__DOT__dir_setup_cnt_q),32);
    bufp->fullBit(oldp+297,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_y__DOT__busy_q));
    bufp->fullBit(oldp+298,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_y__DOT__done_q));
    bufp->fullIData(oldp+299,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_z__DOT__period_q),32);
    bufp->fullIData(oldp+300,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_z__DOT__pulse_q),32);
    bufp->fullBit(oldp+301,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_z__DOT__dir_cmd_q));
    bufp->fullBit(oldp+302,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_z__DOT__dir_out_q));
    bufp->fullIData(oldp+303,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_z__DOT__period_cnt_q),32);
    bufp->fullIData(oldp+304,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_z__DOT__pulse_cnt_q),32);
    bufp->fullBit(oldp+305,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_z__DOT__step_on_q));
    bufp->fullIData(oldp+306,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_z__DOT__dir_setup_cnt_q),32);
    bufp->fullBit(oldp+307,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_z__DOT__busy_q));
    bufp->fullBit(oldp+308,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_z__DOT__done_q));
    bufp->fullBit(oldp+309,(0U));
    bufp->fullIData(oldp+310,(8U),32);
    bufp->fullIData(oldp+311,(0x20U),32);
    bufp->fullIData(oldp+312,(1U),32);
    bufp->fullIData(oldp+313,(5U),32);
    bufp->fullIData(oldp+314,(0x38U),32);
    bufp->fullIData(oldp+315,(0x40U),32);
    bufp->fullIData(oldp+316,(0x30U),32);
    bufp->fullIData(oldp+317,(0xd2U),32);
    bufp->fullIData(oldp+318,(0xc8U),32);
    bufp->fullIData(oldp+319,(0x2aU),32);
    bufp->fullIData(oldp+320,(0x14U),32);
    bufp->fullIData(oldp+321,(0xa8U),32);
    bufp->fullIData(oldp+322,(0x48U),32);
    bufp->fullIData(oldp+323,(0x150U),32);
    bufp->fullCData(oldp+324,(0xaaU),8);
    bufp->fullCData(oldp+325,(0x55U),8);
    bufp->fullCData(oldp+326,(0x20U),8);
    bufp->fullCData(oldp+327,(0xabU),8);
    bufp->fullCData(oldp+328,(0x54U),8);
    bufp->fullCData(oldp+329,(1U),8);
    bufp->fullCData(oldp+330,(2U),8);
    bufp->fullCData(oldp+331,(3U),8);
    bufp->fullCData(oldp+332,(4U),8);
    bufp->fullCData(oldp+333,(5U),8);
    bufp->fullCData(oldp+334,(6U),8);
    bufp->fullCData(oldp+335,(7U),8);
}

VL_ATTR_COLD void Vspi_full_flow_motion_home_tb___024root__trace_full_0_sub_0(Vspi_full_flow_motion_home_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vspi_full_flow_motion_home_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_full_flow_motion_home_tb___024root__trace_full_0\n"); );
    // Init
    Vspi_full_flow_motion_home_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vspi_full_flow_motion_home_tb___024root*>(voidSelf);
    Vspi_full_flow_motion_home_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vspi_full_flow_motion_home_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vspi_full_flow_motion_home_tb___024root__trace_full_0_sub_0(Vspi_full_flow_motion_home_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_full_flow_motion_home_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_full_flow_motion_home_tb___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->spi_full_flow_motion_home_tb__DOT__rst_n));
    bufp->fullIData(oldp+2,(vlSelf->spi_full_flow_motion_home_tb__DOT__enc_pos),32);
    bufp->fullIData(oldp+3,(vlSelf->spi_full_flow_motion_home_tb__DOT__enc_vel),32);
    bufp->fullBit(oldp+4,(vlSelf->spi_full_flow_motion_home_tb__DOT__prox_in));
    bufp->fullBit(oldp+5,(vlSelf->spi_full_flow_motion_home_tb__DOT__estop_in));
    bufp->fullIData(oldp+6,(vlSelf->spi_full_flow_motion_home_tb__DOT__unnamedblk5__DOT__cycles),32);
    bufp->fullIData(oldp+7,(vlSelf->spi_full_flow_motion_home_tb__DOT__unnamedblk5__DOT__idx),32);
    bufp->fullIData(oldp+8,(vlSelf->spi_full_flow_motion_home_tb__DOT__unnamedblk5__DOT__prev_cnt),32);
    bufp->fullBit(oldp+9,((0xa8U < vlSymsp->TOP__spi_full_flow_motion_home_tb__DOT__rx_fifo.count)));
    bufp->fullIData(oldp+10,(vlSymsp->TOP__spi_full_flow_motion_home_tb__DOT__rx_fifo.wr_ptr),32);
    bufp->fullIData(oldp+11,(vlSymsp->TOP__spi_full_flow_motion_home_tb__DOT__rx_fifo.rd_ptr),32);
    bufp->fullIData(oldp+12,(vlSymsp->TOP__spi_full_flow_motion_home_tb__DOT__rx_fifo.count),32);
    bufp->fullBit(oldp+13,((0xd2U == vlSymsp->TOP__spi_full_flow_motion_home_tb__DOT__rx_fifo.count)));
    bufp->fullBit(oldp+14,((0U == vlSymsp->TOP__spi_full_flow_motion_home_tb__DOT__rx_fifo.count)));
    bufp->fullIData(oldp+15,(vlSymsp->TOP__spi_full_flow_motion_home_tb__DOT__tx_fifo.wr_ptr),32);
    bufp->fullIData(oldp+16,(vlSymsp->TOP__spi_full_flow_motion_home_tb__DOT__tx_fifo.rd_ptr),32);
    bufp->fullIData(oldp+17,(vlSymsp->TOP__spi_full_flow_motion_home_tb__DOT__tx_fifo.count),32);
    bufp->fullBit(oldp+18,((0xc8U == vlSymsp->TOP__spi_full_flow_motion_home_tb__DOT__tx_fifo.count)));
    bufp->fullBit(oldp+19,((0U == vlSymsp->TOP__spi_full_flow_motion_home_tb__DOT__tx_fifo.count)));
    bufp->fullBit(oldp+20,(vlSelf->spi_full_flow_motion_home_tb__DOT__rd_en));
    bufp->fullCData(oldp+21,(vlSelf->spi_full_flow_motion_home_tb__DOT__rdata),8);
    bufp->fullBit(oldp+22,(vlSelf->spi_full_flow_motion_home_tb__DOT__irq));
    bufp->fullBit(oldp+23,(vlSelf->spi_full_flow_motion_home_tb__DOT__spi_byte_valid));
    bufp->fullCData(oldp+24,(vlSelf->spi_full_flow_motion_home_tb__DOT__spi_byte),8);
    bufp->fullBit(oldp+25,(vlSelf->spi_full_flow_motion_home_tb__DOT__overflow_error));
    bufp->fullBit(oldp+26,(vlSelf->spi_full_flow_motion_home_tb__DOT__frame_valid));
    bufp->fullBit(oldp+27,(vlSelf->spi_full_flow_motion_home_tb__DOT__frame_error));
    bufp->fullCData(oldp+28,(vlSelf->spi_full_flow_motion_home_tb__DOT__out_msgType),8);
    bufp->fullIData(oldp+29,(vlSelf->spi_full_flow_motion_home_tb__DOT__start_move_frame),32);
    bufp->fullWData(oldp+30,(vlSelf->spi_full_flow_motion_home_tb__DOT__move_home_frame),72);
    bufp->fullBit(oldp+33,(vlSelf->spi_full_flow_motion_home_tb__DOT__tmc_step_x));
    bufp->fullBit(oldp+34,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__dir_out_s));
    bufp->fullBit(oldp+35,(vlSelf->spi_full_flow_motion_home_tb__DOT__tmc_enn_x));
    bufp->fullBit(oldp+36,(vlSelf->spi_full_flow_motion_home_tb__DOT__tmc_step_y));
    bufp->fullBit(oldp+37,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__dir_out_s));
    bufp->fullBit(oldp+38,(vlSelf->spi_full_flow_motion_home_tb__DOT__tmc_enn_y));
    bufp->fullBit(oldp+39,(vlSelf->spi_full_flow_motion_home_tb__DOT__tmc_step_z));
    bufp->fullBit(oldp+40,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__dir_out_s));
    bufp->fullBit(oldp+41,(vlSelf->spi_full_flow_motion_home_tb__DOT__tmc_enn_z));
    bufp->fullBit(oldp+42,(vlSelf->spi_full_flow_motion_home_tb__DOT__tx_busy));
    bufp->fullBit(oldp+43,(vlSelf->spi_full_flow_motion_home_tb__DOT__wr_en));
    bufp->fullCData(oldp+44,(vlSelf->spi_full_flow_motion_home_tb__DOT__waddr),3);
    bufp->fullCData(oldp+45,(vlSelf->spi_full_flow_motion_home_tb__DOT__wdata),8);
    bufp->fullCData(oldp+46,(vlSelf->spi_full_flow_motion_home_tb__DOT__resp_bytes[0]),8);
    bufp->fullCData(oldp+47,(vlSelf->spi_full_flow_motion_home_tb__DOT__resp_bytes[1]),8);
    bufp->fullCData(oldp+48,(vlSelf->spi_full_flow_motion_home_tb__DOT__resp_bytes[2]),8);
    bufp->fullCData(oldp+49,(vlSelf->spi_full_flow_motion_home_tb__DOT__resp_bytes[3]),8);
    bufp->fullCData(oldp+50,(vlSelf->spi_full_flow_motion_home_tb__DOT__resp_bytes[4]),8);
    bufp->fullCData(oldp+51,(vlSelf->spi_full_flow_motion_home_tb__DOT__resp_bytes[5]),8);
    bufp->fullCData(oldp+52,(vlSelf->spi_full_flow_motion_home_tb__DOT__resp_bytes[6]),8);
    bufp->fullCData(oldp+53,(vlSelf->spi_full_flow_motion_home_tb__DOT__resp_bytes[7]),8);
    bufp->fullCData(oldp+54,(vlSelf->spi_full_flow_motion_home_tb__DOT__resp_bytes[8]),8);
    bufp->fullCData(oldp+55,(vlSelf->spi_full_flow_motion_home_tb__DOT__resp_bytes[9]),8);
    bufp->fullCData(oldp+56,(vlSelf->spi_full_flow_motion_home_tb__DOT__resp_bytes[10]),8);
    bufp->fullCData(oldp+57,(vlSelf->spi_full_flow_motion_home_tb__DOT__resp_bytes[11]),8);
    bufp->fullCData(oldp+58,(vlSelf->spi_full_flow_motion_home_tb__DOT__resp_bytes[12]),8);
    bufp->fullCData(oldp+59,(vlSelf->spi_full_flow_motion_home_tb__DOT__resp_bytes[13]),8);
    bufp->fullCData(oldp+60,(vlSelf->spi_full_flow_motion_home_tb__DOT__resp_bytes[14]),8);
    bufp->fullCData(oldp+61,(vlSelf->spi_full_flow_motion_home_tb__DOT__resp_bytes[15]),8);
    bufp->fullCData(oldp+62,(vlSelf->spi_full_flow_motion_home_tb__DOT__resp_bytes[16]),8);
    bufp->fullCData(oldp+63,(vlSelf->spi_full_flow_motion_home_tb__DOT__resp_bytes[17]),8);
    bufp->fullCData(oldp+64,(vlSelf->spi_full_flow_motion_home_tb__DOT__resp_bytes[18]),8);
    bufp->fullCData(oldp+65,(vlSelf->spi_full_flow_motion_home_tb__DOT__resp_bytes[19]),8);
    bufp->fullCData(oldp+66,(vlSelf->spi_full_flow_motion_home_tb__DOT__resp_bytes[20]),8);
    bufp->fullCData(oldp+67,(vlSelf->spi_full_flow_motion_home_tb__DOT__resp_bytes[21]),8);
    bufp->fullCData(oldp+68,(vlSelf->spi_full_flow_motion_home_tb__DOT__resp_bytes[22]),8);
    bufp->fullCData(oldp+69,(vlSelf->spi_full_flow_motion_home_tb__DOT__resp_bytes[23]),8);
    bufp->fullCData(oldp+70,(vlSelf->spi_full_flow_motion_home_tb__DOT__resp_bytes[24]),8);
    bufp->fullCData(oldp+71,(vlSelf->spi_full_flow_motion_home_tb__DOT__resp_bytes[25]),8);
    bufp->fullCData(oldp+72,(vlSelf->spi_full_flow_motion_home_tb__DOT__resp_bytes[26]),8);
    bufp->fullCData(oldp+73,(vlSelf->spi_full_flow_motion_home_tb__DOT__resp_bytes[27]),8);
    bufp->fullCData(oldp+74,(vlSelf->spi_full_flow_motion_home_tb__DOT__resp_bytes[28]),8);
    bufp->fullCData(oldp+75,(vlSelf->spi_full_flow_motion_home_tb__DOT__resp_bytes[29]),8);
    bufp->fullCData(oldp+76,(vlSelf->spi_full_flow_motion_home_tb__DOT__resp_bytes[30]),8);
    bufp->fullCData(oldp+77,(vlSelf->spi_full_flow_motion_home_tb__DOT__resp_bytes[31]),8);
    bufp->fullIData(oldp+78,(vlSelf->spi_full_flow_motion_home_tb__DOT__resp_byte_count),32);
    bufp->fullIData(oldp+79,(vlSelf->spi_full_flow_motion_home_tb__DOT__step_count_x),32);
    bufp->fullBit(oldp+80,(vlSelf->spi_full_flow_motion_home_tb__DOT__prev_step_x));
    bufp->fullQData(oldp+81,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_cons__DOT__move_probe_frame),64);
    bufp->fullWData(oldp+83,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_cons__DOT__queue_add_frame),336);
    bufp->fullIData(oldp+94,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_cons__DOT__move_end_frame),32);
    bufp->fullIData(oldp+95,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_cons__DOT__queue_status_frame),32);
    bufp->fullIData(oldp+96,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_cons__DOT__fpga_status_frame),32);
    bufp->fullQData(oldp+97,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_cons__DOT__led_ctrl_frame),56);
    bufp->fullWData(oldp+99,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_cons__DOT__ctx),727);
    bufp->fullCData(oldp+122,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_cons__DOT__unnamedblk1__DOT__data),8);
    bufp->fullCData(oldp+123,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_miso__DOT__gap),2);
    bufp->fullCData(oldp+124,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_miso__DOT__unnamedblk1__DOT__b),8);
    bufp->fullBit(oldp+125,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__prox_active));
    bufp->fullBit(oldp+126,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__estop_inhibit));
    bufp->fullBit(oldp+127,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_tick__DOT__tick_pulse_q));
    bufp->fullBit(oldp+128,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_tick__DOT__pid_pulse_q));
    bufp->fullBit(oldp+129,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__sync_start));
    bufp->fullBit(oldp+130,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__sync_req));
    bufp->fullBit(oldp+131,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__move_enabled));
    bufp->fullBit(oldp+132,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__start_x));
    bufp->fullBit(oldp+133,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__start_y));
    bufp->fullBit(oldp+134,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__start_z));
    bufp->fullBit(oldp+135,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__move_end_pulse));
    bufp->fullCData(oldp+136,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__dir_mask),3);
    bufp->fullIData(oldp+137,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__step_x),32);
    bufp->fullIData(oldp+138,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__step_y),32);
    bufp->fullIData(oldp+139,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__step_z),32);
    bufp->fullIData(oldp+140,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__ff_rate_x),32);
    bufp->fullIData(oldp+141,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__ff_rate_y),32);
    bufp->fullIData(oldp+142,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__ff_rate_z),32);
    bufp->fullSData(oldp+143,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__kp_x),16);
    bufp->fullSData(oldp+144,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__ki_x),16);
    bufp->fullSData(oldp+145,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__kd_x),16);
    bufp->fullSData(oldp+146,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__kp_y),16);
    bufp->fullSData(oldp+147,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__ki_y),16);
    bufp->fullSData(oldp+148,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__kd_y),16);
    bufp->fullSData(oldp+149,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__kp_z),16);
    bufp->fullSData(oldp+150,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__ki_z),16);
    bufp->fullSData(oldp+151,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__kd_z),16);
    bufp->fullBit(oldp+152,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__cont_x));
    bufp->fullBit(oldp+153,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__cont_y));
    bufp->fullBit(oldp+154,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__cont_z));
    bufp->fullCData(oldp+155,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__current_move_id),8);
    bufp->fullBit(oldp+156,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__home_pending));
    bufp->fullCData(oldp+157,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__home_frame_id),8);
    bufp->fullCData(oldp+158,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__home_axis_mask),3);
    bufp->fullBit(oldp+159,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__busy_s));
    bufp->fullBit(oldp+160,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__busy_s));
    bufp->fullBit(oldp+161,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__busy_s));
    bufp->fullCData(oldp+162,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__start_pending),3);
    bufp->fullBit(oldp+163,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__pending));
    bufp->fullWData(oldp+164,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__pend_bits),160);
    bufp->fullIData(oldp+169,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__pend_len),32);
    bufp->fullBit(oldp+170,((1U & (IData)(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__dir_mask))));
    bufp->fullBit(oldp+171,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__done_s));
    bufp->fullIData(oldp+172,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_x__DOT__steps_rem_q),32);
    bufp->fullBit(oldp+173,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__step_on_tk_q));
    bufp->fullIData(oldp+174,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__acc_q),32);
    bufp->fullIData(oldp+175,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__pulse_tick_cnt_q),32);
    bufp->fullIData(oldp+176,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__dir_setup_tk_cnt_q),32);
    bufp->fullBit(oldp+177,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__dir_cmd_s));
    bufp->fullBit(oldp+178,((1U & ((IData)(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__dir_mask) 
                                   >> 1U))));
    bufp->fullBit(oldp+179,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__done_s));
    bufp->fullIData(oldp+180,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_y__DOT__steps_rem_q),32);
    bufp->fullBit(oldp+181,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__step_on_tk_q));
    bufp->fullIData(oldp+182,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__acc_q),32);
    bufp->fullIData(oldp+183,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__pulse_tick_cnt_q),32);
    bufp->fullIData(oldp+184,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__dir_setup_tk_cnt_q),32);
    bufp->fullBit(oldp+185,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__dir_cmd_s));
    bufp->fullBit(oldp+186,((1U & ((IData)(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__dir_mask) 
                                   >> 2U))));
    bufp->fullBit(oldp+187,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__done_s));
    bufp->fullIData(oldp+188,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_z__DOT__steps_rem_q),32);
    bufp->fullBit(oldp+189,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__step_on_tk_q));
    bufp->fullIData(oldp+190,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__acc_q),32);
    bufp->fullIData(oldp+191,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__pulse_tick_cnt_q),32);
    bufp->fullIData(oldp+192,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__dir_setup_tk_cnt_q),32);
    bufp->fullBit(oldp+193,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__dir_cmd_s));
    bufp->fullBit(oldp+194,(((~ (IData)(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_estop__DOT__estop_q)) 
                             & (IData)(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__estop_inhibit))));
    bufp->fullBit(oldp+195,(((~ (IData)(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__estop_inhibit)) 
                             & (IData)(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_estop__DOT__estop_q))));
    bufp->fullBit(oldp+196,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_estop__DOT__in_meta));
    bufp->fullBit(oldp+197,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_estop__DOT__in_sync));
    bufp->fullBit(oldp+198,((1U & (~ (IData)(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_estop__DOT__in_sync)))));
    bufp->fullBit(oldp+199,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_estop__DOT__debounced_active));
    bufp->fullBit(oldp+200,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_estop__DOT__latched_q));
    bufp->fullIData(oldp+201,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_estop__DOT__clear_cnt_q),32);
    bufp->fullBit(oldp+202,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_estop__DOT__estop_q));
    bufp->fullBit(oldp+203,(((~ (IData)(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_prox__DOT__debounced_q)) 
                             & (IData)(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_prox__DOT__debounced_active))));
    bufp->fullBit(oldp+204,(((~ (IData)(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_prox__DOT__debounced_active)) 
                             & (IData)(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_prox__DOT__debounced_q))));
    bufp->fullBit(oldp+205,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_prox__DOT__in_meta));
    bufp->fullBit(oldp+206,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_prox__DOT__in_sync));
    bufp->fullBit(oldp+207,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_prox__DOT__debounced_active));
    bufp->fullBit(oldp+208,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_prox__DOT__debounced_q));
    bufp->fullIData(oldp+209,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_tick__DOT__tick_cnt_q),32);
    bufp->fullIData(oldp+210,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_tick__DOT__pid_cnt_q),32);
    bufp->fullBit(oldp+211,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__u_tick__DOT__sync_req_q));
    bufp->fullQData(oldp+212,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__unnamedblk1__DOT__r),64);
    bufp->fullIData(oldp+214,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__unnamedblk2__DOT__r),32);
    bufp->fullQData(oldp+215,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__unnamedblk3__DOT__r),48);
    bufp->fullQData(oldp+217,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__unnamedblk4__DOT__r),64);
    bufp->fullWData(oldp+219,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__unnamedblk5__DOT__r),96);
    bufp->fullIData(oldp+222,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__unnamedblk6__DOT__r),32);
    bufp->fullCData(oldp+223,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_rxbridge__DOT__state),2);
    bufp->fullCData(oldp+224,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_tx__DOT__state),2);
    bufp->fullWData(oldp+225,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_tx__DOT__shift),160);
    bufp->fullIData(oldp+230,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_tx__DOT__len_bytes),32);
    bufp->fullIData(oldp+231,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_tx__DOT__idx),32);
    bufp->fullIData(oldp+232,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_tx__DOT__rr_ptr),32);
    bufp->fullBit(oldp+233,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_tx__DOT__valid_arr[0]));
    bufp->fullWData(oldp+234,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_tx__DOT__bits_arr[0]),160);
    bufp->fullCData(oldp+239,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_tx__DOT__len_arr[0]),5);
    bufp->fullBit(oldp+240,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_tx__DOT__ready_arr[0]));
    bufp->fullBit(oldp+241,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_tx__DOT__pick));
    bufp->fullIData(oldp+242,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_tx__DOT__pick_idx),32);
    bufp->fullIData(oldp+243,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_tx__DOT__k),32);
    bufp->fullIData(oldp+244,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_tx__DOT__cand),32);
    bufp->fullCData(oldp+245,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_tx__DOT__unnamedblk1__DOT__b),8);
    bufp->fullBit(oldp+246,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_tx__DOT__ready_arr
                            [0U]));
    bufp->fullBit(oldp+247,(vlSelf->spi_full_flow_motion_home_tb__DOT__clk));
    bufp->fullIData(oldp+248,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__pid_rate_x),32);
    bufp->fullIData(oldp+249,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__pid_rate_y),32);
    bufp->fullIData(oldp+250,(vlSelf->spi_full_flow_motion_home_tb__DOT__u_motion__DOT__pid_rate_z),32);
}
