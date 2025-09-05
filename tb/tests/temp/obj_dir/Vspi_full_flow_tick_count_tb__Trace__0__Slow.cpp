// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vspi_full_flow_tick_count_tb__Syms.h"


VL_ATTR_COLD void Vspi_full_flow_tick_count_tb___024root__trace_init_sub__TOP__protocol_constants_pkg__0(Vspi_full_flow_tick_count_tb___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vspi_full_flow_tick_count_tb___024root__trace_init_sub__TOP__led_control_request_pkg__0(Vspi_full_flow_tick_count_tb___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vspi_full_flow_tick_count_tb___024root__trace_init_sub__TOP__move_home_request_pkg__0(Vspi_full_flow_tick_count_tb___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vspi_full_flow_tick_count_tb___024root__trace_init_sub__TOP__move_probe_level_request_pkg__0(Vspi_full_flow_tick_count_tb___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vspi_full_flow_tick_count_tb___024root__trace_init_sub__TOP__move_queue_add_request_pkg__0(Vspi_full_flow_tick_count_tb___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vspi_full_flow_tick_count_tb___024root__trace_init_sub__TOP__led_control_response_pkg__0(Vspi_full_flow_tick_count_tb___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vspi_full_flow_tick_count_tb___024root__trace_init_sub__TOP__move_home_response_pkg__0(Vspi_full_flow_tick_count_tb___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vspi_full_flow_tick_count_tb___024root__trace_init_sub__TOP__move_probe_level_response_pkg__0(Vspi_full_flow_tick_count_tb___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vspi_full_flow_tick_count_tb___024root__trace_init_sub__TOP__move_queue_add_response_pkg__0(Vspi_full_flow_tick_count_tb___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vspi_full_flow_tick_count_tb___024root__trace_init_sub__TOP__move_queue_add_req_parser_pkg__0(Vspi_full_flow_tick_count_tb___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vspi_full_flow_tick_count_tb___024root__trace_init_sub__TOP__spi_service_pkg__0(Vspi_full_flow_tick_count_tb___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vspi_full_flow_tick_count_tb___024root__trace_init_sub__TOP__spi_full_flow_tick_count_tb__DOT__rx_fifo__0(Vspi_full_flow_tick_count_tb___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vspi_full_flow_tick_count_tb___024root__trace_init_sub__TOP__spi_full_flow_tick_count_tb__DOT__tx_fifo__0(Vspi_full_flow_tick_count_tb___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vspi_full_flow_tick_count_tb___024root__trace_init_sub__TOP__spi_full_flow_tick_count_tb__DOT__motion_stream__0(Vspi_full_flow_tick_count_tb___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vspi_full_flow_tick_count_tb___024root__trace_init_sub__TOP__spi_full_flow_tick_count_tb__DOT__streams__BRA__0__KET____0(Vspi_full_flow_tick_count_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vspi_full_flow_tick_count_tb___024root__trace_init_sub__TOP__0(Vspi_full_flow_tick_count_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_full_flow_tick_count_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_full_flow_tick_count_tb___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("protocol_constants_pkg", VerilatedTracePrefixType::SCOPE_MODULE);
    Vspi_full_flow_tick_count_tb___024root__trace_init_sub__TOP__protocol_constants_pkg__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("led_control_request_pkg", VerilatedTracePrefixType::SCOPE_MODULE);
    Vspi_full_flow_tick_count_tb___024root__trace_init_sub__TOP__led_control_request_pkg__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("move_home_request_pkg", VerilatedTracePrefixType::SCOPE_MODULE);
    Vspi_full_flow_tick_count_tb___024root__trace_init_sub__TOP__move_home_request_pkg__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("move_probe_level_request_pkg", VerilatedTracePrefixType::SCOPE_MODULE);
    Vspi_full_flow_tick_count_tb___024root__trace_init_sub__TOP__move_probe_level_request_pkg__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("move_queue_add_request_pkg", VerilatedTracePrefixType::SCOPE_MODULE);
    Vspi_full_flow_tick_count_tb___024root__trace_init_sub__TOP__move_queue_add_request_pkg__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("led_control_response_pkg", VerilatedTracePrefixType::SCOPE_MODULE);
    Vspi_full_flow_tick_count_tb___024root__trace_init_sub__TOP__led_control_response_pkg__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("move_home_response_pkg", VerilatedTracePrefixType::SCOPE_MODULE);
    Vspi_full_flow_tick_count_tb___024root__trace_init_sub__TOP__move_home_response_pkg__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("move_probe_level_response_pkg", VerilatedTracePrefixType::SCOPE_MODULE);
    Vspi_full_flow_tick_count_tb___024root__trace_init_sub__TOP__move_probe_level_response_pkg__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("move_queue_add_response_pkg", VerilatedTracePrefixType::SCOPE_MODULE);
    Vspi_full_flow_tick_count_tb___024root__trace_init_sub__TOP__move_queue_add_response_pkg__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("move_queue_add_req_parser_pkg", VerilatedTracePrefixType::SCOPE_MODULE);
    Vspi_full_flow_tick_count_tb___024root__trace_init_sub__TOP__move_queue_add_req_parser_pkg__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("spi_service_pkg", VerilatedTracePrefixType::SCOPE_MODULE);
    Vspi_full_flow_tick_count_tb___024root__trace_init_sub__TOP__spi_service_pkg__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("spi_full_flow_tick_count_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+218,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("rx_fifo", VerilatedTracePrefixType::SCOPE_INTERFACE);
    Vspi_full_flow_tick_count_tb___024root__trace_init_sub__TOP__spi_full_flow_tick_count_tb__DOT__rx_fifo__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBit(c+22,0,"rd_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+222,0,"raddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+23,0,"rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+24,0,"irq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"spi_byte_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+26,0,"spi_byte",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+27,0,"overflow_error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"slave_busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"frame_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"frame_error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+30,0,"out_msgType",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+31,0,"start_move_frame",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+32,0,"queue_add_frame",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 335,0);
    tracep->declBus(c+43,0,"queue_status_frame",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"enc_pos",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"enc_vel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+4,0,"prox_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"estop_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"tmc_step_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"tmc_dir_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"tmc_enn_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"tmc_step_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"tmc_dir_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"tmc_enn_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"tmc_step_z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"tmc_dir_z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"tmc_enn_z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("tx_fifo", VerilatedTracePrefixType::SCOPE_INTERFACE);
    Vspi_full_flow_tick_count_tb___024root__trace_init_sub__TOP__spi_full_flow_tick_count_tb__DOT__tx_fifo__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBit(c+53,0,"tx_busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("motion_stream", VerilatedTracePrefixType::SCOPE_INTERFACE);
    Vspi_full_flow_tick_count_tb___024root__trace_init_sub__TOP__spi_full_flow_tick_count_tb__DOT__motion_stream__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("streams[0]", VerilatedTracePrefixType::SCOPE_INTERFACE);
    Vspi_full_flow_tick_count_tb___024root__trace_init_sub__TOP__spi_full_flow_tick_count_tb__DOT__streams__BRA__0__KET____0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBit(c+54,0,"wr_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+55,0,"waddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+56,0,"wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+57,0,"step_count_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+58,0,"prev_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+59,0,"tick_count_while_busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+60,0,"prev_busy_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_cap", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+218,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"spi_byte_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+26,0,"spi_byte",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("fifo", VerilatedTracePrefixType::SCOPE_INTERFACE);
    Vspi_full_flow_tick_count_tb___024root__trace_init_sub__TOP__spi_full_flow_tick_count_tb__DOT__rx_fifo__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBit(c+27,0,"overflow_error",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"slave_busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_cons", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+218,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("fifo", VerilatedTracePrefixType::SCOPE_INTERFACE);
    Vspi_full_flow_tick_count_tb___024root__trace_init_sub__TOP__spi_full_flow_tick_count_tb__DOT__rx_fifo__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBit(c+28,0,"frame_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"frame_error",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+30,0,"out_msgType",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declArray(c+61,0,"move_home_frame",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 71,0);
    tracep->declBus(c+31,0,"start_move_frame",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+64,0,"move_probe_frame",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declArray(c+32,0,"queue_add_frame",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 335,0);
    tracep->declBus(c+66,0,"move_end_frame",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+43,0,"queue_status_frame",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+67,0,"fpga_status_frame",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+68,0,"led_ctrl_frame",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 55,0);
    tracep->declArray(c+70,0,"ctx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 726,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+93,0,"data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_miso", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+222,0,"TX_DATA_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+223,0,"WAIT_CYCLES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+218,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("tx_fifo", VerilatedTracePrefixType::SCOPE_INTERFACE);
    Vspi_full_flow_tick_count_tb___024root__trace_init_sub__TOP__spi_full_flow_tick_count_tb__DOT__tx_fifo__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBit(c+54,0,"wr_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+55,0,"waddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+56,0,"wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+94,0,"gap",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+95,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_motion", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+218,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"frame_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+30,0,"msgType",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+31,0,"start_move_frame",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+32,0,"queue_add_frame",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 335,0);
    tracep->declBus(c+224,0,"move_end_frame",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+225,0,"move_home_frame",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 71,0);
    tracep->declQuad(c+228,0,"probe_frame",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+43,0,"queue_status_frame",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"enc_position",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"enc_velocity",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+4,0,"i_prox_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"i_estop_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"tmc_step_x",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"tmc_dir_x",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"tmc_enn_x",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"tmc_step_y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"tmc_dir_y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"tmc_enn_y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"tmc_step_z",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"tmc_dir_z",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"tmc_enn_z",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("tx_stream", VerilatedTracePrefixType::SCOPE_INTERFACE);
    Vspi_full_flow_tick_count_tb___024root__trace_init_sub__TOP__spi_full_flow_tick_count_tb__DOT__motion_stream__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBit(c+96,0,"prox_active",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+97,0,"estop_inhibit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+230,0,"TICK_DIV",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+231,0,"PID_DIV",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+98,0,"tick",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+99,0,"pid_tick",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+100,0,"sync_start",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+101,0,"sync_req",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"tick_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"start_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+104,0,"start_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+105,0,"start_z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+106,0,"stop_all",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+107,0,"dir_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+108,0,"step_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+109,0,"step_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+110,0,"step_z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+111,0,"ff_rate_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+112,0,"ff_rate_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+113,0,"ff_rate_z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+219,0,"pid_rate_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+220,0,"pid_rate_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+221,0,"pid_rate_z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+114,0,"kp_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+115,0,"ki_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+116,0,"kd_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+117,0,"kp_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+118,0,"ki_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+119,0,"kd_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+120,0,"kp_z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+121,0,"ki_z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+122,0,"kd_z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+232,0,"pid_err_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+232,0,"pid_err_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+232,0,"pid_err_z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+123,0,"cont_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+124,0,"cont_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"cont_z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+126,0,"current_move_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+127,0,"home_pending",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+128,0,"home_frame_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+129,0,"home_axis_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+106,0,"move_end_pulse",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+130,0,"busy_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"busy_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+132,0,"busy_z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+233,0,"SAFETY_ENABLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+102,0,"move_enabled",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"drv_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+133,0,"start_pending",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+234,0,"SHIFT_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+134,0,"pending",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+135,0,"pend_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 159,0);
    tracep->declBus(c+140,0,"pend_len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("u_drv_x", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+235,0,"STEP_ACTIVE_HIGH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+235,0,"DIR_ACTIVE_HIGH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+235,0,"ENN_ACTIVE_LOW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+236,0,"DIR_SETUP_CYCLES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+237,0,"SYNC_MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+238,0,"DDA_FRACT_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+236,0,"DIR_SETUP_TICKS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+218,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"i_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+141,0,"i_dir",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"i_start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+106,0,"i_stop",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+123,0,"i_continuous",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+108,0,"i_steps",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+224,0,"i_period_cycles",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+224,0,"i_pulse_cycles",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+98,0,"i_tick",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+219,0,"i_rate_inc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+239,0,"i_pulse_ticks",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+44,0,"o_step",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"o_dir",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"o_enn",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+130,0,"o_busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+142,0,"o_done_pulse",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+240,0,"period_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+241,0,"pulse_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+143,0,"steps_rem_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+242,0,"dir_cmd_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+243,0,"dir_out_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+244,0,"period_cnt_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+245,0,"pulse_cnt_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+246,0,"step_on_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+247,0,"dir_setup_cnt_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+248,0,"busy_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+249,0,"done_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+144,0,"step_on_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"dir_out_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+130,0,"busy_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+142,0,"done_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("g_sync", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+250,0,"ONE_Q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+145,0,"acc_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+146,0,"pulse_tick_cnt_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+144,0,"step_on_tk_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+147,0,"dir_setup_tk_cnt_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+130,0,"busy_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+142,0,"done_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"dir_out_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+148,0,"dir_cmd_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_drv_y", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+235,0,"STEP_ACTIVE_HIGH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+235,0,"DIR_ACTIVE_HIGH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+235,0,"ENN_ACTIVE_LOW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+236,0,"DIR_SETUP_CYCLES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+237,0,"SYNC_MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+238,0,"DDA_FRACT_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+236,0,"DIR_SETUP_TICKS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+218,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"i_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+149,0,"i_dir",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+104,0,"i_start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+106,0,"i_stop",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+124,0,"i_continuous",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+109,0,"i_steps",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+224,0,"i_period_cycles",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+224,0,"i_pulse_cycles",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+98,0,"i_tick",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+220,0,"i_rate_inc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+239,0,"i_pulse_ticks",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+47,0,"o_step",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"o_dir",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"o_enn",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"o_busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+150,0,"o_done_pulse",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+251,0,"period_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+252,0,"pulse_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+151,0,"steps_rem_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+253,0,"dir_cmd_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+254,0,"dir_out_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+255,0,"period_cnt_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+256,0,"pulse_cnt_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+257,0,"step_on_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+258,0,"dir_setup_cnt_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+259,0,"busy_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+260,0,"done_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"step_on_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"dir_out_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"busy_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+150,0,"done_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("g_sync", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+250,0,"ONE_Q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+153,0,"acc_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+154,0,"pulse_tick_cnt_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+152,0,"step_on_tk_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+155,0,"dir_setup_tk_cnt_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+131,0,"busy_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+150,0,"done_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"dir_out_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+156,0,"dir_cmd_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_drv_z", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+235,0,"STEP_ACTIVE_HIGH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+235,0,"DIR_ACTIVE_HIGH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+235,0,"ENN_ACTIVE_LOW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+236,0,"DIR_SETUP_CYCLES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+237,0,"SYNC_MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+238,0,"DDA_FRACT_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+236,0,"DIR_SETUP_TICKS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+218,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"i_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+157,0,"i_dir",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+105,0,"i_start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+106,0,"i_stop",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"i_continuous",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+110,0,"i_steps",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+224,0,"i_period_cycles",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+224,0,"i_pulse_cycles",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+98,0,"i_tick",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+221,0,"i_rate_inc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+239,0,"i_pulse_ticks",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+50,0,"o_step",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"o_dir",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"o_enn",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+132,0,"o_busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+158,0,"o_done_pulse",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+261,0,"period_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+262,0,"pulse_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+159,0,"steps_rem_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+263,0,"dir_cmd_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+264,0,"dir_out_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+265,0,"period_cnt_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+266,0,"pulse_cnt_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+267,0,"step_on_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+268,0,"dir_setup_cnt_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+269,0,"busy_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+270,0,"done_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+160,0,"step_on_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"dir_out_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+132,0,"busy_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+158,0,"done_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("g_sync", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+250,0,"ONE_Q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+161,0,"acc_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+162,0,"pulse_tick_cnt_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+160,0,"step_on_tk_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+163,0,"dir_setup_tk_cnt_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+132,0,"busy_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+158,0,"done_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"dir_out_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+164,0,"dir_cmd_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_estop", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+235,0,"IS_NORMALLY_CLOSED",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+236,0,"DEBOUNCE_CYCLES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+235,0,"LATCH_UNTIL_CLEAR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+236,0,"CLEAR_HOLDOFF_CYCLES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+218,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"i_estop_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+271,0,"i_clear",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+97,0,"o_estop_active",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+165,0,"o_estop_engage_pulse",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+166,0,"o_estop_release_pulse",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+97,0,"o_inhibit",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+167,0,"in_meta",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+168,0,"in_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+169,0,"raw_active",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+170,0,"debounced_active",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+171,0,"latched_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+172,0,"clear_cnt_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+173,0,"estop_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+97,0,"estop_final",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_pid", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+218,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+99,0,"pid_tick",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+108,0,"target_x",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+109,0,"target_y",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+110,0,"target_z",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+111,0,"ff_rate_x",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+112,0,"ff_rate_y",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+113,0,"ff_rate_z",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+114,0,"kp_x",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+115,0,"ki_x",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+116,0,"kd_x",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+117,0,"kp_y",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+118,0,"ki_y",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+119,0,"kd_y",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+120,0,"kp_z",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+121,0,"ki_z",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+122,0,"kd_z",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2,0,"enc_pos_x",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"enc_pos_y",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"enc_pos_z",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+219,0,"rate_x",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+220,0,"rate_y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+221,0,"rate_z",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+232,0,"pid_err_x",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+232,0,"pid_err_y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+232,0,"pid_err_z",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+272,0,"KP_SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_prox", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+235,0,"IS_PNP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+235,0,"IS_NORMALLY_OPEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+236,0,"DEBOUNCE_CYCLES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+218,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"i_sensor_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+96,0,"o_active",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+174,0,"o_active_pulse",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+175,0,"o_inactive_pulse",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+176,0,"in_meta",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+177,0,"in_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+177,0,"raw_active",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+178,0,"debounced_active",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+177,0,"debounced_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+179,0,"debounced_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_tick", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+273,0,"DIV_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+218,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"i_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+230,0,"i_tick_div",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+231,0,"i_pid_div",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+101,0,"i_sync_start_req",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+98,0,"o_tick",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+99,0,"o_pid_tick",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+100,0,"o_sync_start",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+180,0,"tick_cnt_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+98,0,"tick_pulse_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+181,0,"pid_cnt_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+99,0,"pid_pulse_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+182,0,"sync_req_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+183,0,"r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+185,0,"r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+186,0,"r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+188,0,"r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declArray(c+190,0,"r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 95,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+193,0,"r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_rxbridge", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+222,0,"RX_DATA_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+235,0,"BACK_TO_BACK_READS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+218,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"rd_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+222,0,"raddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+23,0,"rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+24,0,"irq",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"spi_byte_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+26,0,"spi_byte",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+194,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_tx", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+274,0,"NUM_STREAMS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+218,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("streams[0]", VerilatedTracePrefixType::SCOPE_INTERFACE);
    Vspi_full_flow_tick_count_tb___024root__trace_init_sub__TOP__spi_full_flow_tick_count_tb__DOT__streams__BRA__0__KET____0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("tx_fifo", VerilatedTracePrefixType::SCOPE_INTERFACE);
    Vspi_full_flow_tick_count_tb___024root__trace_init_sub__TOP__spi_full_flow_tick_count_tb__DOT__tx_fifo__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBit(c+53,0,"tx_busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+234,0,"SHIFT_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+275,0,"LENW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+195,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declArray(c+196,0,"shift",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 159,0);
    tracep->declBus(c+201,0,"len_bytes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+202,0,"idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+203,0,"rr_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("valid_arr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declBit(c+204+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("bits_arr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declArray(c+205+i*5,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 159,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("len_arr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+210+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 4,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("ready_arr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declBit(c+211+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->declBit(c+212,0,"pick",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+213,0,"pick_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+237,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+214,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+215,0,"cand",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+216,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+6,0,"N",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+7,0,"cycles",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+8,0,"expected_ticks",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+9,0,"steps_after",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+10,0,"ticks_after",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vspi_full_flow_tick_count_tb___024root__trace_init_sub__TOP__led_control_response_pkg__0(Vspi_full_flow_tick_count_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_full_flow_tick_count_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_full_flow_tick_count_tb___024root__trace_init_sub__TOP__led_control_response_pkg__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+276,0,"FRAME_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
}

VL_ATTR_COLD void Vspi_full_flow_tick_count_tb___024root__trace_init_sub__TOP__move_home_response_pkg__0(Vspi_full_flow_tick_count_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_full_flow_tick_count_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_full_flow_tick_count_tb___024root__trace_init_sub__TOP__move_home_response_pkg__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+277,0,"FRAME_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
}

VL_ATTR_COLD void Vspi_full_flow_tick_count_tb___024root__trace_init_sub__TOP__move_queue_add_response_pkg__0(Vspi_full_flow_tick_count_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_full_flow_tick_count_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_full_flow_tick_count_tb___024root__trace_init_sub__TOP__move_queue_add_response_pkg__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+278,0,"FRAME_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
}

VL_ATTR_COLD void Vspi_full_flow_tick_count_tb___024root__trace_init_sub__TOP__spi_full_flow_tick_count_tb__DOT__motion_stream__0(Vspi_full_flow_tick_count_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_full_flow_tick_count_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_full_flow_tick_count_tb___024root__trace_init_sub__TOP__spi_full_flow_tick_count_tb__DOT__motion_stream__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+234,0,"SHIFT_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+134,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+217,0,"ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+135,0,"bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 159,0);
    tracep->declBus(c+140,0,"len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
}

VL_ATTR_COLD void Vspi_full_flow_tick_count_tb___024root__trace_init_sub__TOP__spi_full_flow_tick_count_tb__DOT__streams__BRA__0__KET____0(Vspi_full_flow_tick_count_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_full_flow_tick_count_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_full_flow_tick_count_tb___024root__trace_init_sub__TOP__spi_full_flow_tick_count_tb__DOT__streams__BRA__0__KET____0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+234,0,"SHIFT_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+134,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+217,0,"ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+135,0,"bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 159,0);
    tracep->declBus(c+140,0,"len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
}

VL_ATTR_COLD void Vspi_full_flow_tick_count_tb___024root__trace_init_sub__TOP__spi_full_flow_tick_count_tb__DOT__rx_fifo__0(Vspi_full_flow_tick_count_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_full_flow_tick_count_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_full_flow_tick_count_tb___024root__trace_init_sub__TOP__spi_full_flow_tick_count_tb__DOT__rx_fifo__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+279,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+233,0,"DROP_OLD_ON_FULL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+12,0,"wr_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+13,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+14,0,"count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+15,0,"full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
}

VL_ATTR_COLD void Vspi_full_flow_tick_count_tb___024root__trace_init_sub__TOP__spi_full_flow_tick_count_tb__DOT__tx_fifo__0(Vspi_full_flow_tick_count_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_full_flow_tick_count_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_full_flow_tick_count_tb___024root__trace_init_sub__TOP__spi_full_flow_tick_count_tb__DOT__tx_fifo__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+280,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+235,0,"DROP_OLD_ON_FULL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+17,0,"wr_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+18,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+19,0,"count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+20,0,"full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
}

VL_ATTR_COLD void Vspi_full_flow_tick_count_tb___024root__trace_init_sub__TOP__move_queue_add_req_parser_pkg__0(Vspi_full_flow_tick_count_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_full_flow_tick_count_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_full_flow_tick_count_tb___024root__trace_init_sub__TOP__move_queue_add_req_parser_pkg__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+281,0,"FRAME_BYTES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
}

VL_ATTR_COLD void Vspi_full_flow_tick_count_tb___024root__trace_init_sub__TOP__spi_service_pkg__0(Vspi_full_flow_tick_count_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_full_flow_tick_count_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_full_flow_tick_count_tb___024root__trace_init_sub__TOP__spi_service_pkg__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+281,0,"REQ_MAX_BYTES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+282,0,"RESP_MAX_BYTES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+279,0,"RX_FIFO_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+283,0,"RX_BLOCK_LEVEL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+280,0,"TX_FIFO_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
}

VL_ATTR_COLD void Vspi_full_flow_tick_count_tb___024root__trace_init_sub__TOP__led_control_request_pkg__0(Vspi_full_flow_tick_count_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_full_flow_tick_count_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_full_flow_tick_count_tb___024root__trace_init_sub__TOP__led_control_request_pkg__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+276,0,"FRAME_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
}

VL_ATTR_COLD void Vspi_full_flow_tick_count_tb___024root__trace_init_sub__TOP__move_home_request_pkg__0(Vspi_full_flow_tick_count_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_full_flow_tick_count_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_full_flow_tick_count_tb___024root__trace_init_sub__TOP__move_home_request_pkg__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+284,0,"FRAME_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
}

VL_ATTR_COLD void Vspi_full_flow_tick_count_tb___024root__trace_init_sub__TOP__move_probe_level_request_pkg__0(Vspi_full_flow_tick_count_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_full_flow_tick_count_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_full_flow_tick_count_tb___024root__trace_init_sub__TOP__move_probe_level_request_pkg__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+277,0,"FRAME_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
}

VL_ATTR_COLD void Vspi_full_flow_tick_count_tb___024root__trace_init_sub__TOP__move_queue_add_request_pkg__0(Vspi_full_flow_tick_count_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_full_flow_tick_count_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_full_flow_tick_count_tb___024root__trace_init_sub__TOP__move_queue_add_request_pkg__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+285,0,"FRAME_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
}

VL_ATTR_COLD void Vspi_full_flow_tick_count_tb___024root__trace_init_sub__TOP__move_probe_level_response_pkg__0(Vspi_full_flow_tick_count_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_full_flow_tick_count_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_full_flow_tick_count_tb___024root__trace_init_sub__TOP__move_probe_level_response_pkg__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+234,0,"FRAME_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
}

VL_ATTR_COLD void Vspi_full_flow_tick_count_tb___024root__trace_init_sub__TOP__protocol_constants_pkg__0(Vspi_full_flow_tick_count_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_full_flow_tick_count_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_full_flow_tick_count_tb___024root__trace_init_sub__TOP__protocol_constants_pkg__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+286,0,"REQ_HEADER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+287,0,"REQ_TAIL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+288,0,"REQ_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+289,0,"RESP_HEADER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+290,0,"RESP_TAIL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+291,0,"MOVE_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+292,0,"MOVE_QUEUE_STATUS_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+293,0,"START_MOVE_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+294,0,"MOVE_HOME_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+295,0,"MOVE_PROBE_LEVEL_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+296,0,"MOVE_END_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+297,0,"LED_CTRL_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+288,0,"FPGA_STATUS_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
}

VL_ATTR_COLD void Vspi_full_flow_tick_count_tb___024root__trace_init_top(Vspi_full_flow_tick_count_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_full_flow_tick_count_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_full_flow_tick_count_tb___024root__trace_init_top\n"); );
    // Body
    Vspi_full_flow_tick_count_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vspi_full_flow_tick_count_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vspi_full_flow_tick_count_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vspi_full_flow_tick_count_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vspi_full_flow_tick_count_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vspi_full_flow_tick_count_tb___024root__trace_register(Vspi_full_flow_tick_count_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_full_flow_tick_count_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_full_flow_tick_count_tb___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vspi_full_flow_tick_count_tb___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vspi_full_flow_tick_count_tb___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vspi_full_flow_tick_count_tb___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vspi_full_flow_tick_count_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vspi_full_flow_tick_count_tb___024root__trace_const_0_sub_0(Vspi_full_flow_tick_count_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vspi_full_flow_tick_count_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_full_flow_tick_count_tb___024root__trace_const_0\n"); );
    // Init
    Vspi_full_flow_tick_count_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vspi_full_flow_tick_count_tb___024root*>(voidSelf);
    Vspi_full_flow_tick_count_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vspi_full_flow_tick_count_tb___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vspi_full_flow_tick_count_tb___024root__trace_const_0_sub_0(Vspi_full_flow_tick_count_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_full_flow_tick_count_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_full_flow_tick_count_tb___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    bufp->fullCData(oldp+222,(0U),3);
    bufp->fullIData(oldp+223,(2U),32);
    bufp->fullIData(oldp+224,(0U),32);
    __Vtemp_1[0U] = 0U;
    __Vtemp_1[1U] = 0U;
    __Vtemp_1[2U] = 0U;
    bufp->fullWData(oldp+225,(__Vtemp_1),72);
    bufp->fullQData(oldp+228,(0ULL),64);
    bufp->fullIData(oldp+230,(1U),32);
    bufp->fullIData(oldp+231,(0x40U),32);
    bufp->fullCData(oldp+232,(0U),8);
    bufp->fullBit(oldp+233,(0U));
    bufp->fullIData(oldp+234,(0xa0U),32);
    bufp->fullBit(oldp+235,(1U));
    bufp->fullIData(oldp+236,(0U),32);
    bufp->fullIData(oldp+237,(1U),32);
    bufp->fullIData(oldp+238,(0x10U),32);
    bufp->fullSData(oldp+239,(4U),16);
    bufp->fullIData(oldp+240,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__period_q),32);
    bufp->fullIData(oldp+241,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__pulse_q),32);
    bufp->fullBit(oldp+242,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__dir_cmd_q));
    bufp->fullBit(oldp+243,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__dir_out_q));
    bufp->fullIData(oldp+244,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__period_cnt_q),32);
    bufp->fullIData(oldp+245,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__pulse_cnt_q),32);
    bufp->fullBit(oldp+246,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__step_on_q));
    bufp->fullIData(oldp+247,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__dir_setup_cnt_q),32);
    bufp->fullBit(oldp+248,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__busy_q));
    bufp->fullBit(oldp+249,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__done_q));
    bufp->fullIData(oldp+250,(0x10000U),32);
    bufp->fullIData(oldp+251,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__period_q),32);
    bufp->fullIData(oldp+252,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__pulse_q),32);
    bufp->fullBit(oldp+253,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__dir_cmd_q));
    bufp->fullBit(oldp+254,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__dir_out_q));
    bufp->fullIData(oldp+255,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__period_cnt_q),32);
    bufp->fullIData(oldp+256,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__pulse_cnt_q),32);
    bufp->fullBit(oldp+257,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__step_on_q));
    bufp->fullIData(oldp+258,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__dir_setup_cnt_q),32);
    bufp->fullBit(oldp+259,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__busy_q));
    bufp->fullBit(oldp+260,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__done_q));
    bufp->fullIData(oldp+261,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__period_q),32);
    bufp->fullIData(oldp+262,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__pulse_q),32);
    bufp->fullBit(oldp+263,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__dir_cmd_q));
    bufp->fullBit(oldp+264,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__dir_out_q));
    bufp->fullIData(oldp+265,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__period_cnt_q),32);
    bufp->fullIData(oldp+266,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__pulse_cnt_q),32);
    bufp->fullBit(oldp+267,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__step_on_q));
    bufp->fullIData(oldp+268,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__dir_setup_cnt_q),32);
    bufp->fullBit(oldp+269,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__busy_q));
    bufp->fullBit(oldp+270,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__done_q));
    bufp->fullBit(oldp+271,(0U));
    bufp->fullIData(oldp+272,(8U),32);
    bufp->fullIData(oldp+273,(0x20U),32);
    bufp->fullIData(oldp+274,(1U),32);
    bufp->fullIData(oldp+275,(5U),32);
    bufp->fullIData(oldp+276,(0x38U),32);
    bufp->fullIData(oldp+277,(0x40U),32);
    bufp->fullIData(oldp+278,(0x30U),32);
    bufp->fullIData(oldp+279,(0xd2U),32);
    bufp->fullIData(oldp+280,(0xc8U),32);
    bufp->fullIData(oldp+281,(0x2aU),32);
    bufp->fullIData(oldp+282,(0x14U),32);
    bufp->fullIData(oldp+283,(0xa8U),32);
    bufp->fullIData(oldp+284,(0x48U),32);
    bufp->fullIData(oldp+285,(0x150U),32);
    bufp->fullCData(oldp+286,(0xaaU),8);
    bufp->fullCData(oldp+287,(0x55U),8);
    bufp->fullCData(oldp+288,(0x20U),8);
    bufp->fullCData(oldp+289,(0xabU),8);
    bufp->fullCData(oldp+290,(0x54U),8);
    bufp->fullCData(oldp+291,(1U),8);
    bufp->fullCData(oldp+292,(2U),8);
    bufp->fullCData(oldp+293,(3U),8);
    bufp->fullCData(oldp+294,(4U),8);
    bufp->fullCData(oldp+295,(5U),8);
    bufp->fullCData(oldp+296,(6U),8);
    bufp->fullCData(oldp+297,(7U),8);
}

VL_ATTR_COLD void Vspi_full_flow_tick_count_tb___024root__trace_full_0_sub_0(Vspi_full_flow_tick_count_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vspi_full_flow_tick_count_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_full_flow_tick_count_tb___024root__trace_full_0\n"); );
    // Init
    Vspi_full_flow_tick_count_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vspi_full_flow_tick_count_tb___024root*>(voidSelf);
    Vspi_full_flow_tick_count_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vspi_full_flow_tick_count_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vspi_full_flow_tick_count_tb___024root__trace_full_0_sub_0(Vspi_full_flow_tick_count_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_full_flow_tick_count_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_full_flow_tick_count_tb___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->spi_full_flow_tick_count_tb__DOT__rst_n));
    bufp->fullIData(oldp+2,(vlSelf->spi_full_flow_tick_count_tb__DOT__enc_pos),32);
    bufp->fullIData(oldp+3,(vlSelf->spi_full_flow_tick_count_tb__DOT__enc_vel),32);
    bufp->fullBit(oldp+4,(vlSelf->spi_full_flow_tick_count_tb__DOT__prox_in));
    bufp->fullBit(oldp+5,(vlSelf->spi_full_flow_tick_count_tb__DOT__estop_in));
    bufp->fullIData(oldp+6,(vlSelf->spi_full_flow_tick_count_tb__DOT__unnamedblk3__DOT__N),32);
    bufp->fullIData(oldp+7,(vlSelf->spi_full_flow_tick_count_tb__DOT__unnamedblk3__DOT__cycles),32);
    bufp->fullIData(oldp+8,(vlSelf->spi_full_flow_tick_count_tb__DOT__unnamedblk3__DOT__expected_ticks),32);
    bufp->fullIData(oldp+9,(vlSelf->spi_full_flow_tick_count_tb__DOT__unnamedblk3__DOT__steps_after),32);
    bufp->fullIData(oldp+10,(vlSelf->spi_full_flow_tick_count_tb__DOT__unnamedblk3__DOT__ticks_after),32);
    bufp->fullBit(oldp+11,((0xa8U < vlSymsp->TOP__spi_full_flow_tick_count_tb__DOT__rx_fifo.count)));
    bufp->fullIData(oldp+12,(vlSymsp->TOP__spi_full_flow_tick_count_tb__DOT__rx_fifo.wr_ptr),32);
    bufp->fullIData(oldp+13,(vlSymsp->TOP__spi_full_flow_tick_count_tb__DOT__rx_fifo.rd_ptr),32);
    bufp->fullIData(oldp+14,(vlSymsp->TOP__spi_full_flow_tick_count_tb__DOT__rx_fifo.count),32);
    bufp->fullBit(oldp+15,((0xd2U == vlSymsp->TOP__spi_full_flow_tick_count_tb__DOT__rx_fifo.count)));
    bufp->fullBit(oldp+16,((0U == vlSymsp->TOP__spi_full_flow_tick_count_tb__DOT__rx_fifo.count)));
    bufp->fullIData(oldp+17,(vlSymsp->TOP__spi_full_flow_tick_count_tb__DOT__tx_fifo.wr_ptr),32);
    bufp->fullIData(oldp+18,(vlSymsp->TOP__spi_full_flow_tick_count_tb__DOT__tx_fifo.rd_ptr),32);
    bufp->fullIData(oldp+19,(vlSymsp->TOP__spi_full_flow_tick_count_tb__DOT__tx_fifo.count),32);
    bufp->fullBit(oldp+20,((0xc8U == vlSymsp->TOP__spi_full_flow_tick_count_tb__DOT__tx_fifo.count)));
    bufp->fullBit(oldp+21,((0U == vlSymsp->TOP__spi_full_flow_tick_count_tb__DOT__tx_fifo.count)));
    bufp->fullBit(oldp+22,(vlSelf->spi_full_flow_tick_count_tb__DOT__rd_en));
    bufp->fullCData(oldp+23,(vlSelf->spi_full_flow_tick_count_tb__DOT__rdata),8);
    bufp->fullBit(oldp+24,(vlSelf->spi_full_flow_tick_count_tb__DOT__irq));
    bufp->fullBit(oldp+25,(vlSelf->spi_full_flow_tick_count_tb__DOT__spi_byte_valid));
    bufp->fullCData(oldp+26,(vlSelf->spi_full_flow_tick_count_tb__DOT__spi_byte),8);
    bufp->fullBit(oldp+27,(vlSelf->spi_full_flow_tick_count_tb__DOT__overflow_error));
    bufp->fullBit(oldp+28,(vlSelf->spi_full_flow_tick_count_tb__DOT__frame_valid));
    bufp->fullBit(oldp+29,(vlSelf->spi_full_flow_tick_count_tb__DOT__frame_error));
    bufp->fullCData(oldp+30,(vlSelf->spi_full_flow_tick_count_tb__DOT__out_msgType),8);
    bufp->fullIData(oldp+31,(vlSelf->spi_full_flow_tick_count_tb__DOT__start_move_frame),32);
    bufp->fullWData(oldp+32,(vlSelf->spi_full_flow_tick_count_tb__DOT__queue_add_frame),336);
    bufp->fullIData(oldp+43,(vlSelf->spi_full_flow_tick_count_tb__DOT__queue_status_frame),32);
    bufp->fullBit(oldp+44,(vlSelf->spi_full_flow_tick_count_tb__DOT__tmc_step_x));
    bufp->fullBit(oldp+45,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__dir_out_s));
    bufp->fullBit(oldp+46,(vlSelf->spi_full_flow_tick_count_tb__DOT__tmc_enn_x));
    bufp->fullBit(oldp+47,(vlSelf->spi_full_flow_tick_count_tb__DOT__tmc_step_y));
    bufp->fullBit(oldp+48,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__dir_out_s));
    bufp->fullBit(oldp+49,(vlSelf->spi_full_flow_tick_count_tb__DOT__tmc_enn_y));
    bufp->fullBit(oldp+50,(vlSelf->spi_full_flow_tick_count_tb__DOT__tmc_step_z));
    bufp->fullBit(oldp+51,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__dir_out_s));
    bufp->fullBit(oldp+52,(vlSelf->spi_full_flow_tick_count_tb__DOT__tmc_enn_z));
    bufp->fullBit(oldp+53,(vlSelf->spi_full_flow_tick_count_tb__DOT__tx_busy));
    bufp->fullBit(oldp+54,(vlSelf->spi_full_flow_tick_count_tb__DOT__wr_en));
    bufp->fullCData(oldp+55,(vlSelf->spi_full_flow_tick_count_tb__DOT__waddr),3);
    bufp->fullCData(oldp+56,(vlSelf->spi_full_flow_tick_count_tb__DOT__wdata),8);
    bufp->fullIData(oldp+57,(vlSelf->spi_full_flow_tick_count_tb__DOT__step_count_x),32);
    bufp->fullBit(oldp+58,(vlSelf->spi_full_flow_tick_count_tb__DOT__prev_x));
    bufp->fullIData(oldp+59,(vlSelf->spi_full_flow_tick_count_tb__DOT__tick_count_while_busy),32);
    bufp->fullBit(oldp+60,(vlSelf->spi_full_flow_tick_count_tb__DOT__prev_busy_x));
    bufp->fullWData(oldp+61,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_cons__DOT__move_home_frame),72);
    bufp->fullQData(oldp+64,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_cons__DOT__move_probe_frame),64);
    bufp->fullIData(oldp+66,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_cons__DOT__move_end_frame),32);
    bufp->fullIData(oldp+67,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_cons__DOT__fpga_status_frame),32);
    bufp->fullQData(oldp+68,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_cons__DOT__led_ctrl_frame),56);
    bufp->fullWData(oldp+70,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_cons__DOT__ctx),727);
    bufp->fullCData(oldp+93,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_cons__DOT__unnamedblk1__DOT__data),8);
    bufp->fullCData(oldp+94,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_miso__DOT__gap),2);
    bufp->fullCData(oldp+95,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_miso__DOT__unnamedblk1__DOT__b),8);
    bufp->fullBit(oldp+96,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__prox_active));
    bufp->fullBit(oldp+97,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__estop_inhibit));
    bufp->fullBit(oldp+98,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_tick__DOT__tick_pulse_q));
    bufp->fullBit(oldp+99,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_tick__DOT__pid_pulse_q));
    bufp->fullBit(oldp+100,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__sync_start));
    bufp->fullBit(oldp+101,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__sync_req));
    bufp->fullBit(oldp+102,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__move_enabled));
    bufp->fullBit(oldp+103,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__start_x));
    bufp->fullBit(oldp+104,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__start_y));
    bufp->fullBit(oldp+105,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__start_z));
    bufp->fullBit(oldp+106,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__move_end_pulse));
    bufp->fullCData(oldp+107,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__dir_mask),3);
    bufp->fullIData(oldp+108,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__step_x),32);
    bufp->fullIData(oldp+109,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__step_y),32);
    bufp->fullIData(oldp+110,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__step_z),32);
    bufp->fullIData(oldp+111,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__ff_rate_x),32);
    bufp->fullIData(oldp+112,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__ff_rate_y),32);
    bufp->fullIData(oldp+113,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__ff_rate_z),32);
    bufp->fullSData(oldp+114,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__kp_x),16);
    bufp->fullSData(oldp+115,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__ki_x),16);
    bufp->fullSData(oldp+116,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__kd_x),16);
    bufp->fullSData(oldp+117,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__kp_y),16);
    bufp->fullSData(oldp+118,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__ki_y),16);
    bufp->fullSData(oldp+119,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__kd_y),16);
    bufp->fullSData(oldp+120,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__kp_z),16);
    bufp->fullSData(oldp+121,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__ki_z),16);
    bufp->fullSData(oldp+122,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__kd_z),16);
    bufp->fullBit(oldp+123,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__cont_x));
    bufp->fullBit(oldp+124,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__cont_y));
    bufp->fullBit(oldp+125,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__cont_z));
    bufp->fullCData(oldp+126,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__current_move_id),8);
    bufp->fullBit(oldp+127,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__home_pending));
    bufp->fullCData(oldp+128,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__home_frame_id),8);
    bufp->fullCData(oldp+129,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__home_axis_mask),3);
    bufp->fullBit(oldp+130,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__busy_s));
    bufp->fullBit(oldp+131,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__busy_s));
    bufp->fullBit(oldp+132,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__busy_s));
    bufp->fullCData(oldp+133,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__start_pending),3);
    bufp->fullBit(oldp+134,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__pending));
    bufp->fullWData(oldp+135,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__pend_bits),160);
    bufp->fullIData(oldp+140,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__pend_len),32);
    bufp->fullBit(oldp+141,((1U & (IData)(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__dir_mask))));
    bufp->fullBit(oldp+142,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__done_s));
    bufp->fullIData(oldp+143,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__steps_rem_q),32);
    bufp->fullBit(oldp+144,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__step_on_tk_q));
    bufp->fullIData(oldp+145,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__acc_q),32);
    bufp->fullIData(oldp+146,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__pulse_tick_cnt_q),32);
    bufp->fullIData(oldp+147,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__dir_setup_tk_cnt_q),32);
    bufp->fullBit(oldp+148,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_x__DOT__g_sync__DOT__dir_cmd_s));
    bufp->fullBit(oldp+149,((1U & ((IData)(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__dir_mask) 
                                   >> 1U))));
    bufp->fullBit(oldp+150,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__done_s));
    bufp->fullIData(oldp+151,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__steps_rem_q),32);
    bufp->fullBit(oldp+152,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__step_on_tk_q));
    bufp->fullIData(oldp+153,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__acc_q),32);
    bufp->fullIData(oldp+154,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__pulse_tick_cnt_q),32);
    bufp->fullIData(oldp+155,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__dir_setup_tk_cnt_q),32);
    bufp->fullBit(oldp+156,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_y__DOT__g_sync__DOT__dir_cmd_s));
    bufp->fullBit(oldp+157,((1U & ((IData)(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__dir_mask) 
                                   >> 2U))));
    bufp->fullBit(oldp+158,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__done_s));
    bufp->fullIData(oldp+159,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__steps_rem_q),32);
    bufp->fullBit(oldp+160,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__step_on_tk_q));
    bufp->fullIData(oldp+161,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__acc_q),32);
    bufp->fullIData(oldp+162,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__pulse_tick_cnt_q),32);
    bufp->fullIData(oldp+163,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__dir_setup_tk_cnt_q),32);
    bufp->fullBit(oldp+164,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_drv_z__DOT__g_sync__DOT__dir_cmd_s));
    bufp->fullBit(oldp+165,(((~ (IData)(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_estop__DOT__estop_q)) 
                             & (IData)(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__estop_inhibit))));
    bufp->fullBit(oldp+166,(((~ (IData)(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__estop_inhibit)) 
                             & (IData)(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_estop__DOT__estop_q))));
    bufp->fullBit(oldp+167,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_estop__DOT__in_meta));
    bufp->fullBit(oldp+168,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_estop__DOT__in_sync));
    bufp->fullBit(oldp+169,((1U & (~ (IData)(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_estop__DOT__in_sync)))));
    bufp->fullBit(oldp+170,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_estop__DOT__debounced_active));
    bufp->fullBit(oldp+171,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_estop__DOT__latched_q));
    bufp->fullIData(oldp+172,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_estop__DOT__clear_cnt_q),32);
    bufp->fullBit(oldp+173,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_estop__DOT__estop_q));
    bufp->fullBit(oldp+174,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_prox__DOT__o_active_pulse));
    bufp->fullBit(oldp+175,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_prox__DOT__o_inactive_pulse));
    bufp->fullBit(oldp+176,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_prox__DOT__in_meta));
    bufp->fullBit(oldp+177,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_prox__DOT__in_sync));
    bufp->fullBit(oldp+178,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_prox__DOT__debounced_active));
    bufp->fullBit(oldp+179,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_prox__DOT__debounced_q));
    bufp->fullIData(oldp+180,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_tick__DOT__tick_cnt_q),32);
    bufp->fullIData(oldp+181,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_tick__DOT__pid_cnt_q),32);
    bufp->fullBit(oldp+182,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__u_tick__DOT__sync_req_q));
    bufp->fullQData(oldp+183,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__unnamedblk1__DOT__r),64);
    bufp->fullIData(oldp+185,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__unnamedblk2__DOT__r),32);
    bufp->fullQData(oldp+186,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__unnamedblk3__DOT__r),48);
    bufp->fullQData(oldp+188,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__unnamedblk4__DOT__r),64);
    bufp->fullWData(oldp+190,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__unnamedblk5__DOT__r),96);
    bufp->fullIData(oldp+193,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__unnamedblk6__DOT__r),32);
    bufp->fullCData(oldp+194,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_rxbridge__DOT__state),2);
    bufp->fullCData(oldp+195,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_tx__DOT__state),2);
    bufp->fullWData(oldp+196,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_tx__DOT__shift),160);
    bufp->fullIData(oldp+201,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_tx__DOT__len_bytes),32);
    bufp->fullIData(oldp+202,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_tx__DOT__idx),32);
    bufp->fullIData(oldp+203,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_tx__DOT__rr_ptr),32);
    bufp->fullBit(oldp+204,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_tx__DOT__valid_arr[0]));
    bufp->fullWData(oldp+205,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_tx__DOT__bits_arr[0]),160);
    bufp->fullCData(oldp+210,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_tx__DOT__len_arr[0]),5);
    bufp->fullBit(oldp+211,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_tx__DOT__ready_arr[0]));
    bufp->fullBit(oldp+212,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_tx__DOT__pick));
    bufp->fullIData(oldp+213,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_tx__DOT__pick_idx),32);
    bufp->fullIData(oldp+214,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_tx__DOT__k),32);
    bufp->fullIData(oldp+215,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_tx__DOT__cand),32);
    bufp->fullCData(oldp+216,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_tx__DOT__unnamedblk1__DOT__b),8);
    bufp->fullBit(oldp+217,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_tx__DOT__ready_arr
                            [0U]));
    bufp->fullBit(oldp+218,(vlSelf->spi_full_flow_tick_count_tb__DOT__clk));
    bufp->fullIData(oldp+219,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__pid_rate_x),32);
    bufp->fullIData(oldp+220,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__pid_rate_y),32);
    bufp->fullIData(oldp+221,(vlSelf->spi_full_flow_tick_count_tb__DOT__u_motion__DOT__pid_rate_z),32);
}
