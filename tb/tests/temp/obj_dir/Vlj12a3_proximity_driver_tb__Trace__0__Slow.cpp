// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vlj12a3_proximity_driver_tb__Syms.h"


VL_ATTR_COLD void Vlj12a3_proximity_driver_tb___024root__trace_init_sub__TOP__0(Vlj12a3_proximity_driver_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vlj12a3_proximity_driver_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlj12a3_proximity_driver_tb___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("lj12a3_proximity_driver_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+42,0,"CHECK_PULSES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+41,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"s_pnp_no",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"act_pnp_no",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"ap_pnp_no",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"ip_pnp_no",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"s_npn_no",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"act_npn_no",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"ap_npn_no",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"ip_npn_no",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"s_npn_nc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"act_npn_nc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"ap_npn_nc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"ip_npn_nc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"s_pnp_nc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"act_pnp_nc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"ap_pnp_nc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"ip_pnp_nc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+43,0,"DB_CYC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+6,0,"s_db",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"act_db",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"ap_db",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"ip_db",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_db", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+44,0,"IS_PNP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+44,0,"IS_NORMALLY_OPEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+45,0,"DEBOUNCE_CYCLES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+41,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"i_sensor_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"o_active",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"o_active_pulse",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"o_inactive_pulse",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"in_meta",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"in_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"raw_active",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"debounced_active",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"debounced_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("g_with_debounce", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+46,0,"CNTW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+26,0,"cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+25,0,"stable_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_npn_nc", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+47,0,"IS_PNP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+47,0,"IS_NORMALLY_OPEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+48,0,"DEBOUNCE_CYCLES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+41,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"i_sensor_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"o_active",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"o_active_pulse",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"o_inactive_pulse",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"in_meta",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"in_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"raw_active",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"debounced_active",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"debounced_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_npn_no", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+47,0,"IS_PNP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+44,0,"IS_NORMALLY_OPEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+48,0,"DEBOUNCE_CYCLES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+41,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"i_sensor_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"o_active",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"o_active_pulse",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"o_inactive_pulse",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"in_meta",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"in_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"raw_active",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"debounced_active",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"debounced_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_pnp_nc", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+44,0,"IS_PNP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+47,0,"IS_NORMALLY_OPEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+48,0,"DEBOUNCE_CYCLES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+41,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"i_sensor_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"o_active",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"o_active_pulse",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"o_inactive_pulse",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"in_meta",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"in_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+36,0,"raw_active",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"debounced_active",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+36,0,"debounced_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_pnp_no", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+44,0,"IS_PNP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+44,0,"IS_NORMALLY_OPEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+48,0,"DEBOUNCE_CYCLES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+41,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"i_sensor_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"o_active",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"o_active_pulse",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"o_inactive_pulse",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"in_meta",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"in_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"raw_active",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"debounced_active",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"debounced_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vlj12a3_proximity_driver_tb___024root__trace_init_top(Vlj12a3_proximity_driver_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vlj12a3_proximity_driver_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlj12a3_proximity_driver_tb___024root__trace_init_top\n"); );
    // Body
    Vlj12a3_proximity_driver_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vlj12a3_proximity_driver_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vlj12a3_proximity_driver_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vlj12a3_proximity_driver_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vlj12a3_proximity_driver_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vlj12a3_proximity_driver_tb___024root__trace_register(Vlj12a3_proximity_driver_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vlj12a3_proximity_driver_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlj12a3_proximity_driver_tb___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vlj12a3_proximity_driver_tb___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vlj12a3_proximity_driver_tb___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vlj12a3_proximity_driver_tb___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vlj12a3_proximity_driver_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vlj12a3_proximity_driver_tb___024root__trace_const_0_sub_0(Vlj12a3_proximity_driver_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vlj12a3_proximity_driver_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlj12a3_proximity_driver_tb___024root__trace_const_0\n"); );
    // Init
    Vlj12a3_proximity_driver_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vlj12a3_proximity_driver_tb___024root*>(voidSelf);
    Vlj12a3_proximity_driver_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vlj12a3_proximity_driver_tb___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vlj12a3_proximity_driver_tb___024root__trace_const_0_sub_0(Vlj12a3_proximity_driver_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vlj12a3_proximity_driver_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlj12a3_proximity_driver_tb___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+42,(0U));
    bufp->fullIData(oldp+43,(4U),32);
    bufp->fullBit(oldp+44,(1U));
    bufp->fullIData(oldp+45,(4U),32);
    bufp->fullIData(oldp+46,(2U),32);
    bufp->fullBit(oldp+47,(0U));
    bufp->fullIData(oldp+48,(0U),32);
}

VL_ATTR_COLD void Vlj12a3_proximity_driver_tb___024root__trace_full_0_sub_0(Vlj12a3_proximity_driver_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vlj12a3_proximity_driver_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlj12a3_proximity_driver_tb___024root__trace_full_0\n"); );
    // Init
    Vlj12a3_proximity_driver_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vlj12a3_proximity_driver_tb___024root*>(voidSelf);
    Vlj12a3_proximity_driver_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vlj12a3_proximity_driver_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vlj12a3_proximity_driver_tb___024root__trace_full_0_sub_0(Vlj12a3_proximity_driver_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vlj12a3_proximity_driver_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlj12a3_proximity_driver_tb___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->lj12a3_proximity_driver_tb__DOT__rst_n));
    bufp->fullBit(oldp+2,(vlSelf->lj12a3_proximity_driver_tb__DOT__s_pnp_no));
    bufp->fullBit(oldp+3,(vlSelf->lj12a3_proximity_driver_tb__DOT__s_npn_no));
    bufp->fullBit(oldp+4,(vlSelf->lj12a3_proximity_driver_tb__DOT__s_npn_nc));
    bufp->fullBit(oldp+5,(vlSelf->lj12a3_proximity_driver_tb__DOT__s_pnp_nc));
    bufp->fullBit(oldp+6,(vlSelf->lj12a3_proximity_driver_tb__DOT__s_db));
    bufp->fullBit(oldp+7,(vlSelf->lj12a3_proximity_driver_tb__DOT__act_pnp_no));
    bufp->fullBit(oldp+8,(vlSelf->lj12a3_proximity_driver_tb__DOT__ap_pnp_no));
    bufp->fullBit(oldp+9,(vlSelf->lj12a3_proximity_driver_tb__DOT__ip_pnp_no));
    bufp->fullBit(oldp+10,(vlSelf->lj12a3_proximity_driver_tb__DOT__act_npn_no));
    bufp->fullBit(oldp+11,(vlSelf->lj12a3_proximity_driver_tb__DOT__ap_npn_no));
    bufp->fullBit(oldp+12,(vlSelf->lj12a3_proximity_driver_tb__DOT__ip_npn_no));
    bufp->fullBit(oldp+13,(vlSelf->lj12a3_proximity_driver_tb__DOT__act_npn_nc));
    bufp->fullBit(oldp+14,(vlSelf->lj12a3_proximity_driver_tb__DOT__ap_npn_nc));
    bufp->fullBit(oldp+15,(vlSelf->lj12a3_proximity_driver_tb__DOT__ip_npn_nc));
    bufp->fullBit(oldp+16,(vlSelf->lj12a3_proximity_driver_tb__DOT__act_pnp_nc));
    bufp->fullBit(oldp+17,(vlSelf->lj12a3_proximity_driver_tb__DOT__ap_pnp_nc));
    bufp->fullBit(oldp+18,(vlSelf->lj12a3_proximity_driver_tb__DOT__ip_pnp_nc));
    bufp->fullBit(oldp+19,(vlSelf->lj12a3_proximity_driver_tb__DOT__act_db));
    bufp->fullBit(oldp+20,(vlSelf->lj12a3_proximity_driver_tb__DOT__ap_db));
    bufp->fullBit(oldp+21,(vlSelf->lj12a3_proximity_driver_tb__DOT__ip_db));
    bufp->fullBit(oldp+22,(vlSelf->lj12a3_proximity_driver_tb__DOT__u_db__DOT__in_meta));
    bufp->fullBit(oldp+23,(vlSelf->lj12a3_proximity_driver_tb__DOT__u_db__DOT__in_sync));
    bufp->fullBit(oldp+24,(vlSelf->lj12a3_proximity_driver_tb__DOT__u_db__DOT__debounced_active));
    bufp->fullBit(oldp+25,(vlSelf->lj12a3_proximity_driver_tb__DOT__u_db__DOT__g_with_debounce__DOT__stable_state));
    bufp->fullCData(oldp+26,(vlSelf->lj12a3_proximity_driver_tb__DOT__u_db__DOT__g_with_debounce__DOT__cnt),2);
    bufp->fullBit(oldp+27,(vlSelf->lj12a3_proximity_driver_tb__DOT__u_npn_nc__DOT__in_meta));
    bufp->fullBit(oldp+28,(vlSelf->lj12a3_proximity_driver_tb__DOT__u_npn_nc__DOT__in_sync));
    bufp->fullBit(oldp+29,(vlSelf->lj12a3_proximity_driver_tb__DOT__u_npn_nc__DOT__debounced_active));
    bufp->fullBit(oldp+30,(vlSelf->lj12a3_proximity_driver_tb__DOT__u_npn_no__DOT__in_meta));
    bufp->fullBit(oldp+31,(vlSelf->lj12a3_proximity_driver_tb__DOT__u_npn_no__DOT__in_sync));
    bufp->fullBit(oldp+32,((1U & (~ (IData)(vlSelf->lj12a3_proximity_driver_tb__DOT__u_npn_no__DOT__in_sync)))));
    bufp->fullBit(oldp+33,(vlSelf->lj12a3_proximity_driver_tb__DOT__u_npn_no__DOT__debounced_active));
    bufp->fullBit(oldp+34,(vlSelf->lj12a3_proximity_driver_tb__DOT__u_pnp_nc__DOT__in_meta));
    bufp->fullBit(oldp+35,(vlSelf->lj12a3_proximity_driver_tb__DOT__u_pnp_nc__DOT__in_sync));
    bufp->fullBit(oldp+36,((1U & (~ (IData)(vlSelf->lj12a3_proximity_driver_tb__DOT__u_pnp_nc__DOT__in_sync)))));
    bufp->fullBit(oldp+37,(vlSelf->lj12a3_proximity_driver_tb__DOT__u_pnp_nc__DOT__debounced_active));
    bufp->fullBit(oldp+38,(vlSelf->lj12a3_proximity_driver_tb__DOT__u_pnp_no__DOT__in_meta));
    bufp->fullBit(oldp+39,(vlSelf->lj12a3_proximity_driver_tb__DOT__u_pnp_no__DOT__in_sync));
    bufp->fullBit(oldp+40,(vlSelf->lj12a3_proximity_driver_tb__DOT__u_pnp_no__DOT__debounced_active));
    bufp->fullBit(oldp+41,(vlSelf->lj12a3_proximity_driver_tb__DOT__clk));
}
