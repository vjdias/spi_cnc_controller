// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vlj12a3_proximity_driver_tb.h for the primary calling header

#ifndef VERILATED_VLJ12A3_PROXIMITY_DRIVER_TB___024ROOT_H_
#define VERILATED_VLJ12A3_PROXIMITY_DRIVER_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vlj12a3_proximity_driver_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vlj12a3_proximity_driver_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ lj12a3_proximity_driver_tb__DOT__clk;
    CData/*0:0*/ lj12a3_proximity_driver_tb__DOT__rst_n;
    CData/*0:0*/ lj12a3_proximity_driver_tb__DOT__s_pnp_no;
    CData/*0:0*/ lj12a3_proximity_driver_tb__DOT__act_pnp_no;
    CData/*0:0*/ lj12a3_proximity_driver_tb__DOT__ap_pnp_no;
    CData/*0:0*/ lj12a3_proximity_driver_tb__DOT__ip_pnp_no;
    CData/*0:0*/ lj12a3_proximity_driver_tb__DOT__s_npn_no;
    CData/*0:0*/ lj12a3_proximity_driver_tb__DOT__act_npn_no;
    CData/*0:0*/ lj12a3_proximity_driver_tb__DOT__ap_npn_no;
    CData/*0:0*/ lj12a3_proximity_driver_tb__DOT__ip_npn_no;
    CData/*0:0*/ lj12a3_proximity_driver_tb__DOT__s_npn_nc;
    CData/*0:0*/ lj12a3_proximity_driver_tb__DOT__act_npn_nc;
    CData/*0:0*/ lj12a3_proximity_driver_tb__DOT__ap_npn_nc;
    CData/*0:0*/ lj12a3_proximity_driver_tb__DOT__ip_npn_nc;
    CData/*0:0*/ lj12a3_proximity_driver_tb__DOT__s_pnp_nc;
    CData/*0:0*/ lj12a3_proximity_driver_tb__DOT__act_pnp_nc;
    CData/*0:0*/ lj12a3_proximity_driver_tb__DOT__ap_pnp_nc;
    CData/*0:0*/ lj12a3_proximity_driver_tb__DOT__ip_pnp_nc;
    CData/*0:0*/ lj12a3_proximity_driver_tb__DOT__s_db;
    CData/*0:0*/ lj12a3_proximity_driver_tb__DOT__act_db;
    CData/*0:0*/ lj12a3_proximity_driver_tb__DOT__ap_db;
    CData/*0:0*/ lj12a3_proximity_driver_tb__DOT__ip_db;
    CData/*0:0*/ lj12a3_proximity_driver_tb__DOT__u_pnp_no__DOT__in_meta;
    CData/*0:0*/ lj12a3_proximity_driver_tb__DOT__u_pnp_no__DOT__in_sync;
    CData/*0:0*/ lj12a3_proximity_driver_tb__DOT__u_pnp_no__DOT__debounced_active;
    CData/*0:0*/ lj12a3_proximity_driver_tb__DOT__u_pnp_no__DOT__debounced_q;
    CData/*0:0*/ lj12a3_proximity_driver_tb__DOT__u_npn_no__DOT__in_meta;
    CData/*0:0*/ lj12a3_proximity_driver_tb__DOT__u_npn_no__DOT__in_sync;
    CData/*0:0*/ lj12a3_proximity_driver_tb__DOT__u_npn_no__DOT__debounced_active;
    CData/*0:0*/ lj12a3_proximity_driver_tb__DOT__u_npn_no__DOT__debounced_q;
    CData/*0:0*/ lj12a3_proximity_driver_tb__DOT__u_npn_nc__DOT__in_meta;
    CData/*0:0*/ lj12a3_proximity_driver_tb__DOT__u_npn_nc__DOT__in_sync;
    CData/*0:0*/ lj12a3_proximity_driver_tb__DOT__u_npn_nc__DOT__debounced_active;
    CData/*0:0*/ lj12a3_proximity_driver_tb__DOT__u_npn_nc__DOT__debounced_q;
    CData/*0:0*/ lj12a3_proximity_driver_tb__DOT__u_pnp_nc__DOT__in_meta;
    CData/*0:0*/ lj12a3_proximity_driver_tb__DOT__u_pnp_nc__DOT__in_sync;
    CData/*0:0*/ lj12a3_proximity_driver_tb__DOT__u_pnp_nc__DOT__debounced_active;
    CData/*0:0*/ lj12a3_proximity_driver_tb__DOT__u_pnp_nc__DOT__debounced_q;
    CData/*0:0*/ lj12a3_proximity_driver_tb__DOT__u_db__DOT__in_meta;
    CData/*0:0*/ lj12a3_proximity_driver_tb__DOT__u_db__DOT__in_sync;
    CData/*0:0*/ lj12a3_proximity_driver_tb__DOT__u_db__DOT__debounced_active;
    CData/*0:0*/ lj12a3_proximity_driver_tb__DOT__u_db__DOT__debounced_q;
    CData/*1:0*/ lj12a3_proximity_driver_tb__DOT__u_db__DOT__g_with_debounce__DOT__cnt;
    CData/*0:0*/ lj12a3_proximity_driver_tb__DOT__u_db__DOT__g_with_debounce__DOT__stable_state;
    CData/*0:0*/ __Vtrigprevexpr___TOP__lj12a3_proximity_driver_tb__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__lj12a3_proximity_driver_tb__DOT__rst_n__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h7e5b5a5e__0;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vlj12a3_proximity_driver_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vlj12a3_proximity_driver_tb___024root(Vlj12a3_proximity_driver_tb__Syms* symsp, const char* v__name);
    ~Vlj12a3_proximity_driver_tb___024root();
    VL_UNCOPYABLE(Vlj12a3_proximity_driver_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
