// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vspi_full_flow_motion_home_tb.h for the primary calling header

#include "Vspi_full_flow_motion_home_tb__pch.h"
#include "Vspi_full_flow_motion_home_tb__Syms.h"
#include "Vspi_full_flow_motion_home_tb___024root.h"

void Vspi_full_flow_motion_home_tb___024root___nba_sequent__TOP__0(Vspi_full_flow_motion_home_tb___024root* vlSelf);
void Vspi_full_flow_motion_home_tb_spi_fifo_if___nba_sequent__TOP__spi_full_flow_motion_home_tb__DOT__rx_fifo__0(Vspi_full_flow_motion_home_tb_spi_fifo_if* vlSelf);
void Vspi_full_flow_motion_home_tb_spi_fifo_if__Dc8_DB1___nba_sequent__TOP__spi_full_flow_motion_home_tb__DOT__tx_fifo__0(Vspi_full_flow_motion_home_tb_spi_fifo_if__Dc8_DB1* vlSelf);
void Vspi_full_flow_motion_home_tb___024root___nba_comb__TOP__0(Vspi_full_flow_motion_home_tb___024root* vlSelf);

void Vspi_full_flow_motion_home_tb___024root___eval_nba(Vspi_full_flow_motion_home_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_full_flow_motion_home_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_full_flow_motion_home_tb___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vspi_full_flow_motion_home_tb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        Vspi_full_flow_motion_home_tb_spi_fifo_if___nba_sequent__TOP__spi_full_flow_motion_home_tb__DOT__rx_fifo__0((&vlSymsp->TOP__spi_full_flow_motion_home_tb__DOT__rx_fifo));
        Vspi_full_flow_motion_home_tb_spi_fifo_if__Dc8_DB1___nba_sequent__TOP__spi_full_flow_motion_home_tb__DOT__tx_fifo__0((&vlSymsp->TOP__spi_full_flow_motion_home_tb__DOT__tx_fifo));
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vspi_full_flow_motion_home_tb___024root___nba_comb__TOP__0(vlSelf);
    }
}
