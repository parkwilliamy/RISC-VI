// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_tb.h for the primary calling header

#include "Vtop_tb__pch.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vtop_tb___024root___eval_triggers__act(Vtop_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_triggers__act\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((((~ (IData)(vlSelfRef.rst_n)) 
                                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rst_n__0)) 
                                                      << 1U) 
                                                     | ((IData)(vlSelfRef.clk) 
                                                        & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst_n__0 = vlSelfRef.rst_n;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
}

bool Vtop_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vtop_tb___024root___nba_sequent__TOP__0(Vtop_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___nba_sequent__TOP__0\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vdly__top_tb__DOT__DUT__DOT__IF_pc;
    __Vdly__top_tb__DOT__DUT__DOT__IF_pc = 0;
    // Body
    __Vdly__top_tb__DOT__DUT__DOT__IF_pc = vlSelfRef.top_tb__DOT__DUT__DOT__IF_pc;
    vlSelfRef.__Vdly__top_tb__DOT__DUT__DOT__IF_ID 
        = vlSelfRef.top_tb__DOT__DUT__DOT__IF_ID;
    if (vlSelfRef.rst_n) {
        vlSelfRef.top_tb__DOT__DUT__DOT__ID_PostFlush = 0U;
        if (((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__ID_Flush) 
             | (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__EX_Flush))) {
            if (vlSelfRef.top_tb__DOT__DUT__DOT__ID_Flush) {
                vlSelfRef.__Vdly__top_tb__DOT__DUT__DOT__IF_ID = 0U;
                vlSelfRef.top_tb__DOT__DUT__DOT__ID_PostFlush = 1U;
            } else {
                vlSelfRef.__Vdly__top_tb__DOT__DUT__DOT__IF_ID 
                    = vlSelfRef.top_tb__DOT__DUT__DOT__IF_pc;
            }
            __Vdly__top_tb__DOT__DUT__DOT__IF_pc = vlSelfRef.top_tb__DOT__DUT__DOT__next_pc;
        } else if (vlSelfRef.top_tb__DOT__DUT__DOT__ID_Stall) {
            __Vdly__top_tb__DOT__DUT__DOT__IF_pc = vlSelfRef.top_tb__DOT__DUT__DOT__IF_pc;
            vlSelfRef.__Vdly__top_tb__DOT__DUT__DOT__IF_ID 
                = vlSelfRef.top_tb__DOT__DUT__DOT__IF_ID;
        } else {
            vlSelfRef.__Vdly__top_tb__DOT__DUT__DOT__IF_ID 
                = vlSelfRef.top_tb__DOT__DUT__DOT__IF_pc;
            __Vdly__top_tb__DOT__DUT__DOT__IF_pc = vlSelfRef.top_tb__DOT__DUT__DOT__next_pc;
        }
    } else {
        __Vdly__top_tb__DOT__DUT__DOT__IF_pc = 0U;
        vlSelfRef.__Vdly__top_tb__DOT__DUT__DOT__IF_ID = 0U;
        vlSelfRef.top_tb__DOT__DUT__DOT__ID_PostFlush = 0U;
    }
    vlSelfRef.top_tb__DOT__DUT__DOT__IF_pc = __Vdly__top_tb__DOT__DUT__DOT__IF_pc;
}

void Vtop_tb___024root___nba_sequent__TOP__1(Vtop_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___nba_sequent__TOP__1\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __VdlyVal__top_tb__DOT__DUT__DOT__INST1__DOT__mem__v0;
    __VdlyVal__top_tb__DOT__DUT__DOT__INST1__DOT__mem__v0 = 0;
    IData/*19:0*/ __VdlyDim0__top_tb__DOT__DUT__DOT__INST1__DOT__mem__v0;
    __VdlyDim0__top_tb__DOT__DUT__DOT__INST1__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__top_tb__DOT__DUT__DOT__INST1__DOT__mem__v0;
    __VdlySet__top_tb__DOT__DUT__DOT__INST1__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyVal__top_tb__DOT__DUT__DOT__INST1__DOT__mem__v1;
    __VdlyVal__top_tb__DOT__DUT__DOT__INST1__DOT__mem__v1 = 0;
    IData/*19:0*/ __VdlyDim0__top_tb__DOT__DUT__DOT__INST1__DOT__mem__v1;
    __VdlyDim0__top_tb__DOT__DUT__DOT__INST1__DOT__mem__v1 = 0;
    CData/*0:0*/ __VdlySet__top_tb__DOT__DUT__DOT__INST1__DOT__mem__v1;
    __VdlySet__top_tb__DOT__DUT__DOT__INST1__DOT__mem__v1 = 0;
    CData/*7:0*/ __VdlyVal__top_tb__DOT__DUT__DOT__INST1__DOT__mem__v2;
    __VdlyVal__top_tb__DOT__DUT__DOT__INST1__DOT__mem__v2 = 0;
    IData/*19:0*/ __VdlyDim0__top_tb__DOT__DUT__DOT__INST1__DOT__mem__v2;
    __VdlyDim0__top_tb__DOT__DUT__DOT__INST1__DOT__mem__v2 = 0;
    CData/*0:0*/ __VdlySet__top_tb__DOT__DUT__DOT__INST1__DOT__mem__v2;
    __VdlySet__top_tb__DOT__DUT__DOT__INST1__DOT__mem__v2 = 0;
    CData/*7:0*/ __VdlyVal__top_tb__DOT__DUT__DOT__INST1__DOT__mem__v3;
    __VdlyVal__top_tb__DOT__DUT__DOT__INST1__DOT__mem__v3 = 0;
    IData/*19:0*/ __VdlyDim0__top_tb__DOT__DUT__DOT__INST1__DOT__mem__v3;
    __VdlyDim0__top_tb__DOT__DUT__DOT__INST1__DOT__mem__v3 = 0;
    CData/*0:0*/ __VdlySet__top_tb__DOT__DUT__DOT__INST1__DOT__mem__v3;
    __VdlySet__top_tb__DOT__DUT__DOT__INST1__DOT__mem__v3 = 0;
    CData/*7:0*/ __VdlyVal__top_tb__DOT__DUT__DOT__INST1__DOT__mem__v4;
    __VdlyVal__top_tb__DOT__DUT__DOT__INST1__DOT__mem__v4 = 0;
    IData/*19:0*/ __VdlyDim0__top_tb__DOT__DUT__DOT__INST1__DOT__mem__v4;
    __VdlyDim0__top_tb__DOT__DUT__DOT__INST1__DOT__mem__v4 = 0;
    CData/*0:0*/ __VdlySet__top_tb__DOT__DUT__DOT__INST1__DOT__mem__v4;
    __VdlySet__top_tb__DOT__DUT__DOT__INST1__DOT__mem__v4 = 0;
    CData/*7:0*/ __VdlyVal__top_tb__DOT__DUT__DOT__INST1__DOT__mem__v5;
    __VdlyVal__top_tb__DOT__DUT__DOT__INST1__DOT__mem__v5 = 0;
    IData/*19:0*/ __VdlyDim0__top_tb__DOT__DUT__DOT__INST1__DOT__mem__v5;
    __VdlyDim0__top_tb__DOT__DUT__DOT__INST1__DOT__mem__v5 = 0;
    CData/*0:0*/ __VdlySet__top_tb__DOT__DUT__DOT__INST1__DOT__mem__v5;
    __VdlySet__top_tb__DOT__DUT__DOT__INST1__DOT__mem__v5 = 0;
    CData/*7:0*/ __VdlyVal__top_tb__DOT__DUT__DOT__INST1__DOT__mem__v6;
    __VdlyVal__top_tb__DOT__DUT__DOT__INST1__DOT__mem__v6 = 0;
    IData/*19:0*/ __VdlyDim0__top_tb__DOT__DUT__DOT__INST1__DOT__mem__v6;
    __VdlyDim0__top_tb__DOT__DUT__DOT__INST1__DOT__mem__v6 = 0;
    CData/*0:0*/ __VdlySet__top_tb__DOT__DUT__DOT__INST1__DOT__mem__v6;
    __VdlySet__top_tb__DOT__DUT__DOT__INST1__DOT__mem__v6 = 0;
    CData/*7:0*/ __VdlyVal__top_tb__DOT__DUT__DOT__INST1__DOT__mem__v7;
    __VdlyVal__top_tb__DOT__DUT__DOT__INST1__DOT__mem__v7 = 0;
    IData/*19:0*/ __VdlyDim0__top_tb__DOT__DUT__DOT__INST1__DOT__mem__v7;
    __VdlyDim0__top_tb__DOT__DUT__DOT__INST1__DOT__mem__v7 = 0;
    CData/*0:0*/ __VdlySet__top_tb__DOT__DUT__DOT__INST1__DOT__mem__v7;
    __VdlySet__top_tb__DOT__DUT__DOT__INST1__DOT__mem__v7 = 0;
    IData/*31:0*/ __VdlyVal__top_tb__DOT__DUT__DOT__INST3__DOT__reg_file__v0;
    __VdlyVal__top_tb__DOT__DUT__DOT__INST3__DOT__reg_file__v0 = 0;
    CData/*4:0*/ __VdlyDim0__top_tb__DOT__DUT__DOT__INST3__DOT__reg_file__v0;
    __VdlyDim0__top_tb__DOT__DUT__DOT__INST3__DOT__reg_file__v0 = 0;
    CData/*0:0*/ __VdlySet__top_tb__DOT__DUT__DOT__INST3__DOT__reg_file__v0;
    __VdlySet__top_tb__DOT__DUT__DOT__INST3__DOT__reg_file__v0 = 0;
    // Body
    __VdlySet__top_tb__DOT__DUT__DOT__INST1__DOT__mem__v0 = 0U;
    __VdlySet__top_tb__DOT__DUT__DOT__INST1__DOT__mem__v1 = 0U;
    __VdlySet__top_tb__DOT__DUT__DOT__INST1__DOT__mem__v2 = 0U;
    __VdlySet__top_tb__DOT__DUT__DOT__INST1__DOT__mem__v3 = 0U;
    __VdlySet__top_tb__DOT__DUT__DOT__INST1__DOT__mem__v4 = 0U;
    __VdlySet__top_tb__DOT__DUT__DOT__INST1__DOT__mem__v5 = 0U;
    __VdlySet__top_tb__DOT__DUT__DOT__INST1__DOT__mem__v6 = 0U;
    __VdlySet__top_tb__DOT__DUT__DOT__INST1__DOT__mem__v7 = 0U;
    __VdlySet__top_tb__DOT__DUT__DOT__INST3__DOT__reg_file__v0 = 0U;
    vlSelfRef.top_tb__DOT__DUT__DOT__INST1__DOT__i = 4U;
    if (VL_UNLIKELY(((1U == ((0x00093fffU >= (0x000fffffU 
                                              & (vlSelfRef.top_tb__DOT__tohost 
                                                 >> 2U)))
                              ? vlSelfRef.top_tb__DOT__DUT__DOT__INST1__DOT__mem
                             [(0x000fffffU & (vlSelfRef.top_tb__DOT__tohost 
                                              >> 2U))]
                              : 0U))))) {
        vlSelfRef.top_tb__DOT__fd = VL_FOPEN_NN("DUT-RV32I_test.signature"s
                                                , "w"s);
        ;
        vlSelfRef.top_tb__DOT__i = vlSelfRef.top_tb__DOT__RVMODEL_DATA_BEGIN;
        while ((vlSelfRef.top_tb__DOT__i < vlSelfRef.top_tb__DOT__RVMODEL_DATA_END)) {
            VL_FWRITEF_NX(vlSelfRef.top_tb__DOT__fd,"%08x\n",0,
                          32,((0x00093fffU >= (0x000fffffU 
                                               & VL_DIVS_III(32, vlSelfRef.top_tb__DOT__i, (IData)(4U))))
                               ? vlSelfRef.top_tb__DOT__DUT__DOT__INST1__DOT__mem
                              [(0x000fffffU & VL_DIVS_III(32, vlSelfRef.top_tb__DOT__i, (IData)(4U)))]
                               : 0U));
            vlSelfRef.top_tb__DOT__i = ((IData)(4U) 
                                        + vlSelfRef.top_tb__DOT__i);
        }
        VL_FCLOSE_I(vlSelfRef.top_tb__DOT__fd); VL_FINISH_MT("../tb/pipe/top_tb.sv", 68, "");
    }
    if ((1U & (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__wea))) {
        vlSelfRef.top_tb__DOT__DUT__DOT__INST1__DOT____Vlvbound_h5c26a5c7__0 
            = (0x000000ffU & vlSelfRef.top_tb__DOT__DUT__DOT__dia);
        if ((0x00093fffU >= (0x000fffffU & (vlSelfRef.top_tb__DOT__DUT__DOT__INST1__DOT__addra 
                                            >> 2U)))) {
            __VdlyVal__top_tb__DOT__DUT__DOT__INST1__DOT__mem__v0 
                = vlSelfRef.top_tb__DOT__DUT__DOT__INST1__DOT____Vlvbound_h5c26a5c7__0;
            __VdlyDim0__top_tb__DOT__DUT__DOT__INST1__DOT__mem__v0 
                = (0x000fffffU & (vlSelfRef.top_tb__DOT__DUT__DOT__INST1__DOT__addra 
                                  >> 2U));
            __VdlySet__top_tb__DOT__DUT__DOT__INST1__DOT__mem__v0 = 1U;
        }
    }
    if ((2U & (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__wea))) {
        vlSelfRef.top_tb__DOT__DUT__DOT__INST1__DOT____Vlvbound_h5c26a5c7__0 
            = (0x000000ffU & (vlSelfRef.top_tb__DOT__DUT__DOT__dia 
                              >> 8U));
        if ((0x00093fffU >= (0x000fffffU & (vlSelfRef.top_tb__DOT__DUT__DOT__INST1__DOT__addra 
                                            >> 2U)))) {
            __VdlyVal__top_tb__DOT__DUT__DOT__INST1__DOT__mem__v1 
                = vlSelfRef.top_tb__DOT__DUT__DOT__INST1__DOT____Vlvbound_h5c26a5c7__0;
            __VdlyDim0__top_tb__DOT__DUT__DOT__INST1__DOT__mem__v1 
                = (0x000fffffU & (vlSelfRef.top_tb__DOT__DUT__DOT__INST1__DOT__addra 
                                  >> 2U));
            __VdlySet__top_tb__DOT__DUT__DOT__INST1__DOT__mem__v1 = 1U;
        }
    }
    if ((4U & (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__wea))) {
        vlSelfRef.top_tb__DOT__DUT__DOT__INST1__DOT____Vlvbound_h5c26a5c7__0 
            = (0x000000ffU & (vlSelfRef.top_tb__DOT__DUT__DOT__dia 
                              >> 0x10U));
        if ((0x00093fffU >= (0x000fffffU & (vlSelfRef.top_tb__DOT__DUT__DOT__INST1__DOT__addra 
                                            >> 2U)))) {
            __VdlyVal__top_tb__DOT__DUT__DOT__INST1__DOT__mem__v2 
                = vlSelfRef.top_tb__DOT__DUT__DOT__INST1__DOT____Vlvbound_h5c26a5c7__0;
            __VdlyDim0__top_tb__DOT__DUT__DOT__INST1__DOT__mem__v2 
                = (0x000fffffU & (vlSelfRef.top_tb__DOT__DUT__DOT__INST1__DOT__addra 
                                  >> 2U));
            __VdlySet__top_tb__DOT__DUT__DOT__INST1__DOT__mem__v2 = 1U;
        }
    }
    if ((8U & (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__wea))) {
        vlSelfRef.top_tb__DOT__DUT__DOT__INST1__DOT____Vlvbound_h5c26a5c7__0 
            = (vlSelfRef.top_tb__DOT__DUT__DOT__dia 
               >> 0x18U);
        if ((0x00093fffU >= (0x000fffffU & (vlSelfRef.top_tb__DOT__DUT__DOT__INST1__DOT__addra 
                                            >> 2U)))) {
            __VdlyVal__top_tb__DOT__DUT__DOT__INST1__DOT__mem__v3 
                = vlSelfRef.top_tb__DOT__DUT__DOT__INST1__DOT____Vlvbound_h5c26a5c7__0;
            __VdlyDim0__top_tb__DOT__DUT__DOT__INST1__DOT__mem__v3 
                = (0x000fffffU & (vlSelfRef.top_tb__DOT__DUT__DOT__INST1__DOT__addra 
                                  >> 2U));
            __VdlySet__top_tb__DOT__DUT__DOT__INST1__DOT__mem__v3 = 1U;
        }
    }
    if ((1U & (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__web))) {
        vlSelfRef.top_tb__DOT__DUT__DOT__INST1__DOT____Vlvbound_h853563f3__0 
            = (0x000000ffU & vlSelfRef.top_tb__DOT__DUT__DOT__dib);
        if ((0x00093fffU >= (vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[1U] 
                             >> 0x0000000cU))) {
            __VdlyVal__top_tb__DOT__DUT__DOT__INST1__DOT__mem__v4 
                = vlSelfRef.top_tb__DOT__DUT__DOT__INST1__DOT____Vlvbound_h853563f3__0;
            __VdlyDim0__top_tb__DOT__DUT__DOT__INST1__DOT__mem__v4 
                = (vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[1U] 
                   >> 0x0000000cU);
            __VdlySet__top_tb__DOT__DUT__DOT__INST1__DOT__mem__v4 = 1U;
        }
    }
    if ((2U & (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__web))) {
        vlSelfRef.top_tb__DOT__DUT__DOT__INST1__DOT____Vlvbound_h853563f3__0 
            = (0x000000ffU & (vlSelfRef.top_tb__DOT__DUT__DOT__dib 
                              >> 8U));
        if ((0x00093fffU >= (vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[1U] 
                             >> 0x0000000cU))) {
            __VdlyVal__top_tb__DOT__DUT__DOT__INST1__DOT__mem__v5 
                = vlSelfRef.top_tb__DOT__DUT__DOT__INST1__DOT____Vlvbound_h853563f3__0;
            __VdlyDim0__top_tb__DOT__DUT__DOT__INST1__DOT__mem__v5 
                = (vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[1U] 
                   >> 0x0000000cU);
            __VdlySet__top_tb__DOT__DUT__DOT__INST1__DOT__mem__v5 = 1U;
        }
    }
    if ((4U & (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__web))) {
        vlSelfRef.top_tb__DOT__DUT__DOT__INST1__DOT____Vlvbound_h853563f3__0 
            = (0x000000ffU & (vlSelfRef.top_tb__DOT__DUT__DOT__dib 
                              >> 0x10U));
        if ((0x00093fffU >= (vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[1U] 
                             >> 0x0000000cU))) {
            __VdlyVal__top_tb__DOT__DUT__DOT__INST1__DOT__mem__v6 
                = vlSelfRef.top_tb__DOT__DUT__DOT__INST1__DOT____Vlvbound_h853563f3__0;
            __VdlyDim0__top_tb__DOT__DUT__DOT__INST1__DOT__mem__v6 
                = (vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[1U] 
                   >> 0x0000000cU);
            __VdlySet__top_tb__DOT__DUT__DOT__INST1__DOT__mem__v6 = 1U;
        }
    }
    if ((8U & (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__web))) {
        vlSelfRef.top_tb__DOT__DUT__DOT__INST1__DOT____Vlvbound_h853563f3__0 
            = (vlSelfRef.top_tb__DOT__DUT__DOT__dib 
               >> 0x18U);
        if ((0x00093fffU >= (vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[1U] 
                             >> 0x0000000cU))) {
            __VdlyVal__top_tb__DOT__DUT__DOT__INST1__DOT__mem__v7 
                = vlSelfRef.top_tb__DOT__DUT__DOT__INST1__DOT____Vlvbound_h853563f3__0;
            __VdlyDim0__top_tb__DOT__DUT__DOT__INST1__DOT__mem__v7 
                = (vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[1U] 
                   >> 0x0000000cU);
            __VdlySet__top_tb__DOT__DUT__DOT__INST1__DOT__mem__v7 = 1U;
        }
    }
    if (((0U < (0x0000001fU & vlSelfRef.top_tb__DOT__DUT__DOT__MEM_WB[0U])) 
         & (vlSelfRef.top_tb__DOT__DUT__DOT__MEM_WB[1U] 
            >> 5U))) {
        __VdlyVal__top_tb__DOT__DUT__DOT__INST3__DOT__reg_file__v0 
            = vlSelfRef.top_tb__DOT__DUT__DOT__WB_rd_write_data;
        __VdlyDim0__top_tb__DOT__DUT__DOT__INST3__DOT__reg_file__v0 
            = (0x0000001fU & vlSelfRef.top_tb__DOT__DUT__DOT__MEM_WB[0U]);
        __VdlySet__top_tb__DOT__DUT__DOT__INST3__DOT__reg_file__v0 = 1U;
    }
    vlSelfRef.top_tb__DOT__DUT__DOT__doa = ((0x00093fffU 
                                             >= (0x000fffffU 
                                                 & (vlSelfRef.top_tb__DOT__DUT__DOT__INST1__DOT__addra 
                                                    >> 2U)))
                                             ? vlSelfRef.top_tb__DOT__DUT__DOT__INST1__DOT__mem
                                            [(0x000fffffU 
                                              & (vlSelfRef.top_tb__DOT__DUT__DOT__INST1__DOT__addra 
                                                 >> 2U))]
                                             : 0U);
    vlSelfRef.top_tb__DOT__DUT__DOT__dob = ((0x00093fffU 
                                             >= (vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[1U] 
                                                 >> 0x0000000cU))
                                             ? vlSelfRef.top_tb__DOT__DUT__DOT__INST1__DOT__mem
                                            [(vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[1U] 
                                              >> 0x0000000cU)]
                                             : 0U);
    if (__VdlySet__top_tb__DOT__DUT__DOT__INST3__DOT__reg_file__v0) {
        vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__reg_file[__VdlyDim0__top_tb__DOT__DUT__DOT__INST3__DOT__reg_file__v0] 
            = __VdlyVal__top_tb__DOT__DUT__DOT__INST3__DOT__reg_file__v0;
    }
    if (__VdlySet__top_tb__DOT__DUT__DOT__INST1__DOT__mem__v0) {
        vlSelfRef.top_tb__DOT__DUT__DOT__INST1__DOT__mem[__VdlyDim0__top_tb__DOT__DUT__DOT__INST1__DOT__mem__v0] 
            = ((0xffffff00U & vlSelfRef.top_tb__DOT__DUT__DOT__INST1__DOT__mem
                [__VdlyDim0__top_tb__DOT__DUT__DOT__INST1__DOT__mem__v0]) 
               | (IData)(__VdlyVal__top_tb__DOT__DUT__DOT__INST1__DOT__mem__v0));
    }
    if (__VdlySet__top_tb__DOT__DUT__DOT__INST1__DOT__mem__v1) {
        vlSelfRef.top_tb__DOT__DUT__DOT__INST1__DOT__mem[__VdlyDim0__top_tb__DOT__DUT__DOT__INST1__DOT__mem__v1] 
            = ((0xffff00ffU & vlSelfRef.top_tb__DOT__DUT__DOT__INST1__DOT__mem
                [__VdlyDim0__top_tb__DOT__DUT__DOT__INST1__DOT__mem__v1]) 
               | ((IData)(__VdlyVal__top_tb__DOT__DUT__DOT__INST1__DOT__mem__v1) 
                  << 8U));
    }
    if (__VdlySet__top_tb__DOT__DUT__DOT__INST1__DOT__mem__v2) {
        vlSelfRef.top_tb__DOT__DUT__DOT__INST1__DOT__mem[__VdlyDim0__top_tb__DOT__DUT__DOT__INST1__DOT__mem__v2] 
            = ((0xff00ffffU & vlSelfRef.top_tb__DOT__DUT__DOT__INST1__DOT__mem
                [__VdlyDim0__top_tb__DOT__DUT__DOT__INST1__DOT__mem__v2]) 
               | ((IData)(__VdlyVal__top_tb__DOT__DUT__DOT__INST1__DOT__mem__v2) 
                  << 0x00000010U));
    }
    if (__VdlySet__top_tb__DOT__DUT__DOT__INST1__DOT__mem__v3) {
        vlSelfRef.top_tb__DOT__DUT__DOT__INST1__DOT__mem[__VdlyDim0__top_tb__DOT__DUT__DOT__INST1__DOT__mem__v3] 
            = ((0x00ffffffU & vlSelfRef.top_tb__DOT__DUT__DOT__INST1__DOT__mem
                [__VdlyDim0__top_tb__DOT__DUT__DOT__INST1__DOT__mem__v3]) 
               | ((IData)(__VdlyVal__top_tb__DOT__DUT__DOT__INST1__DOT__mem__v3) 
                  << 0x00000018U));
    }
    if (__VdlySet__top_tb__DOT__DUT__DOT__INST1__DOT__mem__v4) {
        vlSelfRef.top_tb__DOT__DUT__DOT__INST1__DOT__mem[__VdlyDim0__top_tb__DOT__DUT__DOT__INST1__DOT__mem__v4] 
            = ((0xffffff00U & vlSelfRef.top_tb__DOT__DUT__DOT__INST1__DOT__mem
                [__VdlyDim0__top_tb__DOT__DUT__DOT__INST1__DOT__mem__v4]) 
               | (IData)(__VdlyVal__top_tb__DOT__DUT__DOT__INST1__DOT__mem__v4));
    }
    if (__VdlySet__top_tb__DOT__DUT__DOT__INST1__DOT__mem__v5) {
        vlSelfRef.top_tb__DOT__DUT__DOT__INST1__DOT__mem[__VdlyDim0__top_tb__DOT__DUT__DOT__INST1__DOT__mem__v5] 
            = ((0xffff00ffU & vlSelfRef.top_tb__DOT__DUT__DOT__INST1__DOT__mem
                [__VdlyDim0__top_tb__DOT__DUT__DOT__INST1__DOT__mem__v5]) 
               | ((IData)(__VdlyVal__top_tb__DOT__DUT__DOT__INST1__DOT__mem__v5) 
                  << 8U));
    }
    if (__VdlySet__top_tb__DOT__DUT__DOT__INST1__DOT__mem__v6) {
        vlSelfRef.top_tb__DOT__DUT__DOT__INST1__DOT__mem[__VdlyDim0__top_tb__DOT__DUT__DOT__INST1__DOT__mem__v6] 
            = ((0xff00ffffU & vlSelfRef.top_tb__DOT__DUT__DOT__INST1__DOT__mem
                [__VdlyDim0__top_tb__DOT__DUT__DOT__INST1__DOT__mem__v6]) 
               | ((IData)(__VdlyVal__top_tb__DOT__DUT__DOT__INST1__DOT__mem__v6) 
                  << 0x00000010U));
    }
    if (__VdlySet__top_tb__DOT__DUT__DOT__INST1__DOT__mem__v7) {
        vlSelfRef.top_tb__DOT__DUT__DOT__INST1__DOT__mem[__VdlyDim0__top_tb__DOT__DUT__DOT__INST1__DOT__mem__v7] 
            = ((0x00ffffffU & vlSelfRef.top_tb__DOT__DUT__DOT__INST1__DOT__mem
                [__VdlyDim0__top_tb__DOT__DUT__DOT__INST1__DOT__mem__v7]) 
               | ((IData)(__VdlyVal__top_tb__DOT__DUT__DOT__INST1__DOT__mem__v7) 
                  << 0x00000018U));
    }
}

void Vtop_tb___024root___nba_sequent__TOP__2(Vtop_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___nba_sequent__TOP__2\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<4>/*127:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_2;
    VlWide<4>/*127:0*/ __Vtemp_3;
    VlWide<4>/*127:0*/ __Vtemp_4;
    VlWide<4>/*127:0*/ __Vtemp_6;
    VlWide<5>/*159:0*/ __Vtemp_10;
    VlWide<5>/*159:0*/ __Vtemp_13;
    VlWide<5>/*159:0*/ __Vtemp_16;
    VlWide<5>/*159:0*/ __Vtemp_19;
    VlWide<4>/*127:0*/ __Vtemp_24;
    VlWide<4>/*127:0*/ __Vtemp_33;
    VlWide<7>/*223:0*/ __Vtemp_37;
    // Body
    __Vtemp_1[1U] = (((IData)((((QData)((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[4U])) 
                                << 0x0000002bU) | (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[3U])) 
                                                    << 0x0000000bU) 
                                                   | ((QData)((IData)(
                                                                      vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[2U])) 
                                                      >> 0x00000015U)))) 
                      << 0x0000000fU) | (IData)(((((QData)((IData)(
                                                                   ((0x00000380U 
                                                                     & (vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[2U] 
                                                                        >> 0x0000000bU)) 
                                                                    | ((0x00000070U 
                                                                        & (vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[2U] 
                                                                           >> 0x0000000bU)) 
                                                                       | ((0x0000000cU 
                                                                           & (vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[2U] 
                                                                              >> 0x0000000bU)) 
                                                                          | ((2U 
                                                                              & (vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[2U] 
                                                                                >> 0x0000000aU)) 
                                                                             | (1U 
                                                                                & (vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[2U] 
                                                                                >> 0x0000000cU)))))))) 
                                                   << 0x00000025U) 
                                                  | (((QData)((IData)(
                                                                      ((vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[2U] 
                                                                        << 0x00000016U) 
                                                                       | (vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[1U] 
                                                                          >> 0x0000000aU)))) 
                                                      << 5U) 
                                                     | (QData)((IData)(
                                                                       (0x0000001fU 
                                                                        & vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[0U]))))) 
                                                 >> 0x00000020U)));
    __Vtemp_2[1U] = (((IData)((((QData)((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[4U])) 
                                << 0x0000002bU) | (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[3U])) 
                                                    << 0x0000000bU) 
                                                   | ((QData)((IData)(
                                                                      vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[2U])) 
                                                      >> 0x00000015U)))) 
                      << 0x0000000fU) | (IData)(((((QData)((IData)(
                                                                   ((0x00000380U 
                                                                     & (vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[2U] 
                                                                        >> 0x0000000bU)) 
                                                                    | ((0x00000070U 
                                                                        & (vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[2U] 
                                                                           >> 0x0000000bU)) 
                                                                       | ((0x0000000cU 
                                                                           & (vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[2U] 
                                                                              >> 0x0000000bU)) 
                                                                          | ((2U 
                                                                              & (vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[2U] 
                                                                                >> 0x0000000aU)) 
                                                                             | (1U 
                                                                                & (vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[2U] 
                                                                                >> 0x0000000cU)))))))) 
                                                   << 0x00000025U) 
                                                  | (((QData)((IData)(
                                                                      ((vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[2U] 
                                                                        << 0x00000016U) 
                                                                       | (vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[1U] 
                                                                          >> 0x0000000aU)))) 
                                                      << 5U) 
                                                     | (QData)((IData)(
                                                                       (0x0000001fU 
                                                                        & vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[0U]))))) 
                                                 >> 0x00000020U)));
    __Vtemp_3[1U] = (((IData)((((QData)((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[4U])) 
                                << 0x0000002bU) | (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[3U])) 
                                                    << 0x0000000bU) 
                                                   | ((QData)((IData)(
                                                                      vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[2U])) 
                                                      >> 0x00000015U)))) 
                      << 0x0000000fU) | (IData)(((((QData)((IData)(
                                                                   ((0x00000380U 
                                                                     & (vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[2U] 
                                                                        >> 0x0000000bU)) 
                                                                    | ((0x00000070U 
                                                                        & (vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[2U] 
                                                                           >> 0x0000000bU)) 
                                                                       | ((0x0000000cU 
                                                                           & (vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[2U] 
                                                                              >> 0x0000000bU)) 
                                                                          | ((2U 
                                                                              & (vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[2U] 
                                                                                >> 0x0000000aU)) 
                                                                             | (1U 
                                                                                & (vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[2U] 
                                                                                >> 0x0000000cU)))))))) 
                                                   << 0x00000025U) 
                                                  | (((QData)((IData)(
                                                                      ((vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[2U] 
                                                                        << 0x00000016U) 
                                                                       | (vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[1U] 
                                                                          >> 0x0000000aU)))) 
                                                      << 5U) 
                                                     | (QData)((IData)(
                                                                       (0x0000001fU 
                                                                        & vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[0U]))))) 
                                                 >> 0x00000020U)));
    if (vlSelfRef.top_tb__DOT__DUT__DOT__ID_Stall) {
        __Vtemp_4[0U] = (IData)((((QData)((IData)((
                                                   (0x00000380U 
                                                    & (vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[2U] 
                                                       >> 0x0000000bU)) 
                                                   | ((0x00000070U 
                                                       & (vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[2U] 
                                                          >> 0x0000000bU)) 
                                                      | ((0x0000000cU 
                                                          & (vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[2U] 
                                                             >> 0x0000000bU)) 
                                                         | ((2U 
                                                             & (vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[2U] 
                                                                >> 0x0000000aU)) 
                                                            | (1U 
                                                               & (vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[2U] 
                                                                  >> 0x0000000cU)))))))) 
                                  << 0x00000025U) | 
                                 (((QData)((IData)(
                                                   ((vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[2U] 
                                                     << 0x00000016U) 
                                                    | (vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[1U] 
                                                       >> 0x0000000aU)))) 
                                   << 5U) | (QData)((IData)(
                                                            (0x0000001fU 
                                                             & vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[0U]))))));
        __Vtemp_4[2U] = (((IData)((((QData)((IData)(
                                                    vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[4U])) 
                                    << 0x0000002bU) 
                                   | (((QData)((IData)(
                                                       vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[3U])) 
                                       << 0x0000000bU) 
                                      | ((QData)((IData)(
                                                         vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[2U])) 
                                         >> 0x00000015U)))) 
                          >> 0x00000011U) | ((IData)(
                                                     ((((QData)((IData)(
                                                                        vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[4U])) 
                                                        << 0x0000002bU) 
                                                       | (((QData)((IData)(
                                                                           vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[3U])) 
                                                           << 0x0000000bU) 
                                                          | ((QData)((IData)(
                                                                             vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[2U])) 
                                                             >> 0x00000015U))) 
                                                      >> 0x00000020U)) 
                                             << 0x0000000fU));
    } else {
        __Vtemp_4[0U] = (IData)((((QData)((IData)((
                                                   (0x00000380U 
                                                    & (vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[2U] 
                                                       >> 0x0000000bU)) 
                                                   | ((0x00000070U 
                                                       & (vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[2U] 
                                                          >> 0x0000000bU)) 
                                                      | ((0x0000000cU 
                                                          & (vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[2U] 
                                                             >> 0x0000000bU)) 
                                                         | ((2U 
                                                             & (vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[2U] 
                                                                >> 0x0000000aU)) 
                                                            | (1U 
                                                               & (vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[2U] 
                                                                  >> 0x0000000cU)))))))) 
                                  << 0x00000025U) | 
                                 (((QData)((IData)(
                                                   ((vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[2U] 
                                                     << 0x00000016U) 
                                                    | (vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[1U] 
                                                       >> 0x0000000aU)))) 
                                   << 5U) | (QData)((IData)(
                                                            (0x0000001fU 
                                                             & vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[0U]))))));
        __Vtemp_4[2U] = (((IData)((((QData)((IData)(
                                                    vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[4U])) 
                                    << 0x0000002bU) 
                                   | (((QData)((IData)(
                                                       vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[3U])) 
                                       << 0x0000000bU) 
                                      | ((QData)((IData)(
                                                         vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[2U])) 
                                         >> 0x00000015U)))) 
                          >> 0x00000011U) | ((IData)(
                                                     ((((QData)((IData)(
                                                                        vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[4U])) 
                                                        << 0x0000002bU) 
                                                       | (((QData)((IData)(
                                                                           vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[3U])) 
                                                           << 0x0000000bU) 
                                                          | ((QData)((IData)(
                                                                             vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[2U])) 
                                                             >> 0x00000015U))) 
                                                      >> 0x00000020U)) 
                                             << 0x0000000fU));
    }
    if (((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__ID_Flush) 
         | (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__EX_Flush))) {
        __Vtemp_6[3U] = ((IData)(((((QData)((IData)(
                                                    vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[4U])) 
                                    << 0x0000002bU) 
                                   | (((QData)((IData)(
                                                       vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[3U])) 
                                       << 0x0000000bU) 
                                      | ((QData)((IData)(
                                                         vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[2U])) 
                                         >> 0x00000015U))) 
                                  >> 0x00000020U)) 
                         >> 0x00000011U);
        __Vtemp_19[0U] = (((IData)((((QData)((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__EX_ALU_result)) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__EX_rs2_data_final)))) 
                           << 0x0000000aU) | ((0x000003e0U 
                                               & (vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[0U] 
                                                  << 5U)) 
                                              | (0x0000001fU 
                                                 & (vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[0U] 
                                                    >> 0x0000000aU))));
        __Vtemp_19[1U] = (((IData)((((QData)((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__EX_ALU_result)) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__EX_rs2_data_final)))) 
                           >> 0x00000016U) | ((IData)(
                                                      ((((QData)((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__EX_ALU_result)) 
                                                         << 0x00000020U) 
                                                        | (QData)((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__EX_rs2_data_final))) 
                                                       >> 0x00000020U)) 
                                              << 0x0000000aU));
        if (vlSelfRef.top_tb__DOT__DUT__DOT__EX_Flush) {
            __Vtemp_37[0U] = 0U;
            __Vtemp_37[1U] = 0U;
            __Vtemp_37[5U] = 0U;
        } else {
            __Vtemp_37[0U] = (((IData)((((QData)((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__ID_rs2_data)) 
                                         << 0x00000020U) 
                                        | (QData)((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__ID_imm)))) 
                               << 0x0000000fU) | ((0x00007c00U 
                                                   & (vlSelfRef.top_tb__DOT__DUT__DOT__ID_instruction 
                                                      << 3U)) 
                                                  | ((0x000003e0U 
                                                      & (vlSelfRef.top_tb__DOT__DUT__DOT__ID_instruction 
                                                         >> 0x0000000aU)) 
                                                     | (0x0000001fU 
                                                        & (vlSelfRef.top_tb__DOT__DUT__DOT__ID_instruction 
                                                           >> 0x00000014U)))));
            __Vtemp_37[1U] = (((IData)((((QData)((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__ID_rs2_data)) 
                                         << 0x00000020U) 
                                        | (QData)((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__ID_imm)))) 
                               >> 0x00000011U) | ((IData)(
                                                          ((((QData)((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__ID_rs2_data)) 
                                                             << 0x00000020U) 
                                                            | (QData)((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__ID_imm))) 
                                                           >> 0x00000020U)) 
                                                  << 0x0000000fU));
            __Vtemp_37[5U] = (((IData)((((QData)((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__IF_ID)) 
                                         << 0x00000020U) 
                                        | (QData)((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__ID_pc_imm)))) 
                               >> 0x0000001dU) | ((IData)(
                                                          ((((QData)((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__IF_ID)) 
                                                             << 0x00000020U) 
                                                            | (QData)((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__ID_pc_imm))) 
                                                           >> 0x00000020U)) 
                                                  << 3U));
        }
    } else if (vlSelfRef.top_tb__DOT__DUT__DOT__ID_Stall) {
        __Vtemp_6[3U] = ((IData)(((((QData)((IData)(
                                                    vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[4U])) 
                                    << 0x0000002bU) 
                                   | (((QData)((IData)(
                                                       vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[3U])) 
                                       << 0x0000000bU) 
                                      | ((QData)((IData)(
                                                         vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[2U])) 
                                         >> 0x00000015U))) 
                                  >> 0x00000020U)) 
                         >> 0x00000011U);
        __Vtemp_19[0U] = (((IData)((((QData)((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__EX_ALU_result)) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__EX_rs2_data_final)))) 
                           << 0x0000000aU) | ((0x000003e0U 
                                               & (vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[0U] 
                                                  << 5U)) 
                                              | (0x0000001fU 
                                                 & (vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[0U] 
                                                    >> 0x0000000aU))));
        __Vtemp_19[1U] = (((IData)((((QData)((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__EX_ALU_result)) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__EX_rs2_data_final)))) 
                           >> 0x00000016U) | ((IData)(
                                                      ((((QData)((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__EX_ALU_result)) 
                                                         << 0x00000020U) 
                                                        | (QData)((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__EX_rs2_data_final))) 
                                                       >> 0x00000020U)) 
                                              << 0x0000000aU));
        __Vtemp_37[0U] = ((vlSelfRef.top_tb__DOT__DUT__DOT__EX_imm 
                           << 0x0000000fU) | (((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__EX_rd) 
                                               << 0x0000000aU) 
                                              | (((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__EX_rs1) 
                                                  << 5U) 
                                                 | (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__EX_rs2))));
        __Vtemp_37[1U] = ((vlSelfRef.top_tb__DOT__DUT__DOT__EX_imm 
                           >> 0x00000011U) | ((IData)(
                                                      (((QData)((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__EX_rs1_data_final)) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__EX_rs2_data_final)))) 
                                              << 0x0000000fU));
        __Vtemp_37[5U] = (((IData)((((QData)((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__EX_pc)) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__EX_pc_imm)))) 
                           >> 0x0000001dU) | ((IData)(
                                                      ((((QData)((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__EX_pc)) 
                                                         << 0x00000020U) 
                                                        | (QData)((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__EX_pc_imm))) 
                                                       >> 0x00000020U)) 
                                              << 3U));
    } else {
        __Vtemp_6[3U] = ((IData)(((((QData)((IData)(
                                                    vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[4U])) 
                                    << 0x0000002bU) 
                                   | (((QData)((IData)(
                                                       vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[3U])) 
                                       << 0x0000000bU) 
                                      | ((QData)((IData)(
                                                         vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[2U])) 
                                         >> 0x00000015U))) 
                                  >> 0x00000020U)) 
                         >> 0x00000011U);
        __Vtemp_19[0U] = (((IData)((((QData)((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__EX_ALU_result)) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__EX_rs2_data_final)))) 
                           << 0x0000000aU) | ((0x000003e0U 
                                               & (vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[0U] 
                                                  << 5U)) 
                                              | (0x0000001fU 
                                                 & (vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[0U] 
                                                    >> 0x0000000aU))));
        __Vtemp_19[1U] = (((IData)((((QData)((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__EX_ALU_result)) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__EX_rs2_data_final)))) 
                           >> 0x00000016U) | ((IData)(
                                                      ((((QData)((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__EX_ALU_result)) 
                                                         << 0x00000020U) 
                                                        | (QData)((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__EX_rs2_data_final))) 
                                                       >> 0x00000020U)) 
                                              << 0x0000000aU));
        __Vtemp_37[0U] = (((IData)((((QData)((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__ID_rs2_data)) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__ID_imm)))) 
                           << 0x0000000fU) | ((0x00007c00U 
                                               & (vlSelfRef.top_tb__DOT__DUT__DOT__ID_instruction 
                                                  << 3U)) 
                                              | ((0x000003e0U 
                                                  & (vlSelfRef.top_tb__DOT__DUT__DOT__ID_instruction 
                                                     >> 0x0000000aU)) 
                                                 | (0x0000001fU 
                                                    & (vlSelfRef.top_tb__DOT__DUT__DOT__ID_instruction 
                                                       >> 0x00000014U)))));
        __Vtemp_37[1U] = (((IData)((((QData)((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__ID_rs2_data)) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__ID_imm)))) 
                           >> 0x00000011U) | ((IData)(
                                                      ((((QData)((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__ID_rs2_data)) 
                                                         << 0x00000020U) 
                                                        | (QData)((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__ID_imm))) 
                                                       >> 0x00000020U)) 
                                              << 0x0000000fU));
        __Vtemp_37[5U] = (((IData)((((QData)((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__IF_ID)) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__ID_pc_imm)))) 
                           >> 0x0000001dU) | ((IData)(
                                                      ((((QData)((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__IF_ID)) 
                                                         << 0x00000020U) 
                                                        | (QData)((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__ID_pc_imm))) 
                                                       >> 0x00000020U)) 
                                              << 3U));
    }
    __Vtemp_10[2U] = ((((IData)((((QData)((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[6U])) 
                                  << 0x0000003dU) | 
                                 (((QData)((IData)(
                                                   vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[5U])) 
                                   << 0x0000001dU) 
                                  | ((QData)((IData)(
                                                     vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[4U])) 
                                     >> 3U)))) << 0x00000015U) 
                       | ((((0x00000038U & (vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[4U] 
                                            << 3U)) 
                            | (7U & (vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[3U] 
                                     >> 0x00000019U))) 
                           << 0x0000000fU) | (((0x00000018U 
                                                & (vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[3U] 
                                                   >> 0x00000012U)) 
                                               | ((4U 
                                                   & (vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[3U] 
                                                      >> 0x00000011U)) 
                                                  | (3U 
                                                     & (vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[3U] 
                                                        >> 0x00000011U)))) 
                                              << 0x0000000aU))) 
                      | ((IData)(((((QData)((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__EX_ALU_result)) 
                                    << 0x00000020U) 
                                   | (QData)((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__EX_rs2_data_final))) 
                                  >> 0x00000020U)) 
                         >> 0x00000016U));
    __Vtemp_10[3U] = (((0x000003ffU & ((IData)((((QData)((IData)(
                                                                 vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[6U])) 
                                                 << 0x0000003dU) 
                                                | (((QData)((IData)(
                                                                    vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[5U])) 
                                                    << 0x0000001dU) 
                                                   | ((QData)((IData)(
                                                                      vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[4U])) 
                                                      >> 3U)))) 
                                       >> 0x0000000bU)) 
                       | ((0x000003ffU & (((0x00000038U 
                                            & (vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[4U] 
                                               << 3U)) 
                                           | (7U & 
                                              (vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[3U] 
                                               >> 0x00000019U))) 
                                          >> 0x00000011U)) 
                          | (((0x00000018U & (vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[3U] 
                                              >> 0x00000012U)) 
                              | ((4U & (vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[3U] 
                                        >> 0x00000011U)) 
                                 | (3U & (vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[3U] 
                                          >> 0x00000011U)))) 
                             >> 0x00000016U))) | ((0x001ffc00U 
                                                   & ((IData)(
                                                              (((QData)((IData)(
                                                                                vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[6U])) 
                                                                << 0x0000003dU) 
                                                               | (((QData)((IData)(
                                                                                vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[5U])) 
                                                                   << 0x0000001dU) 
                                                                  | ((QData)((IData)(
                                                                                vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[4U])) 
                                                                     >> 3U)))) 
                                                      >> 0x0000000bU)) 
                                                  | ((IData)(
                                                             ((((QData)((IData)(
                                                                                vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[6U])) 
                                                                << 0x0000003dU) 
                                                               | (((QData)((IData)(
                                                                                vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[5U])) 
                                                                   << 0x0000001dU) 
                                                                  | ((QData)((IData)(
                                                                                vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[4U])) 
                                                                     >> 3U))) 
                                                              >> 0x00000020U)) 
                                                     << 0x00000015U)));
    __Vtemp_10[4U] = ((0x000003ffU & ((IData)(((((QData)((IData)(
                                                                 vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[6U])) 
                                                 << 0x0000003dU) 
                                                | (((QData)((IData)(
                                                                    vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[5U])) 
                                                    << 0x0000001dU) 
                                                   | ((QData)((IData)(
                                                                      vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[4U])) 
                                                      >> 3U))) 
                                               >> 0x00000020U)) 
                                      >> 0x0000000bU)) 
                      | (0x001ffc00U & ((IData)(((((QData)((IData)(
                                                                   vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[6U])) 
                                                   << 0x0000003dU) 
                                                  | (((QData)((IData)(
                                                                      vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[5U])) 
                                                      << 0x0000001dU) 
                                                     | ((QData)((IData)(
                                                                        vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[4U])) 
                                                        >> 3U))) 
                                                 >> 0x00000020U)) 
                                        >> 0x0000000bU)));
    __Vtemp_13[2U] = ((((IData)((((QData)((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[6U])) 
                                  << 0x0000003dU) | 
                                 (((QData)((IData)(
                                                   vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[5U])) 
                                   << 0x0000001dU) 
                                  | ((QData)((IData)(
                                                     vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[4U])) 
                                     >> 3U)))) << 0x00000015U) 
                       | ((((0x00000038U & (vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[4U] 
                                            << 3U)) 
                            | (7U & (vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[3U] 
                                     >> 0x00000019U))) 
                           << 0x0000000fU) | (((0x00000018U 
                                                & (vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[3U] 
                                                   >> 0x00000012U)) 
                                               | ((4U 
                                                   & (vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[3U] 
                                                      >> 0x00000011U)) 
                                                  | (3U 
                                                     & (vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[3U] 
                                                        >> 0x00000011U)))) 
                                              << 0x0000000aU))) 
                      | ((IData)(((((QData)((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__EX_ALU_result)) 
                                    << 0x00000020U) 
                                   | (QData)((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__EX_rs2_data_final))) 
                                  >> 0x00000020U)) 
                         >> 0x00000016U));
    __Vtemp_13[3U] = (((0x000003ffU & ((IData)((((QData)((IData)(
                                                                 vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[6U])) 
                                                 << 0x0000003dU) 
                                                | (((QData)((IData)(
                                                                    vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[5U])) 
                                                    << 0x0000001dU) 
                                                   | ((QData)((IData)(
                                                                      vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[4U])) 
                                                      >> 3U)))) 
                                       >> 0x0000000bU)) 
                       | ((0x000003ffU & (((0x00000038U 
                                            & (vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[4U] 
                                               << 3U)) 
                                           | (7U & 
                                              (vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[3U] 
                                               >> 0x00000019U))) 
                                          >> 0x00000011U)) 
                          | (((0x00000018U & (vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[3U] 
                                              >> 0x00000012U)) 
                              | ((4U & (vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[3U] 
                                        >> 0x00000011U)) 
                                 | (3U & (vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[3U] 
                                          >> 0x00000011U)))) 
                             >> 0x00000016U))) | ((0x001ffc00U 
                                                   & ((IData)(
                                                              (((QData)((IData)(
                                                                                vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[6U])) 
                                                                << 0x0000003dU) 
                                                               | (((QData)((IData)(
                                                                                vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[5U])) 
                                                                   << 0x0000001dU) 
                                                                  | ((QData)((IData)(
                                                                                vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[4U])) 
                                                                     >> 3U)))) 
                                                      >> 0x0000000bU)) 
                                                  | ((IData)(
                                                             ((((QData)((IData)(
                                                                                vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[6U])) 
                                                                << 0x0000003dU) 
                                                               | (((QData)((IData)(
                                                                                vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[5U])) 
                                                                   << 0x0000001dU) 
                                                                  | ((QData)((IData)(
                                                                                vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[4U])) 
                                                                     >> 3U))) 
                                                              >> 0x00000020U)) 
                                                     << 0x00000015U)));
    __Vtemp_13[4U] = ((0x000003ffU & ((IData)(((((QData)((IData)(
                                                                 vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[6U])) 
                                                 << 0x0000003dU) 
                                                | (((QData)((IData)(
                                                                    vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[5U])) 
                                                    << 0x0000001dU) 
                                                   | ((QData)((IData)(
                                                                      vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[4U])) 
                                                      >> 3U))) 
                                               >> 0x00000020U)) 
                                      >> 0x0000000bU)) 
                      | (0x001ffc00U & ((IData)(((((QData)((IData)(
                                                                   vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[6U])) 
                                                   << 0x0000003dU) 
                                                  | (((QData)((IData)(
                                                                      vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[5U])) 
                                                      << 0x0000001dU) 
                                                     | ((QData)((IData)(
                                                                        vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[4U])) 
                                                        >> 3U))) 
                                                 >> 0x00000020U)) 
                                        >> 0x0000000bU)));
    __Vtemp_16[2U] = ((((IData)((((QData)((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[6U])) 
                                  << 0x0000003dU) | 
                                 (((QData)((IData)(
                                                   vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[5U])) 
                                   << 0x0000001dU) 
                                  | ((QData)((IData)(
                                                     vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[4U])) 
                                     >> 3U)))) << 0x00000015U) 
                       | ((((0x00000038U & (vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[4U] 
                                            << 3U)) 
                            | (7U & (vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[3U] 
                                     >> 0x00000019U))) 
                           << 0x0000000fU) | (((0x00000018U 
                                                & (vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[3U] 
                                                   >> 0x00000012U)) 
                                               | ((4U 
                                                   & (vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[3U] 
                                                      >> 0x00000011U)) 
                                                  | (3U 
                                                     & (vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[3U] 
                                                        >> 0x00000011U)))) 
                                              << 0x0000000aU))) 
                      | ((IData)(((((QData)((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__EX_ALU_result)) 
                                    << 0x00000020U) 
                                   | (QData)((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__EX_rs2_data_final))) 
                                  >> 0x00000020U)) 
                         >> 0x00000016U));
    __Vtemp_16[3U] = (((0x000003ffU & ((IData)((((QData)((IData)(
                                                                 vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[6U])) 
                                                 << 0x0000003dU) 
                                                | (((QData)((IData)(
                                                                    vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[5U])) 
                                                    << 0x0000001dU) 
                                                   | ((QData)((IData)(
                                                                      vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[4U])) 
                                                      >> 3U)))) 
                                       >> 0x0000000bU)) 
                       | ((0x000003ffU & (((0x00000038U 
                                            & (vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[4U] 
                                               << 3U)) 
                                           | (7U & 
                                              (vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[3U] 
                                               >> 0x00000019U))) 
                                          >> 0x00000011U)) 
                          | (((0x00000018U & (vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[3U] 
                                              >> 0x00000012U)) 
                              | ((4U & (vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[3U] 
                                        >> 0x00000011U)) 
                                 | (3U & (vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[3U] 
                                          >> 0x00000011U)))) 
                             >> 0x00000016U))) | ((0x001ffc00U 
                                                   & ((IData)(
                                                              (((QData)((IData)(
                                                                                vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[6U])) 
                                                                << 0x0000003dU) 
                                                               | (((QData)((IData)(
                                                                                vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[5U])) 
                                                                   << 0x0000001dU) 
                                                                  | ((QData)((IData)(
                                                                                vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[4U])) 
                                                                     >> 3U)))) 
                                                      >> 0x0000000bU)) 
                                                  | ((IData)(
                                                             ((((QData)((IData)(
                                                                                vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[6U])) 
                                                                << 0x0000003dU) 
                                                               | (((QData)((IData)(
                                                                                vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[5U])) 
                                                                   << 0x0000001dU) 
                                                                  | ((QData)((IData)(
                                                                                vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[4U])) 
                                                                     >> 3U))) 
                                                              >> 0x00000020U)) 
                                                     << 0x00000015U)));
    __Vtemp_16[4U] = ((0x000003ffU & ((IData)(((((QData)((IData)(
                                                                 vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[6U])) 
                                                 << 0x0000003dU) 
                                                | (((QData)((IData)(
                                                                    vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[5U])) 
                                                    << 0x0000001dU) 
                                                   | ((QData)((IData)(
                                                                      vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[4U])) 
                                                      >> 3U))) 
                                               >> 0x00000020U)) 
                                      >> 0x0000000bU)) 
                      | (0x001ffc00U & ((IData)(((((QData)((IData)(
                                                                   vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[6U])) 
                                                   << 0x0000003dU) 
                                                  | (((QData)((IData)(
                                                                      vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[5U])) 
                                                      << 0x0000001dU) 
                                                     | ((QData)((IData)(
                                                                        vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[4U])) 
                                                        >> 3U))) 
                                                 >> 0x00000020U)) 
                                        >> 0x0000000bU)));
    vlSelfRef.top_tb__DOT__DUT__DOT__web = 0U;
    if (vlSelfRef.rst_n) {
        if (((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__ID_Flush) 
             | (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__EX_Flush))) {
            vlSelfRef.top_tb__DOT__DUT__DOT__MEM_WB[0U] 
                = (IData)((((QData)((IData)(((0x00000380U 
                                              & (vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[2U] 
                                                 >> 0x0000000bU)) 
                                             | ((0x00000070U 
                                                 & (vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[2U] 
                                                    >> 0x0000000bU)) 
                                                | ((0x0000000cU 
                                                    & (vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[2U] 
                                                       >> 0x0000000bU)) 
                                                   | ((2U 
                                                       & (vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[2U] 
                                                          >> 0x0000000aU)) 
                                                      | (1U 
                                                         & (vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[2U] 
                                                            >> 0x0000000cU)))))))) 
                            << 0x00000025U) | (((QData)((IData)(
                                                                ((vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[2U] 
                                                                  << 0x00000016U) 
                                                                 | (vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[1U] 
                                                                    >> 0x0000000aU)))) 
                                                << 5U) 
                                               | (QData)((IData)(
                                                                 (0x0000001fU 
                                                                  & vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[0U]))))));
            vlSelfRef.top_tb__DOT__DUT__DOT__MEM_WB[1U] 
                = __Vtemp_1[1U];
            vlSelfRef.top_tb__DOT__DUT__DOT__MEM_WB[2U] 
                = (((IData)((((QData)((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[4U])) 
                              << 0x0000002bU) | (((QData)((IData)(
                                                                  vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[3U])) 
                                                  << 0x0000000bU) 
                                                 | ((QData)((IData)(
                                                                    vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[2U])) 
                                                    >> 0x00000015U)))) 
                    >> 0x00000011U) | ((IData)(((((QData)((IData)(
                                                                  vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[4U])) 
                                                  << 0x0000002bU) 
                                                 | (((QData)((IData)(
                                                                     vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[3U])) 
                                                     << 0x0000000bU) 
                                                    | ((QData)((IData)(
                                                                       vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[2U])) 
                                                       >> 0x00000015U))) 
                                                >> 0x00000020U)) 
                                       << 0x0000000fU));
            vlSelfRef.top_tb__DOT__DUT__DOT__MEM_WB[3U] 
                = __Vtemp_6[3U];
            vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[0U] 
                = __Vtemp_19[0U];
            vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[1U] 
                = __Vtemp_19[1U];
            vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[2U] 
                = __Vtemp_10[2U];
            vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[3U] 
                = __Vtemp_10[3U];
            vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[4U] 
                = __Vtemp_10[4U];
        } else {
            vlSelfRef.top_tb__DOT__DUT__DOT__MEM_WB[0U] 
                = __Vtemp_4[0U];
            if (vlSelfRef.top_tb__DOT__DUT__DOT__ID_Stall) {
                vlSelfRef.top_tb__DOT__DUT__DOT__MEM_WB[1U] 
                    = __Vtemp_2[1U];
                vlSelfRef.top_tb__DOT__DUT__DOT__MEM_WB[2U] 
                    = __Vtemp_4[2U];
                vlSelfRef.top_tb__DOT__DUT__DOT__MEM_WB[3U] 
                    = __Vtemp_6[3U];
                vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[0U] 
                    = __Vtemp_19[0U];
                vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[1U] 
                    = __Vtemp_19[1U];
                vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[2U] 
                    = __Vtemp_13[2U];
                vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[3U] 
                    = __Vtemp_13[3U];
                vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[4U] 
                    = __Vtemp_13[4U];
            } else {
                vlSelfRef.top_tb__DOT__DUT__DOT__MEM_WB[1U] 
                    = __Vtemp_3[1U];
                vlSelfRef.top_tb__DOT__DUT__DOT__MEM_WB[2U] 
                    = __Vtemp_4[2U];
                vlSelfRef.top_tb__DOT__DUT__DOT__MEM_WB[3U] 
                    = __Vtemp_6[3U];
                vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[0U] 
                    = __Vtemp_19[0U];
                vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[1U] 
                    = __Vtemp_19[1U];
                vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[2U] 
                    = __Vtemp_16[2U];
                vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[3U] 
                    = __Vtemp_16[3U];
                vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[4U] 
                    = __Vtemp_16[4U];
            }
        }
    } else {
        vlSelfRef.top_tb__DOT__DUT__DOT__MEM_WB[0U] = 0U;
        vlSelfRef.top_tb__DOT__DUT__DOT__MEM_WB[1U] = 0U;
        vlSelfRef.top_tb__DOT__DUT__DOT__MEM_WB[2U] = 0U;
        vlSelfRef.top_tb__DOT__DUT__DOT__MEM_WB[3U] = 0U;
        vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[0U] = 0U;
        vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[1U] = 0U;
        vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[2U] = 0U;
        vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[3U] = 0U;
        vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[4U] = 0U;
    }
    if ((0x00000400U & vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[2U])) {
        if ((0U == (7U & (vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[2U] 
                          >> 0x00000012U)))) {
            vlSelfRef.top_tb__DOT__DUT__DOT__web = 
                (0x0000000fU & ((IData)(1U) << (3U 
                                                & (vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[1U] 
                                                   >> 0x0000000aU))));
        } else if ((1U == (7U & (vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[2U] 
                                 >> 0x00000012U)))) {
            vlSelfRef.top_tb__DOT__DUT__DOT__web = 
                (0x0000000fU & ((IData)(3U) << (3U 
                                                & (vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[1U] 
                                                   >> 0x0000000aU))));
        } else if ((2U == (7U & (vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[2U] 
                                 >> 0x00000012U)))) {
            vlSelfRef.top_tb__DOT__DUT__DOT__web = 0x0fU;
        }
    }
    vlSelfRef.top_tb__DOT__DUT__DOT__INST11__DOT__MEM_rs2_WB_fwd 
        = (((0x0000001fU & (vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[0U] 
                            >> 5U)) == (0x0000001fU 
                                        & vlSelfRef.top_tb__DOT__DUT__DOT__MEM_WB[0U])) 
           & (IData)(((0x00020400U == (0x00020400U 
                                       & vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[2U])) 
                      & (0x00000240U == (0x00000240U 
                                         & vlSelfRef.top_tb__DOT__DUT__DOT__MEM_WB[1U])))));
    __Vtemp_24[2U] = (((IData)((((QData)((IData)((((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__ID_field) 
                                                   << 5U) 
                                                  | (((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__ID_ValidReg) 
                                                      << 2U) 
                                                     | (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__ID_ALUOp))))) 
                                 << 0x00000028U) | 
                                (((QData)((IData)((
                                                   ((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__ID_RegSrc) 
                                                    << 2U) 
                                                   | (((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__ID_ALUSrc) 
                                                       << 1U) 
                                                      | (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__ID_RegWrite))))) 
                                  << 0x00000024U) | 
                                 (((QData)((IData)(
                                                   (((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__ID_MemRead) 
                                                     << 1U) 
                                                    | (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__ID_MemWrite)))) 
                                   << 0x00000022U) 
                                  | (((QData)((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__ID_Branch)) 
                                      << 0x00000021U) 
                                     | (((QData)((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__ID_Jump)) 
                                         << 0x00000020U) 
                                        | (QData)((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__ID_rs1_data)))))))) 
                       << 0x0000000fU) | ((IData)((
                                                   (((QData)((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__ID_rs2_data)) 
                                                     << 0x00000020U) 
                                                    | (QData)((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__ID_imm))) 
                                                   >> 0x00000020U)) 
                                          >> 0x00000011U));
    __Vtemp_24[3U] = (((IData)((((QData)((IData)((((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__ID_field) 
                                                   << 5U) 
                                                  | (((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__ID_ValidReg) 
                                                      << 2U) 
                                                     | (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__ID_ALUOp))))) 
                                 << 0x00000028U) | 
                                (((QData)((IData)((
                                                   ((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__ID_RegSrc) 
                                                    << 2U) 
                                                   | (((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__ID_ALUSrc) 
                                                       << 1U) 
                                                      | (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__ID_RegWrite))))) 
                                  << 0x00000024U) | 
                                 (((QData)((IData)(
                                                   (((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__ID_MemRead) 
                                                     << 1U) 
                                                    | (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__ID_MemWrite)))) 
                                   << 0x00000022U) 
                                  | (((QData)((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__ID_Branch)) 
                                      << 0x00000021U) 
                                     | (((QData)((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__ID_Jump)) 
                                         << 0x00000020U) 
                                        | (QData)((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__ID_rs1_data)))))))) 
                       >> 0x00000011U) | ((IData)((
                                                   (((QData)((IData)(
                                                                     (((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__ID_field) 
                                                                       << 5U) 
                                                                      | (((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__ID_ValidReg) 
                                                                          << 2U) 
                                                                         | (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__ID_ALUOp))))) 
                                                     << 0x00000028U) 
                                                    | (((QData)((IData)(
                                                                        (((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__ID_RegSrc) 
                                                                          << 2U) 
                                                                         | (((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__ID_ALUSrc) 
                                                                             << 1U) 
                                                                            | (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__ID_RegWrite))))) 
                                                        << 0x00000024U) 
                                                       | (((QData)((IData)(
                                                                           (((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__ID_MemRead) 
                                                                             << 1U) 
                                                                            | (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__ID_MemWrite)))) 
                                                           << 0x00000022U) 
                                                          | (((QData)((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__ID_Branch)) 
                                                              << 0x00000021U) 
                                                             | (((QData)((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__ID_Jump)) 
                                                                 << 0x00000020U) 
                                                                | (QData)((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__ID_rs1_data))))))) 
                                                   >> 0x00000020U)) 
                                          << 0x0000000fU));
    __Vtemp_33[2U] = (((IData)((((QData)((IData)((((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__ID_field) 
                                                   << 5U) 
                                                  | (((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__ID_ValidReg) 
                                                      << 2U) 
                                                     | (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__ID_ALUOp))))) 
                                 << 0x00000028U) | 
                                (((QData)((IData)((
                                                   ((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__ID_RegSrc) 
                                                    << 2U) 
                                                   | (((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__ID_ALUSrc) 
                                                       << 1U) 
                                                      | (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__ID_RegWrite))))) 
                                  << 0x00000024U) | 
                                 (((QData)((IData)(
                                                   (((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__ID_MemRead) 
                                                     << 1U) 
                                                    | (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__ID_MemWrite)))) 
                                   << 0x00000022U) 
                                  | (((QData)((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__ID_Branch)) 
                                      << 0x00000021U) 
                                     | (((QData)((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__ID_Jump)) 
                                         << 0x00000020U) 
                                        | (QData)((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__ID_rs1_data)))))))) 
                       << 0x0000000fU) | ((IData)((
                                                   (((QData)((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__ID_rs2_data)) 
                                                     << 0x00000020U) 
                                                    | (QData)((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__ID_imm))) 
                                                   >> 0x00000020U)) 
                                          >> 0x00000011U));
    __Vtemp_33[3U] = (((IData)((((QData)((IData)((((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__ID_field) 
                                                   << 5U) 
                                                  | (((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__ID_ValidReg) 
                                                      << 2U) 
                                                     | (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__ID_ALUOp))))) 
                                 << 0x00000028U) | 
                                (((QData)((IData)((
                                                   ((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__ID_RegSrc) 
                                                    << 2U) 
                                                   | (((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__ID_ALUSrc) 
                                                       << 1U) 
                                                      | (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__ID_RegWrite))))) 
                                  << 0x00000024U) | 
                                 (((QData)((IData)(
                                                   (((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__ID_MemRead) 
                                                     << 1U) 
                                                    | (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__ID_MemWrite)))) 
                                   << 0x00000022U) 
                                  | (((QData)((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__ID_Branch)) 
                                      << 0x00000021U) 
                                     | (((QData)((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__ID_Jump)) 
                                         << 0x00000020U) 
                                        | (QData)((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__ID_rs1_data)))))))) 
                       >> 0x00000011U) | ((IData)((
                                                   (((QData)((IData)(
                                                                     (((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__ID_field) 
                                                                       << 5U) 
                                                                      | (((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__ID_ValidReg) 
                                                                          << 2U) 
                                                                         | (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__ID_ALUOp))))) 
                                                     << 0x00000028U) 
                                                    | (((QData)((IData)(
                                                                        (((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__ID_RegSrc) 
                                                                          << 2U) 
                                                                         | (((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__ID_ALUSrc) 
                                                                             << 1U) 
                                                                            | (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__ID_RegWrite))))) 
                                                        << 0x00000024U) 
                                                       | (((QData)((IData)(
                                                                           (((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__ID_MemRead) 
                                                                             << 1U) 
                                                                            | (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__ID_MemWrite)))) 
                                                           << 0x00000022U) 
                                                          | (((QData)((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__ID_Branch)) 
                                                              << 0x00000021U) 
                                                             | (((QData)((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__ID_Jump)) 
                                                                 << 0x00000020U) 
                                                                | (QData)((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__ID_rs1_data))))))) 
                                                   >> 0x00000020U)) 
                                          << 0x0000000fU));
    if (vlSelfRef.rst_n) {
        vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[0U] 
            = __Vtemp_37[0U];
        vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[1U] 
            = __Vtemp_37[1U];
        if (((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__ID_Flush) 
             | (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__EX_Flush))) {
            if (vlSelfRef.top_tb__DOT__DUT__DOT__EX_Flush) {
                vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[2U] = 0U;
                vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[3U] = 0U;
                vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[4U] = 0U;
                vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[5U] 
                    = __Vtemp_37[5U];
                vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[6U] = 0U;
            } else {
                vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[2U] 
                    = __Vtemp_24[2U];
                vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[3U] 
                    = __Vtemp_24[3U];
                vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[4U] 
                    = (((IData)((((QData)((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__IF_ID)) 
                                  << 0x00000020U) | (QData)((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__ID_pc_imm)))) 
                        << 3U) | (7U & (vlSelfRef.top_tb__DOT__DUT__DOT__ID_instruction 
                                        >> 0x0000000cU)));
                vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[5U] 
                    = __Vtemp_37[5U];
                vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[6U] 
                    = ((IData)(((((QData)((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__IF_ID)) 
                                  << 0x00000020U) | (QData)((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__ID_pc_imm))) 
                                >> 0x00000020U)) >> 0x0000001dU);
            }
        } else if (vlSelfRef.top_tb__DOT__DUT__DOT__ID_Stall) {
            vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[2U] 
                = (((IData)((((QData)((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__EX_rs1_data_final)) 
                              << 0x00000020U) | (QData)((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__EX_rs2_data_final)))) 
                    >> 0x00000011U) | ((IData)(((((QData)((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__EX_rs1_data_final)) 
                                                  << 0x00000020U) 
                                                 | (QData)((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__EX_rs2_data_final))) 
                                                >> 0x00000020U)) 
                                       << 0x0000000fU));
            vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[3U] 
                = ((IData)(((((QData)((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__EX_rs1_data_final)) 
                              << 0x00000020U) | (QData)((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__EX_rs2_data_final))) 
                            >> 0x00000020U)) >> 0x00000011U);
            vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[4U] 
                = ((IData)((((QData)((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__EX_pc)) 
                             << 0x00000020U) | (QData)((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__EX_pc_imm)))) 
                   << 3U);
            vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[5U] 
                = __Vtemp_37[5U];
            vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[6U] 
                = ((IData)(((((QData)((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__EX_pc)) 
                              << 0x00000020U) | (QData)((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__EX_pc_imm))) 
                            >> 0x00000020U)) >> 0x0000001dU);
        } else {
            vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[2U] 
                = __Vtemp_33[2U];
            vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[3U] 
                = __Vtemp_33[3U];
            vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[4U] 
                = (((IData)((((QData)((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__IF_ID)) 
                              << 0x00000020U) | (QData)((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__ID_pc_imm)))) 
                    << 3U) | (7U & (vlSelfRef.top_tb__DOT__DUT__DOT__ID_instruction 
                                    >> 0x0000000cU)));
            vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[5U] 
                = __Vtemp_37[5U];
            vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[6U] 
                = ((IData)(((((QData)((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__IF_ID)) 
                              << 0x00000020U) | (QData)((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__ID_pc_imm))) 
                            >> 0x00000020U)) >> 0x0000001dU);
        }
    } else {
        vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[0U] = 0U;
        vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[1U] = 0U;
        vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[2U] = 0U;
        vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[3U] = 0U;
        vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[4U] = 0U;
        vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[5U] = 0U;
        vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[6U] = 0U;
    }
    vlSelfRef.top_tb__DOT__DUT__DOT__IF_ID = vlSelfRef.__Vdly__top_tb__DOT__DUT__DOT__IF_ID;
    vlSelfRef.top_tb__DOT__DUT__DOT__EX_pc_imm = ((
                                                   vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[5U] 
                                                   << 0x0000001dU) 
                                                  | (vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[4U] 
                                                     >> 3U));
    vlSelfRef.top_tb__DOT__DUT__DOT__EX_rs1 = (0x0000001fU 
                                               & (vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[0U] 
                                                  >> 5U));
    vlSelfRef.top_tb__DOT__DUT__DOT__EX_rs2 = (0x0000001fU 
                                               & vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[0U]);
    vlSelfRef.top_tb__DOT__DUT__DOT__EX_rd = (0x0000001fU 
                                              & (vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[0U] 
                                                 >> 0x0000000aU));
    vlSelfRef.top_tb__DOT__DUT__DOT__EX_pc = ((vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[6U] 
                                               << 0x0000001dU) 
                                              | (vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[5U] 
                                                 >> 3U));
    vlSelfRef.top_tb__DOT__DUT__DOT__EX_imm = ((vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[1U] 
                                                << 0x00000011U) 
                                               | (vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[0U] 
                                                  >> 0x0000000fU));
    vlSelfRef.top_tb__DOT__DUT__DOT__INST11__DOT__EX_rs2_MEM_fwd 
        = (((0x0000001fU & vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[0U]) 
            == (0x0000001fU & vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[0U])) 
           & (IData)(((0x00008000U == (0x00008800U 
                                       & vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[2U])) 
                      & (vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[3U] 
                         >> 0x0000001bU))));
    vlSelfRef.top_tb__DOT__DUT__DOT__INST11__DOT__EX_rs2_WB_fwd 
        = (((0x0000001fU & vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[0U]) 
            == (0x0000001fU & vlSelfRef.top_tb__DOT__DUT__DOT__MEM_WB[0U])) 
           & ((vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[3U] 
               >> 0x0000001bU) & (vlSelfRef.top_tb__DOT__DUT__DOT__MEM_WB[1U] 
                                  >> 9U)));
    vlSelfRef.top_tb__DOT__DUT__DOT__INST11__DOT__EX_rs1_MEM_fwd 
        = (((0x0000001fU & (vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[0U] 
                            >> 5U)) == (0x0000001fU 
                                        & vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[0U])) 
           & (IData)(((0x00008000U == (0x00008800U 
                                       & vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[2U])) 
                      & (vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[3U] 
                         >> 0x0000001aU))));
    vlSelfRef.top_tb__DOT__DUT__DOT__INST11__DOT__EX_rs1_WB_fwd 
        = (((0x0000001fU & (vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[0U] 
                            >> 5U)) == (0x0000001fU 
                                        & vlSelfRef.top_tb__DOT__DUT__DOT__MEM_WB[0U])) 
           & ((vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[3U] 
               >> 0x0000001aU) & (vlSelfRef.top_tb__DOT__DUT__DOT__MEM_WB[1U] 
                                  >> 9U)));
}

extern const VlUnpacked<CData/*1:0*/, 128> Vtop_tb__ConstPool__TABLE_hf391fe1a_0;
extern const VlUnpacked<CData/*1:0*/, 128> Vtop_tb__ConstPool__TABLE_hc8bbad6f_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop_tb__ConstPool__TABLE_hed3d3de8_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop_tb__ConstPool__TABLE_haa79455a_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop_tb__ConstPool__TABLE_h07b8af5e_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop_tb__ConstPool__TABLE_hc64fce2b_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop_tb__ConstPool__TABLE_hf4dbd913_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop_tb__ConstPool__TABLE_haff683e6_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop_tb__ConstPool__TABLE_hf06aff4b_0;
extern const VlUnpacked<CData/*2:0*/, 128> Vtop_tb__ConstPool__TABLE_hf7ffb2d9_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vtop_tb__ConstPool__TABLE_h40980361_0;

void Vtop_tb___024root___nba_comb__TOP__0(Vtop_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___nba_comb__TOP__0\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*7:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    vlSelfRef.top_tb__DOT__DUT__DOT__INST9__DOT__DMEM_shifted_word 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.top_tb__DOT__DUT__DOT__dob, 
                        VL_SHIFTL_III(32,32,32, (3U 
                                                 & (vlSelfRef.top_tb__DOT__DUT__DOT__MEM_WB[0U] 
                                                    >> 5U)), 3U));
    vlSelfRef.top_tb__DOT__DUT__DOT__ID_instruction 
        = ((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__ID_PostFlush)
            ? 0U : vlSelfRef.top_tb__DOT__DUT__DOT__doa);
    if ((0U == (7U & (vlSelfRef.top_tb__DOT__DUT__DOT__MEM_WB[1U] 
                      >> 0x0000000cU)))) {
        vlSelfRef.top_tb__DOT__DUT__DOT__INST9__DOT__DMEM_result 
            = (((- (IData)((1U & (vlSelfRef.top_tb__DOT__DUT__DOT__INST9__DOT__DMEM_shifted_word 
                                  >> 7U)))) << 8U) 
               | (0x000000ffU & vlSelfRef.top_tb__DOT__DUT__DOT__INST9__DOT__DMEM_shifted_word));
    } else if ((1U == (7U & (vlSelfRef.top_tb__DOT__DUT__DOT__MEM_WB[1U] 
                             >> 0x0000000cU)))) {
        vlSelfRef.top_tb__DOT__DUT__DOT__INST9__DOT__DMEM_result 
            = (((- (IData)((1U & (vlSelfRef.top_tb__DOT__DUT__DOT__INST9__DOT__DMEM_shifted_word 
                                  >> 0x0000000fU)))) 
                << 0x00000010U) | (0x0000ffffU & vlSelfRef.top_tb__DOT__DUT__DOT__INST9__DOT__DMEM_shifted_word));
    } else if ((2U == (7U & (vlSelfRef.top_tb__DOT__DUT__DOT__MEM_WB[1U] 
                             >> 0x0000000cU)))) {
        vlSelfRef.top_tb__DOT__DUT__DOT__INST9__DOT__DMEM_result 
            = vlSelfRef.top_tb__DOT__DUT__DOT__INST9__DOT__DMEM_shifted_word;
    } else if ((4U == (7U & (vlSelfRef.top_tb__DOT__DUT__DOT__MEM_WB[1U] 
                             >> 0x0000000cU)))) {
        vlSelfRef.top_tb__DOT__DUT__DOT__INST9__DOT__DMEM_result 
            = (0x000000ffU & vlSelfRef.top_tb__DOT__DUT__DOT__INST9__DOT__DMEM_shifted_word);
    } else if ((5U == (7U & (vlSelfRef.top_tb__DOT__DUT__DOT__MEM_WB[1U] 
                             >> 0x0000000cU)))) {
        vlSelfRef.top_tb__DOT__DUT__DOT__INST9__DOT__DMEM_result 
            = (0x0000ffffU & vlSelfRef.top_tb__DOT__DUT__DOT__INST9__DOT__DMEM_shifted_word);
    }
    if ((0U == (3U & (vlSelfRef.top_tb__DOT__DUT__DOT__MEM_WB[1U] 
                      >> 7U)))) {
        vlSelfRef.top_tb__DOT__DUT__DOT__WB_rd_write_data 
            = ((vlSelfRef.top_tb__DOT__DUT__DOT__MEM_WB[1U] 
                << 0x0000001bU) | (vlSelfRef.top_tb__DOT__DUT__DOT__MEM_WB[0U] 
                                   >> 5U));
    } else if ((1U == (3U & (vlSelfRef.top_tb__DOT__DUT__DOT__MEM_WB[1U] 
                             >> 7U)))) {
        vlSelfRef.top_tb__DOT__DUT__DOT__WB_rd_write_data 
            = vlSelfRef.top_tb__DOT__DUT__DOT__INST9__DOT__DMEM_result;
    } else if ((2U == (3U & (vlSelfRef.top_tb__DOT__DUT__DOT__MEM_WB[1U] 
                             >> 7U)))) {
        vlSelfRef.top_tb__DOT__DUT__DOT__WB_rd_write_data 
            = ((vlSelfRef.top_tb__DOT__DUT__DOT__MEM_WB[2U] 
                << 0x00000011U) | (vlSelfRef.top_tb__DOT__DUT__DOT__MEM_WB[1U] 
                                   >> 0x0000000fU));
    } else if ((3U == (3U & (vlSelfRef.top_tb__DOT__DUT__DOT__MEM_WB[1U] 
                             >> 7U)))) {
        vlSelfRef.top_tb__DOT__DUT__DOT__WB_rd_write_data 
            = ((IData)(4U) + ((vlSelfRef.top_tb__DOT__DUT__DOT__MEM_WB[3U] 
                               << 0x00000011U) | (vlSelfRef.top_tb__DOT__DUT__DOT__MEM_WB[2U] 
                                                  >> 0x0000000fU)));
    }
    vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__opcode 
        = (0x0000007fU & vlSelfRef.top_tb__DOT__DUT__DOT__ID_instruction);
    vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__funct3 
        = (7U & (vlSelfRef.top_tb__DOT__DUT__DOT__ID_instruction 
                 >> 0x0cU));
    if ((0x00000040U & (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__opcode))) {
        if ((0x00000020U & (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__opcode))) {
            if ((0x00000010U & (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__opcode))) {
                vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__intimm1 = 0U;
                vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__intimm2 = 0U;
            } else if ((8U & (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__opcode))) {
                if ((4U & (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__opcode))) {
                    if ((2U & (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__opcode))) {
                        if ((1U & (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__opcode))) {
                            vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__intimm1 = 0U;
                            vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__intimm2 
                                = ((0x00080000U & (vlSelfRef.top_tb__DOT__DUT__DOT__ID_instruction 
                                                   >> 0x0000000cU)) 
                                   | ((0x0007f800U 
                                       & (vlSelfRef.top_tb__DOT__DUT__DOT__ID_instruction 
                                          >> 1U)) | 
                                      ((0x00000400U 
                                        & (vlSelfRef.top_tb__DOT__DUT__DOT__ID_instruction 
                                           >> 0x0000000aU)) 
                                       | (0x000003ffU 
                                          & (vlSelfRef.top_tb__DOT__DUT__DOT__ID_instruction 
                                             >> 0x15U)))));
                        } else {
                            vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__intimm1 = 0U;
                            vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__intimm2 = 0U;
                        }
                    } else {
                        vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__intimm1 = 0U;
                        vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__intimm2 = 0U;
                    }
                } else {
                    vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__intimm1 = 0U;
                    vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__intimm2 = 0U;
                }
            } else if ((4U & (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__opcode))) {
                if ((2U & (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__opcode))) {
                    if ((1U & (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__opcode))) {
                        vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__intimm1 
                            = (0x00000fffU & (((0x13U 
                                                == (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__opcode)) 
                                               & ((1U 
                                                   == (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__funct3)) 
                                                  | (5U 
                                                     == (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__funct3))))
                                               ? (0x0000001fU 
                                                  & (vlSelfRef.top_tb__DOT__DUT__DOT__ID_instruction 
                                                     >> 0x14U))
                                               : (vlSelfRef.top_tb__DOT__DUT__DOT__ID_instruction 
                                                  >> 0x14U)));
                        vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__intimm2 = 0U;
                    } else {
                        vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__intimm1 = 0U;
                        vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__intimm2 = 0U;
                    }
                } else {
                    vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__intimm1 = 0U;
                    vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__intimm2 = 0U;
                }
            } else if ((2U & (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__opcode))) {
                if ((1U & (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__opcode))) {
                    vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__intimm1 
                        = ((((2U & (vlSelfRef.top_tb__DOT__DUT__DOT__ID_instruction 
                                    >> 0x0000001eU)) 
                             | (1U & (vlSelfRef.top_tb__DOT__DUT__DOT__ID_instruction 
                                      >> 7U))) << 0x0000000aU) 
                           | ((0x000003f0U & (vlSelfRef.top_tb__DOT__DUT__DOT__ID_instruction 
                                              >> 0x00000015U)) 
                              | (0x0000000fU & (vlSelfRef.top_tb__DOT__DUT__DOT__ID_instruction 
                                                >> 8U))));
                    vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__intimm2 = 0U;
                } else {
                    vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__intimm1 = 0U;
                    vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__intimm2 = 0U;
                }
            } else {
                vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__intimm1 = 0U;
                vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__intimm2 = 0U;
            }
        } else {
            vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__intimm1 = 0U;
            vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__intimm2 = 0U;
        }
    } else if ((0x00000020U & (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__opcode))) {
        if ((0x00000010U & (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__opcode))) {
            if ((8U & (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__opcode))) {
                vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__intimm1 = 0U;
                vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__intimm2 = 0U;
            } else if ((4U & (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__opcode))) {
                if ((2U & (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__opcode))) {
                    if ((1U & (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__opcode))) {
                        vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__intimm1 = 0U;
                        vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__intimm2 
                            = (vlSelfRef.top_tb__DOT__DUT__DOT__ID_instruction 
                               >> 0x0cU);
                    } else {
                        vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__intimm1 = 0U;
                        vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__intimm2 = 0U;
                    }
                } else {
                    vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__intimm1 = 0U;
                    vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__intimm2 = 0U;
                }
            } else {
                vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__intimm1 = 0U;
                vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__intimm2 = 0U;
            }
        } else if ((8U & (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__opcode))) {
            vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__intimm1 = 0U;
            vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__intimm2 = 0U;
        } else if ((4U & (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__opcode))) {
            vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__intimm1 = 0U;
            vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__intimm2 = 0U;
        } else if ((2U & (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__opcode))) {
            if ((1U & (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__opcode))) {
                vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__intimm1 
                    = ((0x00000fe0U & (vlSelfRef.top_tb__DOT__DUT__DOT__ID_instruction 
                                       >> 0x00000014U)) 
                       | (0x0000001fU & (vlSelfRef.top_tb__DOT__DUT__DOT__ID_instruction 
                                         >> 7U)));
                vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__intimm2 = 0U;
            } else {
                vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__intimm1 = 0U;
                vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__intimm2 = 0U;
            }
        } else {
            vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__intimm1 = 0U;
            vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__intimm2 = 0U;
        }
    } else if ((0x00000010U & (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__opcode))) {
        if ((8U & (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__opcode))) {
            vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__intimm1 = 0U;
            vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__intimm2 = 0U;
        } else if ((4U & (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__opcode))) {
            if ((2U & (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__opcode))) {
                if ((1U & (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__opcode))) {
                    vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__intimm1 = 0U;
                    vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__intimm2 
                        = (vlSelfRef.top_tb__DOT__DUT__DOT__ID_instruction 
                           >> 0x0cU);
                } else {
                    vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__intimm1 = 0U;
                    vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__intimm2 = 0U;
                }
            } else {
                vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__intimm1 = 0U;
                vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__intimm2 = 0U;
            }
        } else if ((2U & (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__opcode))) {
            if ((1U & (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__opcode))) {
                vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__intimm1 
                    = (0x00000fffU & (((0x13U == (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__opcode)) 
                                       & ((1U == (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__funct3)) 
                                          | (5U == (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__funct3))))
                                       ? (0x0000001fU 
                                          & (vlSelfRef.top_tb__DOT__DUT__DOT__ID_instruction 
                                             >> 0x14U))
                                       : (vlSelfRef.top_tb__DOT__DUT__DOT__ID_instruction 
                                          >> 0x14U)));
                vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__intimm2 = 0U;
            } else {
                vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__intimm1 = 0U;
                vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__intimm2 = 0U;
            }
        } else {
            vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__intimm1 = 0U;
            vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__intimm2 = 0U;
        }
    } else if ((8U & (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__opcode))) {
        if ((4U & (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__opcode))) {
            if ((2U & (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__opcode))) {
                if ((1U & (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__opcode))) {
                    vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__intimm1 
                        = (0x00000fffU & (((0x13U == (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__opcode)) 
                                           & ((1U == (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__funct3)) 
                                              | (5U 
                                                 == (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__funct3))))
                                           ? (0x0000001fU 
                                              & (vlSelfRef.top_tb__DOT__DUT__DOT__ID_instruction 
                                                 >> 0x14U))
                                           : (vlSelfRef.top_tb__DOT__DUT__DOT__ID_instruction 
                                              >> 0x14U)));
                    vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__intimm2 = 0U;
                } else {
                    vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__intimm1 = 0U;
                    vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__intimm2 = 0U;
                }
            } else {
                vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__intimm1 = 0U;
                vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__intimm2 = 0U;
            }
        } else {
            vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__intimm1 = 0U;
            vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__intimm2 = 0U;
        }
    } else if ((4U & (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__opcode))) {
        vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__intimm1 = 0U;
        vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__intimm2 = 0U;
    } else if ((2U & (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__opcode))) {
        if ((1U & (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__opcode))) {
            vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__intimm1 
                = (0x00000fffU & (((0x13U == (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__opcode)) 
                                   & ((1U == (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__funct3)) 
                                      | (5U == (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__funct3))))
                                   ? (0x0000001fU & 
                                      (vlSelfRef.top_tb__DOT__DUT__DOT__ID_instruction 
                                       >> 0x14U)) : 
                                  (vlSelfRef.top_tb__DOT__DUT__DOT__ID_instruction 
                                   >> 0x14U)));
            vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__intimm2 = 0U;
        } else {
            vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__intimm1 = 0U;
            vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__intimm2 = 0U;
        }
    } else {
        vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__intimm1 = 0U;
        vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__intimm2 = 0U;
    }
    vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__imm1 
        = (((- (IData)((1U & ((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__intimm1) 
                              >> 0x0bU)))) << 0x0000000cU) 
           | (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__intimm1));
    vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__imm2 
        = (((- (IData)((1U & (vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__intimm2 
                              >> 0x13U)))) << 0x00000015U) 
           | (vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__intimm2 
              << 1U));
    vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__imm3 
        = (vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__intimm2 
           << 0x0000000cU);
    vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__imm4 
        = (((- (IData)((1U & ((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__intimm1) 
                              >> 0x0bU)))) << 0x0000000dU) 
           | ((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__intimm1) 
              << 1U));
    vlSelfRef.top_tb__DOT__DUT__DOT__ID_imm = ((0x00000040U 
                                                & (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__opcode))
                                                ? (
                                                   (0x00000020U 
                                                    & (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__opcode))
                                                    ? 
                                                   ((0x00000010U 
                                                     & (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__opcode))
                                                     ? vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__imm1
                                                     : 
                                                    ((8U 
                                                      & (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__opcode))
                                                      ? 
                                                     ((4U 
                                                       & (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__opcode))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__opcode))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__opcode))
                                                         ? vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__imm2
                                                         : vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__imm1)
                                                        : vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__imm1)
                                                       : vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__imm1)
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__opcode))
                                                       ? vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__imm1
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__opcode))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__opcode))
                                                         ? vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__imm4
                                                         : vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__imm1)
                                                        : vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__imm1))))
                                                    : vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__imm1)
                                                : (
                                                   (0x00000010U 
                                                    & (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__opcode))
                                                    ? 
                                                   ((8U 
                                                     & (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__opcode))
                                                     ? vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__imm1
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__opcode))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__opcode))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__opcode))
                                                        ? vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__imm3
                                                        : vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__imm1)
                                                       : vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__imm1)
                                                      : vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__imm1))
                                                    : vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__imm1));
    __Vtableidx1 = (0x0000007fU & vlSelfRef.top_tb__DOT__DUT__DOT__ID_instruction);
    vlSelfRef.top_tb__DOT__DUT__DOT__ID_ALUOp = Vtop_tb__ConstPool__TABLE_hf391fe1a_0
        [__Vtableidx1];
    vlSelfRef.top_tb__DOT__DUT__DOT__ID_RegSrc = Vtop_tb__ConstPool__TABLE_hc8bbad6f_0
        [__Vtableidx1];
    vlSelfRef.top_tb__DOT__DUT__DOT__ID_ALUSrc = Vtop_tb__ConstPool__TABLE_hed3d3de8_0
        [__Vtableidx1];
    vlSelfRef.top_tb__DOT__DUT__DOT__ID_RegWrite = 
        Vtop_tb__ConstPool__TABLE_haa79455a_0[__Vtableidx1];
    vlSelfRef.top_tb__DOT__DUT__DOT__ID_MemRead = Vtop_tb__ConstPool__TABLE_h07b8af5e_0
        [__Vtableidx1];
    vlSelfRef.top_tb__DOT__DUT__DOT__ID_MemWrite = 
        Vtop_tb__ConstPool__TABLE_hc64fce2b_0[__Vtableidx1];
    vlSelfRef.top_tb__DOT__DUT__DOT__ID_Branch = Vtop_tb__ConstPool__TABLE_hf4dbd913_0
        [__Vtableidx1];
    vlSelfRef.top_tb__DOT__DUT__DOT__ID_Jump = Vtop_tb__ConstPool__TABLE_haff683e6_0
        [__Vtableidx1];
    vlSelfRef.top_tb__DOT__DUT__DOT__INST2__DOT__ZeroOp 
        = Vtop_tb__ConstPool__TABLE_hf06aff4b_0[__Vtableidx1];
    vlSelfRef.top_tb__DOT__DUT__DOT__ID_ValidReg = 
        Vtop_tb__ConstPool__TABLE_hf7ffb2d9_0[__Vtableidx1];
    if (vlSelfRef.top_tb__DOT__DUT__DOT__INST11__DOT__MEM_rs2_WB_fwd) {
        vlSelfRef.top_tb__DOT__DUT__DOT__MEM_rs2_fwd_data 
            = vlSelfRef.top_tb__DOT__DUT__DOT__WB_rd_write_data;
    }
    vlSelfRef.top_tb__DOT__DUT__DOT__ID_rs1_data = 
        (((vlSelfRef.top_tb__DOT__DUT__DOT__MEM_WB[1U] 
           >> 5U) & (((0x0000001fU & vlSelfRef.top_tb__DOT__DUT__DOT__MEM_WB[0U]) 
                      == (0x0000001fU & (vlSelfRef.top_tb__DOT__DUT__DOT__ID_instruction 
                                         >> 0x0000000fU))) 
                     & (0U != (0x0000001fU & (vlSelfRef.top_tb__DOT__DUT__DOT__ID_instruction 
                                              >> 0x0000000fU)))))
          ? vlSelfRef.top_tb__DOT__DUT__DOT__WB_rd_write_data
          : vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__reg_file
         [(0x0000001fU & (vlSelfRef.top_tb__DOT__DUT__DOT__ID_instruction 
                          >> 0x0000000fU))]);
    vlSelfRef.top_tb__DOT__DUT__DOT__ID_rs2_data = 
        (((vlSelfRef.top_tb__DOT__DUT__DOT__MEM_WB[1U] 
           >> 5U) & (((0x0000001fU & vlSelfRef.top_tb__DOT__DUT__DOT__MEM_WB[0U]) 
                      == (0x0000001fU & (vlSelfRef.top_tb__DOT__DUT__DOT__ID_instruction 
                                         >> 0x00000014U))) 
                     & (0U != (0x0000001fU & (vlSelfRef.top_tb__DOT__DUT__DOT__ID_instruction 
                                              >> 0x00000014U)))))
          ? vlSelfRef.top_tb__DOT__DUT__DOT__WB_rd_write_data
          : vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__reg_file
         [(0x0000001fU & (vlSelfRef.top_tb__DOT__DUT__DOT__ID_instruction 
                          >> 0x00000014U))]);
    if ((0U == (3U & (vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[2U] 
                      >> 0x0000000dU)))) {
        vlSelfRef.top_tb__DOT__DUT__DOT__INST11__DOT__MEM_rd_write_data 
            = ((vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[2U] 
                << 0x00000016U) | (vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[1U] 
                                   >> 0x0000000aU));
    } else if ((2U == (3U & (vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[2U] 
                             >> 0x0000000dU)))) {
        vlSelfRef.top_tb__DOT__DUT__DOT__INST11__DOT__MEM_rd_write_data 
            = ((vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[3U] 
                << 0x0000000bU) | (vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[2U] 
                                   >> 0x00000015U));
    } else if ((3U == (3U & (vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[2U] 
                             >> 0x0000000dU)))) {
        vlSelfRef.top_tb__DOT__DUT__DOT__INST11__DOT__MEM_rd_write_data 
            = ((IData)(4U) + ((vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[4U] 
                               << 0x0000000bU) | (vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[3U] 
                                                  >> 0x00000015U)));
    }
    if (vlSelfRef.top_tb__DOT__DUT__DOT__INST11__DOT__EX_rs1_MEM_fwd) {
        vlSelfRef.top_tb__DOT__DUT__DOT__EX_rs1_fwd_data 
            = vlSelfRef.top_tb__DOT__DUT__DOT__INST11__DOT__MEM_rd_write_data;
    }
    if (vlSelfRef.top_tb__DOT__DUT__DOT__INST11__DOT__EX_rs2_MEM_fwd) {
        vlSelfRef.top_tb__DOT__DUT__DOT__EX_rs2_fwd_data 
            = vlSelfRef.top_tb__DOT__DUT__DOT__INST11__DOT__MEM_rd_write_data;
    }
    if (vlSelfRef.top_tb__DOT__DUT__DOT__INST11__DOT__EX_rs1_WB_fwd) {
        vlSelfRef.top_tb__DOT__DUT__DOT__EX_rs1_fwd_data 
            = ((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST11__DOT__EX_rs1_MEM_fwd)
                ? (((0x0000001fU & vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[0U]) 
                    != (0x0000001fU & vlSelfRef.top_tb__DOT__DUT__DOT__MEM_WB[0U]))
                    ? vlSelfRef.top_tb__DOT__DUT__DOT__WB_rd_write_data
                    : vlSelfRef.top_tb__DOT__DUT__DOT__INST11__DOT__MEM_rd_write_data)
                : vlSelfRef.top_tb__DOT__DUT__DOT__WB_rd_write_data);
    }
    if (vlSelfRef.top_tb__DOT__DUT__DOT__INST11__DOT__EX_rs2_WB_fwd) {
        vlSelfRef.top_tb__DOT__DUT__DOT__EX_rs2_fwd_data 
            = ((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST11__DOT__EX_rs2_MEM_fwd)
                ? (((0x0000001fU & vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[0U]) 
                    != (0x0000001fU & vlSelfRef.top_tb__DOT__DUT__DOT__MEM_WB[0U]))
                    ? vlSelfRef.top_tb__DOT__DUT__DOT__WB_rd_write_data
                    : vlSelfRef.top_tb__DOT__DUT__DOT__INST11__DOT__MEM_rd_write_data)
                : vlSelfRef.top_tb__DOT__DUT__DOT__WB_rd_write_data);
    }
    vlSelfRef.top_tb__DOT__DUT__DOT__ID_pc_imm = (vlSelfRef.top_tb__DOT__DUT__DOT__ID_imm 
                                                  + vlSelfRef.top_tb__DOT__DUT__DOT__IF_ID);
    if ((0U == (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__ID_ALUOp))) {
        vlSelfRef.top_tb__DOT__DUT__DOT__ID_field = 
            ((0x00000020U & vlSelfRef.top_tb__DOT__DUT__DOT__ID_instruction)
              ? ((8U & (vlSelfRef.top_tb__DOT__DUT__DOT__ID_instruction 
                        >> 0x0000001bU)) | (7U & (vlSelfRef.top_tb__DOT__DUT__DOT__ID_instruction 
                                                  >> 0x0000000cU)))
              : (((1U == (7U & (vlSelfRef.top_tb__DOT__DUT__DOT__ID_instruction 
                                >> 0x0000000cU))) | 
                  (5U == (7U & (vlSelfRef.top_tb__DOT__DUT__DOT__ID_instruction 
                                >> 0x0000000cU)))) ? 
                 ((8U & (vlSelfRef.top_tb__DOT__DUT__DOT__ID_instruction 
                         >> 0x0000001bU)) | (7U & (vlSelfRef.top_tb__DOT__DUT__DOT__ID_instruction 
                                                   >> 0x0000000cU)))
                  : (7U & (vlSelfRef.top_tb__DOT__DUT__DOT__ID_instruction 
                           >> 0x0000000cU))));
    } else if ((1U == (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__ID_ALUOp))) {
        vlSelfRef.top_tb__DOT__DUT__DOT__ID_field = 0U;
    } else if ((2U == (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__ID_ALUOp))) {
        vlSelfRef.top_tb__DOT__DUT__DOT__ID_field = 8U;
    }
    vlSelfRef.top_tb__DOT__DUT__DOT__ID_Stall = ((vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[3U] 
                                                  >> 0x00000012U) 
                                                 & ((~ (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__ID_MemWrite)) 
                                                    & ((((0x0000001fU 
                                                          & (vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[0U] 
                                                             >> 0x0000000aU)) 
                                                         == 
                                                         (0x0000001fU 
                                                          & (vlSelfRef.top_tb__DOT__DUT__DOT__ID_instruction 
                                                             >> 0x0000000fU))) 
                                                        & ((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__ID_ValidReg) 
                                                           >> 1U)) 
                                                       | (((0x0000001fU 
                                                            & (vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[0U] 
                                                               >> 0x0000000aU)) 
                                                           == 
                                                           (0x0000001fU 
                                                            & (vlSelfRef.top_tb__DOT__DUT__DOT__ID_instruction 
                                                               >> 0x00000014U))) 
                                                          & ((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__ID_ValidReg) 
                                                             >> 2U)))));
    vlSelfRef.top_tb__DOT__DUT__DOT__MEM_rs2_data_final 
        = (((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST11__DOT__MEM_rs2_WB_fwd) 
            & (0U != (0x0000001fU & (vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[0U] 
                                     >> 5U)))) ? vlSelfRef.top_tb__DOT__DUT__DOT__MEM_rs2_fwd_data
            : ((vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[1U] 
                << 0x00000016U) | (vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[0U] 
                                   >> 0x0000000aU)));
    vlSelfRef.top_tb__DOT__DUT__DOT__EX_rs2_data_final 
        = ((((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST11__DOT__EX_rs2_MEM_fwd) 
             | (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST11__DOT__EX_rs2_WB_fwd)) 
            & (0U != (0x0000001fU & vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[0U])))
            ? vlSelfRef.top_tb__DOT__DUT__DOT__EX_rs2_fwd_data
            : ((vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[2U] 
                << 0x00000011U) | (vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[1U] 
                                   >> 0x0000000fU)));
    vlSelfRef.top_tb__DOT__DUT__DOT__EX_rs1_data_final 
        = ((((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST11__DOT__EX_rs1_MEM_fwd) 
             | (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST11__DOT__EX_rs1_WB_fwd)) 
            & (0U != (0x0000001fU & (vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[0U] 
                                     >> 5U)))) ? vlSelfRef.top_tb__DOT__DUT__DOT__EX_rs1_fwd_data
            : ((vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[3U] 
                << 0x00000011U) | (vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[2U] 
                                   >> 0x0000000fU)));
    vlSelfRef.top_tb__DOT__DUT__DOT__INST1__DOT__addra 
        = ((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__ID_Stall)
            ? vlSelfRef.top_tb__DOT__DUT__DOT__IF_ID
            : vlSelfRef.top_tb__DOT__DUT__DOT__IF_pc);
    vlSelfRef.top_tb__DOT__DUT__DOT__dib = 0U;
    if ((0x00000400U & vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[2U])) {
        if ((0U == (7U & (vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[2U] 
                          >> 0x00000012U)))) {
            vlSelfRef.top_tb__DOT__DUT__DOT__dib = 
                (((~ ((IData)(0x000000ffU) << (0x0000001fU 
                                               & VL_SHIFTL_III(5,32,32, 
                                                               (3U 
                                                                & (vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[1U] 
                                                                   >> 0x0000000aU)), 3U)))) 
                  & vlSelfRef.top_tb__DOT__DUT__DOT__dib) 
                 | (0x00000000ffffffffULL & ((0x000000ffU 
                                              & vlSelfRef.top_tb__DOT__DUT__DOT__MEM_rs2_data_final) 
                                             << (0x0000001fU 
                                                 & VL_SHIFTL_III(5,32,32, 
                                                                 (3U 
                                                                  & (vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[1U] 
                                                                     >> 0x0000000aU)), 3U)))));
        } else if ((1U == (7U & (vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[2U] 
                                 >> 0x00000012U)))) {
            vlSelfRef.top_tb__DOT__DUT__DOT__dib = 
                (((~ ((IData)(0x0000ffffU) << (0x0000001fU 
                                               & VL_SHIFTL_III(5,32,32, 
                                                               (3U 
                                                                & (vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[1U] 
                                                                   >> 0x0000000aU)), 3U)))) 
                  & vlSelfRef.top_tb__DOT__DUT__DOT__dib) 
                 | (0x00000000ffffffffULL & ((0x0000ffffU 
                                              & vlSelfRef.top_tb__DOT__DUT__DOT__MEM_rs2_data_final) 
                                             << (0x0000001fU 
                                                 & VL_SHIFTL_III(5,32,32, 
                                                                 (3U 
                                                                  & (vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[1U] 
                                                                     >> 0x0000000aU)), 3U)))));
        } else if ((2U == (7U & (vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[2U] 
                                 >> 0x00000012U)))) {
            vlSelfRef.top_tb__DOT__DUT__DOT__dib = vlSelfRef.top_tb__DOT__DUT__DOT__MEM_rs2_data_final;
        }
    }
    vlSelfRef.top_tb__DOT__DUT__DOT__EX_op2 = ((0x00100000U 
                                                & vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[3U])
                                                ? (
                                                   (vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[1U] 
                                                    << 0x00000011U) 
                                                   | (vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[0U] 
                                                      >> 0x0000000fU))
                                                : vlSelfRef.top_tb__DOT__DUT__DOT__EX_rs2_data_final);
    vlSelfRef.top_tb__DOT__DUT__DOT__EX_op1 = ((IData)(
                                                       (0x02980000U 
                                                        == 
                                                        (0x0ff80000U 
                                                         & vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[3U])))
                                                ? 0U
                                                : vlSelfRef.top_tb__DOT__DUT__DOT__EX_rs1_data_final);
    if (((((((((0U == (vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[3U] 
                       >> 0x0000001cU)) | (8U == (vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[3U] 
                                                  >> 0x0000001cU))) 
              | (7U == (vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[3U] 
                        >> 0x0000001cU))) | (6U == 
                                             (vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[3U] 
                                              >> 0x0000001cU))) 
            | (4U == (vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[3U] 
                      >> 0x0000001cU))) | (1U == (vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[3U] 
                                                  >> 0x0000001cU))) 
          | (5U == (vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[3U] 
                    >> 0x0000001cU))) | (0x0dU == (
                                                   vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[3U] 
                                                   >> 0x0000001cU)))) {
        if ((0U == (vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[3U] 
                    >> 0x0000001cU))) {
            vlSelfRef.top_tb__DOT__DUT__DOT__EX_carry 
                = (1U & (IData)((1ULL & (((QData)((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__EX_op1)) 
                                          + (QData)((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__EX_op2))) 
                                         >> 0x00000020U))));
            vlSelfRef.top_tb__DOT__DUT__DOT__EX_ALU_result 
                = (vlSelfRef.top_tb__DOT__DUT__DOT__EX_op1 
                   + vlSelfRef.top_tb__DOT__DUT__DOT__EX_op2);
        } else if ((8U == (vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[3U] 
                           >> 0x0000001cU))) {
            vlSelfRef.top_tb__DOT__DUT__DOT__EX_carry 
                = (1U & (IData)((1ULL & (((QData)((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__EX_op1)) 
                                          - (QData)((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__EX_op2))) 
                                         >> 0x00000020U))));
            vlSelfRef.top_tb__DOT__DUT__DOT__EX_ALU_result 
                = (vlSelfRef.top_tb__DOT__DUT__DOT__EX_op1 
                   - vlSelfRef.top_tb__DOT__DUT__DOT__EX_op2);
        } else {
            vlSelfRef.top_tb__DOT__DUT__DOT__EX_ALU_result 
                = ((7U == (vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[3U] 
                           >> 0x0000001cU)) ? (vlSelfRef.top_tb__DOT__DUT__DOT__EX_op1 
                                               & vlSelfRef.top_tb__DOT__DUT__DOT__EX_op2)
                    : ((6U == (vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[3U] 
                               >> 0x0000001cU)) ? (vlSelfRef.top_tb__DOT__DUT__DOT__EX_op1 
                                                   | vlSelfRef.top_tb__DOT__DUT__DOT__EX_op2)
                        : ((4U == (vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[3U] 
                                   >> 0x0000001cU))
                            ? (vlSelfRef.top_tb__DOT__DUT__DOT__EX_op1 
                               ^ vlSelfRef.top_tb__DOT__DUT__DOT__EX_op2)
                            : ((1U == (vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[3U] 
                                       >> 0x0000001cU))
                                ? (vlSelfRef.top_tb__DOT__DUT__DOT__EX_op1 
                                   << (0x0000001fU 
                                       & vlSelfRef.top_tb__DOT__DUT__DOT__EX_op2))
                                : ((5U == (vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[3U] 
                                           >> 0x0000001cU))
                                    ? (vlSelfRef.top_tb__DOT__DUT__DOT__EX_op1 
                                       >> (0x0000001fU 
                                           & vlSelfRef.top_tb__DOT__DUT__DOT__EX_op2))
                                    : VL_SHIFTRS_III(32,32,5, vlSelfRef.top_tb__DOT__DUT__DOT__EX_op1, 
                                                     (0x0000001fU 
                                                      & vlSelfRef.top_tb__DOT__DUT__DOT__EX_op2)))))));
        }
    } else if ((2U == (vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[3U] 
                       >> 0x0000001cU))) {
        vlSelfRef.top_tb__DOT__DUT__DOT__EX_ALU_result 
            = VL_LTS_III(32, vlSelfRef.top_tb__DOT__DUT__DOT__EX_op1, vlSelfRef.top_tb__DOT__DUT__DOT__EX_op2);
    } else if ((3U == (vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[3U] 
                       >> 0x0000001cU))) {
        vlSelfRef.top_tb__DOT__DUT__DOT__EX_ALU_result 
            = (vlSelfRef.top_tb__DOT__DUT__DOT__EX_op1 
               < vlSelfRef.top_tb__DOT__DUT__DOT__EX_op2);
    }
    __Vtableidx2 = ((((((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__EX_carry) 
                        << 3U) | ((((vlSelfRef.top_tb__DOT__DUT__DOT__EX_op1 
                                     >> 0x0000001fU) 
                                    != (vlSelfRef.top_tb__DOT__DUT__DOT__EX_op2 
                                        >> 0x0000001fU)) 
                                   & ((vlSelfRef.top_tb__DOT__DUT__DOT__EX_ALU_result 
                                       >> 0x0000001fU) 
                                      != (vlSelfRef.top_tb__DOT__DUT__DOT__EX_op1 
                                          >> 0x0000001fU))) 
                                  << 2U)) | ((VL_GTS_III(32, 0U, vlSelfRef.top_tb__DOT__DUT__DOT__EX_ALU_result) 
                                              << 1U) 
                                             | (0U 
                                                == vlSelfRef.top_tb__DOT__DUT__DOT__EX_ALU_result))) 
                     << 4U) | ((0x0000000eU & (vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[4U] 
                                               << 1U)) 
                               | (1U & (vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[3U] 
                                        >> 0x00000010U))));
    vlSelfRef.top_tb__DOT__DUT__DOT__EX_branch_taken 
        = Vtop_tb__ConstPool__TABLE_h40980361_0[__Vtableidx2];
    vlSelfRef.top_tb__DOT__DUT__DOT__ID_Flush = 0U;
    vlSelfRef.top_tb__DOT__DUT__DOT__EX_Flush = 0U;
    if (((vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[3U] 
          >> 0x00000010U) & (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__EX_branch_taken))) {
        vlSelfRef.top_tb__DOT__DUT__DOT__ID_Flush = 1U;
        vlSelfRef.top_tb__DOT__DUT__DOT__EX_Flush = 1U;
        vlSelfRef.top_tb__DOT__DUT__DOT__next_pc = 
            ((vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[5U] 
              << 0x0000001dU) | (vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[4U] 
                                 >> 3U));
    } else {
        if (((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__ID_Jump) 
             & (~ (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__ID_ALUSrc)))) {
            vlSelfRef.top_tb__DOT__DUT__DOT__ID_Flush = 1U;
            vlSelfRef.top_tb__DOT__DUT__DOT__next_pc 
                = vlSelfRef.top_tb__DOT__DUT__DOT__ID_pc_imm;
        } else {
            if ((IData)((0x00108000U == (0x00108000U 
                                         & vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[3U])))) {
                vlSelfRef.top_tb__DOT__DUT__DOT__ID_Flush = 1U;
            }
            vlSelfRef.top_tb__DOT__DUT__DOT__next_pc 
                = ((IData)((0x00108000U == (0x00108000U 
                                            & vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[3U])))
                    ? (0xfffffffeU & (vlSelfRef.top_tb__DOT__DUT__DOT__EX_rs1_data_final 
                                      + ((vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[1U] 
                                          << 0x00000011U) 
                                         | (vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[0U] 
                                            >> 0x0000000fU))))
                    : ((IData)(4U) + vlSelfRef.top_tb__DOT__DUT__DOT__IF_pc));
        }
        if ((1U & (~ ((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__ID_Jump) 
                      & (~ (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__ID_ALUSrc)))))) {
            if ((IData)((0x00108000U == (0x00108000U 
                                         & vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[3U])))) {
                vlSelfRef.top_tb__DOT__DUT__DOT__EX_Flush = 1U;
            }
        }
    }
}

void Vtop_tb___024root___eval_nba(Vtop_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_nba\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop_tb___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop_tb___024root___nba_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop_tb___024root___nba_sequent__TOP__2(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop_tb___024root___nba_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
}

void Vtop_tb___024root___trigger_orInto__act(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___trigger_orInto__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtop_tb___024root___eval_phase__act(Vtop_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_phase__act\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop_tb___024root___eval_triggers__act(vlSelf);
    Vtop_tb___024root___trigger_orInto__act(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

void Vtop_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtop_tb___024root___eval_phase__nba(Vtop_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_phase__nba\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtop_tb___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtop_tb___024root___eval_nba(vlSelf);
        Vtop_tb___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtop_tb___024root___eval(Vtop_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtop_tb___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("../tb/pipe/top_tb.sv", 3, "", "NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtop_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("../tb/pipe/top_tb.sv", 3, "", "Active region did not converge after 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
        } while (Vtop_tb___024root___eval_phase__act(vlSelf));
    } while (Vtop_tb___024root___eval_phase__nba(vlSelf));
}

#ifdef VL_DEBUG
void Vtop_tb___024root___eval_debug_assertions(Vtop_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_debug_assertions\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.rst_n & 0xfeU)))) {
        Verilated::overWidthError("rst_n");
    }
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");
    }
}
#endif  // VL_DEBUG
