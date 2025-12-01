// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_tb.h for the primary calling header

#include "Vtop_tb__pch.h"

VL_ATTR_COLD void Vtop_tb___024root___eval_static(Vtop_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_static\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst_n__0 = vlSelfRef.rst_n;
}

VL_ATTR_COLD void Vtop_tb___024root___eval_initial__TOP(Vtop_tb___024root* vlSelf);
VL_ATTR_COLD void Vtop_tb___024root____Vm_traceActivitySetAll(Vtop_tb___024root* vlSelf);

VL_ATTR_COLD void Vtop_tb___024root___eval_initial(Vtop_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_initial\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop_tb___024root___eval_initial__TOP(vlSelf);
    Vtop_tb___024root____Vm_traceActivitySetAll(vlSelf);
}

VL_ATTR_COLD void Vtop_tb___024root___eval_initial__TOP(Vtop_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_initial__TOP\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((! VL_VALUEPLUSARGS_INW(8000, "PROGRAM=%s"s, 
                                             vlSelfRef.top_tb__DOT__program_file))))) {
        VL_WRITEF_NX("ERROR: No PROGRAM file specified! Use +PROGRAM=<path>\n",0);
        VL_FINISH_MT("../tb/pipe/top_tb.sv", 30, "");
    }
    VL_WRITEF_NX("Loading program from %s\n",0,8000,
                 vlSelfRef.top_tb__DOT__program_file.data());
    VL_READMEM_N(true, 32, 606208, 0, VL_CVT_PACK_STR_NW(250, vlSelfRef.top_tb__DOT__program_file)
                 ,  &(vlSelfRef.top_tb__DOT__DUT__DOT__INST1__DOT__mem)
                 , 0U, ~0ULL);
    if (VL_UNLIKELY(((! VL_VALUEPLUSARGS_INI(32, "begin_signature=%h"s, 
                                             vlSelfRef.top_tb__DOT__RVMODEL_DATA_BEGIN))))) {
        VL_WRITEF_NX("No RVMODEL_DATA_BEGIN address specified! Using default address 0x00005000\n",0);
        vlSelfRef.top_tb__DOT__RVMODEL_DATA_BEGIN = 0x00005000U;
    }
    VL_WRITEF_NX("RVMODEL_DATA_BEGIN: %x\n",0,32,vlSelfRef.top_tb__DOT__RVMODEL_DATA_BEGIN);
    if (VL_UNLIKELY(((! VL_VALUEPLUSARGS_INI(32, "end_signature=%h"s, 
                                             vlSelfRef.top_tb__DOT__RVMODEL_DATA_END))))) {
        VL_WRITEF_NX("No RVMODEL_DATA_END address specified! Using default address 0x00008000\n",0);
        vlSelfRef.top_tb__DOT__RVMODEL_DATA_END = 0x00008000U;
    }
    VL_WRITEF_NX("RVMODEL_DATA_END: %x\n",0,32,vlSelfRef.top_tb__DOT__RVMODEL_DATA_END);
    if (VL_UNLIKELY(((! VL_VALUEPLUSARGS_INI(32, "tohost=%h"s, 
                                             vlSelfRef.top_tb__DOT__tohost))))) {
        VL_WRITEF_NX("No tohost address specified! Using default address 0x00005000\n",0);
        vlSelfRef.top_tb__DOT__tohost = 0x00005000U;
    }
    VL_WRITEF_NX("tohost: %x\n",0,32,vlSelfRef.top_tb__DOT__tohost);
    vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__reg_file[0U] = 0U;
    vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__reg_file[1U] = 0U;
    vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__reg_file[2U] = 0U;
    vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__reg_file[3U] = 0U;
    vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__reg_file[4U] = 0U;
    vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__reg_file[5U] = 0U;
    vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__reg_file[6U] = 0U;
    vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__reg_file[7U] = 0U;
    vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__reg_file[8U] = 0U;
    vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__reg_file[9U] = 0U;
    vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__reg_file[0x0aU] = 0U;
    vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__reg_file[0x0bU] = 0U;
    vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__reg_file[0x0cU] = 0U;
    vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__reg_file[0x0dU] = 0U;
    vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__reg_file[0x0eU] = 0U;
    vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__reg_file[0x0fU] = 0U;
    vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__reg_file[0x10U] = 0U;
    vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__reg_file[0x11U] = 0U;
    vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__reg_file[0x12U] = 0U;
    vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__reg_file[0x13U] = 0U;
    vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__reg_file[0x14U] = 0U;
    vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__reg_file[0x15U] = 0U;
    vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__reg_file[0x16U] = 0U;
    vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__reg_file[0x17U] = 0U;
    vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__reg_file[0x18U] = 0U;
    vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__reg_file[0x19U] = 0U;
    vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__reg_file[0x1aU] = 0U;
    vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__reg_file[0x1bU] = 0U;
    vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__reg_file[0x1cU] = 0U;
    vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__reg_file[0x1dU] = 0U;
    vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__reg_file[0x1eU] = 0U;
    vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__reg_file[0x1fU] = 0U;
    vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__i = 0x00000020U;
}

VL_ATTR_COLD void Vtop_tb___024root___eval_final(Vtop_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_final\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop_tb___024root___eval_phase__stl(Vtop_tb___024root* vlSelf);

VL_ATTR_COLD void Vtop_tb___024root___eval_settle(Vtop_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_settle\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtop_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("../tb/pipe/top_tb.sv", 3, "", "Settle region did not converge after 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
    } while (Vtop_tb___024root___eval_phase__stl(vlSelf));
}

VL_ATTR_COLD void Vtop_tb___024root___eval_triggers__stl(Vtop_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_triggers__stl\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered
                                      [0U]) | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    vlSelfRef.__VstlFirstIteration = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
}

VL_ATTR_COLD bool Vtop_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop_tb___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtop_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD void Vtop_tb___024root___stl_sequent__TOP__0(Vtop_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___stl_sequent__TOP__0\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*7:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    vlSelfRef.top_tb__DOT__DUT__DOT__web = 0U;
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
    vlSelfRef.top_tb__DOT__DUT__DOT__INST11__DOT__MEM_rs2_WB_fwd 
        = (((0x0000001fU & (vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[0U] 
                            >> 5U)) == (0x0000001fU 
                                        & vlSelfRef.top_tb__DOT__DUT__DOT__MEM_WB[0U])) 
           & (IData)(((0x00020400U == (0x00020400U 
                                       & vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[2U])) 
                      & (0x00000240U == (0x00000240U 
                                         & vlSelfRef.top_tb__DOT__DUT__DOT__MEM_WB[1U])))));
    vlSelfRef.top_tb__DOT__DUT__DOT__ID_instruction 
        = ((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__ID_PostFlush)
            ? 0U : vlSelfRef.top_tb__DOT__DUT__DOT__doa);
    vlSelfRef.top_tb__DOT__DUT__DOT__INST9__DOT__DMEM_shifted_word 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.top_tb__DOT__DUT__DOT__dob, 
                        VL_SHIFTL_III(32,32,32, (3U 
                                                 & (vlSelfRef.top_tb__DOT__DUT__DOT__MEM_WB[0U] 
                                                    >> 5U)), 3U));
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
    if (vlSelfRef.top_tb__DOT__DUT__DOT__INST11__DOT__MEM_rs2_WB_fwd) {
        vlSelfRef.top_tb__DOT__DUT__DOT__MEM_rs2_fwd_data 
            = vlSelfRef.top_tb__DOT__DUT__DOT__WB_rd_write_data;
    }
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
    vlSelfRef.top_tb__DOT__DUT__DOT__INST1__DOT__addra 
        = ((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__ID_Stall)
            ? vlSelfRef.top_tb__DOT__DUT__DOT__IF_ID
            : vlSelfRef.top_tb__DOT__DUT__DOT__IF_pc);
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
    vlSelfRef.top_tb__DOT__DUT__DOT__dib = 0U;
    if ((0x00000400U & vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[2U])) {
        if ((0U == (7U & (vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[2U] 
                          >> 0x00000012U)))) {
            vlSelfRef.top_tb__DOT__DUT__DOT__web = 
                (0x0000000fU & ((IData)(1U) << (3U 
                                                & (vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[1U] 
                                                   >> 0x0000000aU))));
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
            vlSelfRef.top_tb__DOT__DUT__DOT__web = 
                (0x0000000fU & ((IData)(3U) << (3U 
                                                & (vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[1U] 
                                                   >> 0x0000000aU))));
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
            vlSelfRef.top_tb__DOT__DUT__DOT__web = 0x0fU;
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

VL_ATTR_COLD void Vtop_tb___024root___eval_stl(Vtop_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_stl\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vtop_tb___024root___stl_sequent__TOP__0(vlSelf);
        Vtop_tb___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD bool Vtop_tb___024root___eval_phase__stl(Vtop_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_phase__stl\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtop_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = Vtop_tb___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vtop_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vtop_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop_tb___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(negedge rst_n)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop_tb___024root____Vm_traceActivitySetAll(Vtop_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root____Vm_traceActivitySetAll\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
}

VL_ATTR_COLD void Vtop_tb___024root___ctor_var_reset(Vtop_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___ctor_var_reset\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1638864771569018232ull);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    VL_SCOPED_RAND_RESET_W(8000, vlSelf->top_tb__DOT__program_file, __VscopeHash, 1101078386483316854ull);
    vlSelf->top_tb__DOT__RVMODEL_DATA_BEGIN = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2635610246748856821ull);
    vlSelf->top_tb__DOT__RVMODEL_DATA_END = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9466641019508248057ull);
    vlSelf->top_tb__DOT__tohost = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1030470667926345800ull);
    vlSelf->top_tb__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6651770975129235105ull);
    vlSelf->top_tb__DOT__fd = 0;
    vlSelf->top_tb__DOT__DUT__DOT__wea = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1914544399059666187ull);
    vlSelf->top_tb__DOT__DUT__DOT__web = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7637479475260654545ull);
    vlSelf->top_tb__DOT__DUT__DOT__doa = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11294073407528258173ull);
    vlSelf->top_tb__DOT__DUT__DOT__dob = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6846466185534702236ull);
    vlSelf->top_tb__DOT__DUT__DOT__dia = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1945406868743658037ull);
    vlSelf->top_tb__DOT__DUT__DOT__dib = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14029776873457145449ull);
    vlSelf->top_tb__DOT__DUT__DOT__IF_ID = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7079480582288847980ull);
    VL_SCOPED_RAND_RESET_W(195, vlSelf->top_tb__DOT__DUT__DOT__ID_EX, __VscopeHash, 111728572118040940ull);
    VL_SCOPED_RAND_RESET_W(149, vlSelf->top_tb__DOT__DUT__DOT__EX_MEM, __VscopeHash, 174497004163727811ull);
    VL_SCOPED_RAND_RESET_W(111, vlSelf->top_tb__DOT__DUT__DOT__MEM_WB, __VscopeHash, 5447464327418923155ull);
    vlSelf->top_tb__DOT__DUT__DOT__IF_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11726632082096525743ull);
    vlSelf->top_tb__DOT__DUT__DOT__ID_instruction = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9518088270547743255ull);
    vlSelf->top_tb__DOT__DUT__DOT__ID_Stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2194182949467588262ull);
    vlSelf->top_tb__DOT__DUT__DOT__ID_Flush = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16053849653116614360ull);
    vlSelf->top_tb__DOT__DUT__DOT__ID_PostFlush = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8204912141408840492ull);
    vlSelf->top_tb__DOT__DUT__DOT__ID_ValidReg = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14691569223399536253ull);
    vlSelf->top_tb__DOT__DUT__DOT__ID_ALUOp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3772096560491983355ull);
    vlSelf->top_tb__DOT__DUT__DOT__ID_RegSrc = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11316838310133173809ull);
    vlSelf->top_tb__DOT__DUT__DOT__ID_ALUSrc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2628536505670344792ull);
    vlSelf->top_tb__DOT__DUT__DOT__ID_RegWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5266916110954347308ull);
    vlSelf->top_tb__DOT__DUT__DOT__ID_MemRead = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12855955727719905745ull);
    vlSelf->top_tb__DOT__DUT__DOT__ID_MemWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16351073043405168046ull);
    vlSelf->top_tb__DOT__DUT__DOT__ID_Branch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4408747882872933040ull);
    vlSelf->top_tb__DOT__DUT__DOT__ID_Jump = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15002435219817981806ull);
    vlSelf->top_tb__DOT__DUT__DOT__ID_field = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5504190402472825710ull);
    vlSelf->top_tb__DOT__DUT__DOT__ID_imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2932709862170662815ull);
    vlSelf->top_tb__DOT__DUT__DOT__ID_pc_imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4692751091254072415ull);
    vlSelf->top_tb__DOT__DUT__DOT__ID_rs1_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11641389011050178148ull);
    vlSelf->top_tb__DOT__DUT__DOT__ID_rs2_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1139531743956233078ull);
    vlSelf->top_tb__DOT__DUT__DOT__WB_rd_write_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12007568696134351447ull);
    vlSelf->top_tb__DOT__DUT__DOT__EX_carry = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13175145803382846752ull);
    vlSelf->top_tb__DOT__DUT__DOT__EX_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9774945883302780710ull);
    vlSelf->top_tb__DOT__DUT__DOT__EX_imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2224641445354547701ull);
    vlSelf->top_tb__DOT__DUT__DOT__EX_pc_imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13531493633290846206ull);
    vlSelf->top_tb__DOT__DUT__DOT__EX_rs1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 9650925754000495934ull);
    vlSelf->top_tb__DOT__DUT__DOT__EX_rs2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 12718854773378991273ull);
    vlSelf->top_tb__DOT__DUT__DOT__EX_rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 4046625610437040760ull);
    vlSelf->top_tb__DOT__DUT__DOT__EX_op1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9403779337871189313ull);
    vlSelf->top_tb__DOT__DUT__DOT__EX_op2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8566875069861617304ull);
    vlSelf->top_tb__DOT__DUT__DOT__EX_rs1_fwd_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8737327778694235203ull);
    vlSelf->top_tb__DOT__DUT__DOT__EX_rs2_fwd_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1007693889220701677ull);
    vlSelf->top_tb__DOT__DUT__DOT__EX_rs1_data_final = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11894609890311276566ull);
    vlSelf->top_tb__DOT__DUT__DOT__EX_rs2_data_final = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17942426604926557185ull);
    vlSelf->top_tb__DOT__DUT__DOT__EX_Flush = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2419907753304948575ull);
    vlSelf->top_tb__DOT__DUT__DOT__EX_ALU_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2077435900632495306ull);
    vlSelf->top_tb__DOT__DUT__DOT__EX_branch_taken = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8883645810514338871ull);
    vlSelf->top_tb__DOT__DUT__DOT__MEM_rs2_fwd_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11413641814526017671ull);
    vlSelf->top_tb__DOT__DUT__DOT__MEM_rs2_data_final = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16659541585024541650ull);
    vlSelf->top_tb__DOT__DUT__DOT__next_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11981342139059141082ull);
    vlSelf->top_tb__DOT__DUT__DOT__INST1__DOT__addra = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 412208738794912296ull);
    for (int __Vi0 = 0; __Vi0 < 606208; ++__Vi0) {
        vlSelf->top_tb__DOT__DUT__DOT__INST1__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13295235788757925018ull);
    }
    vlSelf->top_tb__DOT__DUT__DOT__INST1__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17864721546357949710ull);
    vlSelf->top_tb__DOT__DUT__DOT__INST1__DOT____Vlvbound_h5c26a5c7__0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10438871750489462756ull);
    vlSelf->top_tb__DOT__DUT__DOT__INST1__DOT____Vlvbound_h853563f3__0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16766733346290497419ull);
    vlSelf->top_tb__DOT__DUT__DOT__INST2__DOT__ZeroOp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 806261712218329502ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top_tb__DOT__DUT__DOT__INST3__DOT__reg_file[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14600811766061124146ull);
    }
    vlSelf->top_tb__DOT__DUT__DOT__INST3__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11626382838097860309ull);
    vlSelf->top_tb__DOT__DUT__DOT__INST4__DOT__opcode = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 15706770363397068852ull);
    vlSelf->top_tb__DOT__DUT__DOT__INST4__DOT__funct3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7562156622963202416ull);
    vlSelf->top_tb__DOT__DUT__DOT__INST4__DOT__intimm1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 13234832948754913258ull);
    vlSelf->top_tb__DOT__DUT__DOT__INST4__DOT__intimm2 = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 6488052281157032560ull);
    vlSelf->top_tb__DOT__DUT__DOT__INST4__DOT__imm1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3670210847001597929ull);
    vlSelf->top_tb__DOT__DUT__DOT__INST4__DOT__imm2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15170605612214007697ull);
    vlSelf->top_tb__DOT__DUT__DOT__INST4__DOT__imm3 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5234791757424568767ull);
    vlSelf->top_tb__DOT__DUT__DOT__INST4__DOT__imm4 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9244582716567897214ull);
    vlSelf->top_tb__DOT__DUT__DOT__INST9__DOT__DMEM_shifted_word = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14451439292593911831ull);
    vlSelf->top_tb__DOT__DUT__DOT__INST9__DOT__DMEM_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12297404619758607087ull);
    vlSelf->top_tb__DOT__DUT__DOT__INST11__DOT__EX_rs1_MEM_fwd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1765332072174968402ull);
    vlSelf->top_tb__DOT__DUT__DOT__INST11__DOT__EX_rs2_MEM_fwd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14061823156542015997ull);
    vlSelf->top_tb__DOT__DUT__DOT__INST11__DOT__EX_rs1_WB_fwd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10010259486993097959ull);
    vlSelf->top_tb__DOT__DUT__DOT__INST11__DOT__EX_rs2_WB_fwd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9960027260697415059ull);
    vlSelf->top_tb__DOT__DUT__DOT__INST11__DOT__MEM_rd_write_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 856337261157319303ull);
    vlSelf->top_tb__DOT__DUT__DOT__INST11__DOT__MEM_rs2_WB_fwd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12628167936485311701ull);
    vlSelf->__Vdly__top_tb__DOT__DUT__DOT__IF_ID = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16080058268124817079ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9526919608049418986ull);
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14803524876191471008ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
