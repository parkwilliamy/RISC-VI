// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop_tb__Syms.h"


void Vtop_tb___024root__trace_chg_0_sub_0(Vtop_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_chg_0\n"); );
    // Body
    Vtop_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop_tb___024root*>(voidSelf);
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vtop_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop_tb___024root__trace_chg_0_sub_0(Vtop_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_chg_0_sub_0\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0U]))) {
        bufp->chgIData(oldp+0,(vlSelfRef.top_tb__DOT__RVMODEL_DATA_BEGIN),32);
        bufp->chgIData(oldp+1,(vlSelfRef.top_tb__DOT__RVMODEL_DATA_END),32);
        bufp->chgIData(oldp+2,(vlSelfRef.top_tb__DOT__tohost),32);
        bufp->chgIData(oldp+3,(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__i),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgIData(oldp+4,(vlSelfRef.top_tb__DOT__i),32);
        bufp->chgIData(oldp+5,(vlSelfRef.top_tb__DOT__fd),32);
        bufp->chgIData(oldp+6,(vlSelfRef.top_tb__DOT__DUT__DOT__doa),32);
        bufp->chgIData(oldp+7,(vlSelfRef.top_tb__DOT__DUT__DOT__dob),32);
        bufp->chgIData(oldp+8,(vlSelfRef.top_tb__DOT__DUT__DOT__INST1__DOT__i),32);
        bufp->chgIData(oldp+9,(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__reg_file[0]),32);
        bufp->chgIData(oldp+10,(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__reg_file[1]),32);
        bufp->chgIData(oldp+11,(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__reg_file[2]),32);
        bufp->chgIData(oldp+12,(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__reg_file[3]),32);
        bufp->chgIData(oldp+13,(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__reg_file[4]),32);
        bufp->chgIData(oldp+14,(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__reg_file[5]),32);
        bufp->chgIData(oldp+15,(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__reg_file[6]),32);
        bufp->chgIData(oldp+16,(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__reg_file[7]),32);
        bufp->chgIData(oldp+17,(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__reg_file[8]),32);
        bufp->chgIData(oldp+18,(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__reg_file[9]),32);
        bufp->chgIData(oldp+19,(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__reg_file[10]),32);
        bufp->chgIData(oldp+20,(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__reg_file[11]),32);
        bufp->chgIData(oldp+21,(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__reg_file[12]),32);
        bufp->chgIData(oldp+22,(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__reg_file[13]),32);
        bufp->chgIData(oldp+23,(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__reg_file[14]),32);
        bufp->chgIData(oldp+24,(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__reg_file[15]),32);
        bufp->chgIData(oldp+25,(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__reg_file[16]),32);
        bufp->chgIData(oldp+26,(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__reg_file[17]),32);
        bufp->chgIData(oldp+27,(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__reg_file[18]),32);
        bufp->chgIData(oldp+28,(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__reg_file[19]),32);
        bufp->chgIData(oldp+29,(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__reg_file[20]),32);
        bufp->chgIData(oldp+30,(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__reg_file[21]),32);
        bufp->chgIData(oldp+31,(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__reg_file[22]),32);
        bufp->chgIData(oldp+32,(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__reg_file[23]),32);
        bufp->chgIData(oldp+33,(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__reg_file[24]),32);
        bufp->chgIData(oldp+34,(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__reg_file[25]),32);
        bufp->chgIData(oldp+35,(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__reg_file[26]),32);
        bufp->chgIData(oldp+36,(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__reg_file[27]),32);
        bufp->chgIData(oldp+37,(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__reg_file[28]),32);
        bufp->chgIData(oldp+38,(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__reg_file[29]),32);
        bufp->chgIData(oldp+39,(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__reg_file[30]),32);
        bufp->chgIData(oldp+40,(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__reg_file[31]),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgCData(oldp+41,(vlSelfRef.top_tb__DOT__DUT__DOT__web),4);
        bufp->chgIData(oldp+42,(((vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[2U] 
                                  << 0x00000016U) | 
                                 (vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[1U] 
                                  >> 0x0000000aU))),32);
        bufp->chgIData(oldp+43,(vlSelfRef.top_tb__DOT__DUT__DOT__IF_ID),32);
        bufp->chgWData(oldp+44,(vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX),195);
        bufp->chgWData(oldp+51,(vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM),149);
        bufp->chgWData(oldp+56,(vlSelfRef.top_tb__DOT__DUT__DOT__MEM_WB),111);
        bufp->chgBit(oldp+60,((1U & (vlSelfRef.top_tb__DOT__DUT__DOT__MEM_WB[1U] 
                                     >> 5U))));
        bufp->chgCData(oldp+61,((0x0000001fU & vlSelfRef.top_tb__DOT__DUT__DOT__MEM_WB[0U])),5);
        bufp->chgCData(oldp+62,((vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[3U] 
                                 >> 0x0000001cU)),4);
        bufp->chgCData(oldp+63,((7U & (vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[3U] 
                                       >> 0x00000019U))),3);
        bufp->chgCData(oldp+64,((7U & vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[4U])),3);
        bufp->chgCData(oldp+65,((3U & (vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[3U] 
                                       >> 0x00000017U))),2);
        bufp->chgCData(oldp+66,((3U & (vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[3U] 
                                       >> 0x00000015U))),2);
        bufp->chgBit(oldp+67,((1U & (vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[3U] 
                                     >> 0x00000014U))));
        bufp->chgBit(oldp+68,((1U & (vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[3U] 
                                     >> 0x00000013U))));
        bufp->chgBit(oldp+69,((1U & (vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[3U] 
                                     >> 0x00000012U))));
        bufp->chgBit(oldp+70,((1U & (vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[3U] 
                                     >> 0x00000011U))));
        bufp->chgBit(oldp+71,((1U & (vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[3U] 
                                     >> 0x00000010U))));
        bufp->chgBit(oldp+72,((1U & (vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[3U] 
                                     >> 0x0000000fU))));
        bufp->chgIData(oldp+73,(((vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[6U] 
                                  << 0x0000001dU) | 
                                 (vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[5U] 
                                  >> 3U))),32);
        bufp->chgIData(oldp+74,(((vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[3U] 
                                  << 0x00000011U) | 
                                 (vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[2U] 
                                  >> 0x0000000fU))),32);
        bufp->chgIData(oldp+75,(((vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[2U] 
                                  << 0x00000011U) | 
                                 (vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[1U] 
                                  >> 0x0000000fU))),32);
        bufp->chgIData(oldp+76,(((vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[1U] 
                                  << 0x00000011U) | 
                                 (vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[0U] 
                                  >> 0x0000000fU))),32);
        bufp->chgIData(oldp+77,(((vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[5U] 
                                  << 0x0000001dU) | 
                                 (vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[4U] 
                                  >> 3U))),32);
        bufp->chgCData(oldp+78,((0x0000001fU & (vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[0U] 
                                                >> 5U))),5);
        bufp->chgCData(oldp+79,((0x0000001fU & vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[0U])),5);
        bufp->chgCData(oldp+80,((0x0000001fU & (vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[0U] 
                                                >> 0x0000000aU))),5);
        bufp->chgIData(oldp+81,(((vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[4U] 
                                  << 0x0000000bU) | 
                                 (vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[3U] 
                                  >> 0x00000015U))),32);
        bufp->chgCData(oldp+82,((7U & (vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[2U] 
                                       >> 0x00000012U))),3);
        bufp->chgCData(oldp+83,((7U & (vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[2U] 
                                       >> 0x0000000fU))),3);
        bufp->chgCData(oldp+84,((3U & (vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[2U] 
                                       >> 0x0000000dU))),2);
        bufp->chgBit(oldp+85,((1U & (vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[2U] 
                                     >> 0x0000000cU))));
        bufp->chgIData(oldp+86,(((vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[3U] 
                                  << 0x0000000bU) | 
                                 (vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[2U] 
                                  >> 0x00000015U))),32);
        bufp->chgIData(oldp+87,(((vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[1U] 
                                  << 0x00000016U) | 
                                 (vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[0U] 
                                  >> 0x0000000aU))),32);
        bufp->chgCData(oldp+88,((0x0000001fU & (vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[0U] 
                                                >> 5U))),5);
        bufp->chgCData(oldp+89,((0x0000001fU & vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[0U])),5);
        bufp->chgBit(oldp+90,((1U & (vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[2U] 
                                     >> 0x0000000bU))));
        bufp->chgBit(oldp+91,((1U & (vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[2U] 
                                     >> 0x0000000aU))));
        bufp->chgIData(oldp+92,(((vlSelfRef.top_tb__DOT__DUT__DOT__MEM_WB[2U] 
                                  << 0x00000011U) | 
                                 (vlSelfRef.top_tb__DOT__DUT__DOT__MEM_WB[1U] 
                                  >> 0x0000000fU))),32);
        bufp->chgIData(oldp+93,(((vlSelfRef.top_tb__DOT__DUT__DOT__MEM_WB[3U] 
                                  << 0x00000011U) | 
                                 (vlSelfRef.top_tb__DOT__DUT__DOT__MEM_WB[2U] 
                                  >> 0x0000000fU))),32);
        bufp->chgIData(oldp+94,(((vlSelfRef.top_tb__DOT__DUT__DOT__MEM_WB[1U] 
                                  << 0x0000001bU) | 
                                 (vlSelfRef.top_tb__DOT__DUT__DOT__MEM_WB[0U] 
                                  >> 5U))),32);
        bufp->chgCData(oldp+95,((7U & (vlSelfRef.top_tb__DOT__DUT__DOT__MEM_WB[1U] 
                                       >> 0x0000000cU))),3);
        bufp->chgCData(oldp+96,((7U & (vlSelfRef.top_tb__DOT__DUT__DOT__MEM_WB[1U] 
                                       >> 9U))),3);
        bufp->chgCData(oldp+97,((3U & (vlSelfRef.top_tb__DOT__DUT__DOT__MEM_WB[1U] 
                                       >> 7U))),2);
        bufp->chgBit(oldp+98,((1U & (vlSelfRef.top_tb__DOT__DUT__DOT__MEM_WB[1U] 
                                     >> 6U))));
        bufp->chgBit(oldp+99,((((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST11__DOT__EX_rs1_MEM_fwd) 
                                | (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST11__DOT__EX_rs1_WB_fwd)) 
                               & (0U != (0x0000001fU 
                                         & (vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[0U] 
                                            >> 5U))))));
        bufp->chgBit(oldp+100,((((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST11__DOT__EX_rs2_MEM_fwd) 
                                 | (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST11__DOT__EX_rs2_WB_fwd)) 
                                & (0U != (0x0000001fU 
                                          & vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[0U])))));
        bufp->chgBit(oldp+101,(((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST11__DOT__MEM_rs2_WB_fwd) 
                                & (0U != (0x0000001fU 
                                          & (vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[0U] 
                                             >> 5U))))));
        bufp->chgIData(oldp+102,(VL_SHIFTR_III(32,32,32, 
                                               ((vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[2U] 
                                                 << 0x00000016U) 
                                                | (vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[1U] 
                                                   >> 0x0000000aU)), 2U)),32);
        bufp->chgBit(oldp+103,(vlSelfRef.top_tb__DOT__DUT__DOT__INST11__DOT__EX_rs1_MEM_fwd));
        bufp->chgBit(oldp+104,(vlSelfRef.top_tb__DOT__DUT__DOT__INST11__DOT__EX_rs2_MEM_fwd));
        bufp->chgBit(oldp+105,(vlSelfRef.top_tb__DOT__DUT__DOT__INST11__DOT__EX_rs1_WB_fwd));
        bufp->chgBit(oldp+106,(vlSelfRef.top_tb__DOT__DUT__DOT__INST11__DOT__EX_rs2_WB_fwd));
        bufp->chgBit(oldp+107,(vlSelfRef.top_tb__DOT__DUT__DOT__INST11__DOT__MEM_rs2_WB_fwd));
        bufp->chgCData(oldp+108,((3U & (vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[1U] 
                                        >> 0x0000000aU))),2);
        bufp->chgCData(oldp+109,((3U & (vlSelfRef.top_tb__DOT__DUT__DOT__MEM_WB[0U] 
                                        >> 5U))),2);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgIData(oldp+110,(vlSelfRef.top_tb__DOT__DUT__DOT__INST1__DOT__addra),32);
        bufp->chgIData(oldp+111,(vlSelfRef.top_tb__DOT__DUT__DOT__dib),32);
        bufp->chgIData(oldp+112,(vlSelfRef.top_tb__DOT__DUT__DOT__ID_instruction),32);
        bufp->chgCData(oldp+113,((0x0000007fU & vlSelfRef.top_tb__DOT__DUT__DOT__ID_instruction)),7);
        bufp->chgCData(oldp+114,((0x0000001fU & (vlSelfRef.top_tb__DOT__DUT__DOT__ID_instruction 
                                                 >> 7U))),5);
        bufp->chgCData(oldp+115,((7U & (vlSelfRef.top_tb__DOT__DUT__DOT__ID_instruction 
                                        >> 0x0000000cU))),3);
        bufp->chgCData(oldp+116,((0x0000001fU & (vlSelfRef.top_tb__DOT__DUT__DOT__ID_instruction 
                                                 >> 0x0000000fU))),5);
        bufp->chgCData(oldp+117,((0x0000001fU & (vlSelfRef.top_tb__DOT__DUT__DOT__ID_instruction 
                                                 >> 0x00000014U))),5);
        bufp->chgCData(oldp+118,((vlSelfRef.top_tb__DOT__DUT__DOT__ID_instruction 
                                  >> 0x00000019U)),7);
        bufp->chgBit(oldp+119,(vlSelfRef.top_tb__DOT__DUT__DOT__ID_Stall));
        bufp->chgBit(oldp+120,(vlSelfRef.top_tb__DOT__DUT__DOT__ID_Flush));
        bufp->chgCData(oldp+121,(vlSelfRef.top_tb__DOT__DUT__DOT__ID_ValidReg),3);
        bufp->chgCData(oldp+122,(vlSelfRef.top_tb__DOT__DUT__DOT__ID_ALUOp),2);
        bufp->chgCData(oldp+123,(vlSelfRef.top_tb__DOT__DUT__DOT__ID_RegSrc),2);
        bufp->chgBit(oldp+124,(vlSelfRef.top_tb__DOT__DUT__DOT__ID_ALUSrc));
        bufp->chgBit(oldp+125,(vlSelfRef.top_tb__DOT__DUT__DOT__ID_RegWrite));
        bufp->chgBit(oldp+126,(vlSelfRef.top_tb__DOT__DUT__DOT__ID_MemRead));
        bufp->chgBit(oldp+127,(vlSelfRef.top_tb__DOT__DUT__DOT__ID_MemWrite));
        bufp->chgBit(oldp+128,(vlSelfRef.top_tb__DOT__DUT__DOT__ID_Branch));
        bufp->chgBit(oldp+129,(vlSelfRef.top_tb__DOT__DUT__DOT__ID_Jump));
        bufp->chgCData(oldp+130,(vlSelfRef.top_tb__DOT__DUT__DOT__ID_field),4);
        bufp->chgIData(oldp+131,(vlSelfRef.top_tb__DOT__DUT__DOT__ID_imm),32);
        bufp->chgIData(oldp+132,(vlSelfRef.top_tb__DOT__DUT__DOT__ID_pc_imm),32);
        bufp->chgIData(oldp+133,(vlSelfRef.top_tb__DOT__DUT__DOT__ID_rs1_data),32);
        bufp->chgIData(oldp+134,(vlSelfRef.top_tb__DOT__DUT__DOT__ID_rs2_data),32);
        bufp->chgIData(oldp+135,(vlSelfRef.top_tb__DOT__DUT__DOT__WB_rd_write_data),32);
        bufp->chgBit(oldp+136,((0U == vlSelfRef.top_tb__DOT__DUT__DOT__EX_ALU_result)));
        bufp->chgBit(oldp+137,(VL_GTS_III(32, 0U, vlSelfRef.top_tb__DOT__DUT__DOT__EX_ALU_result)));
        bufp->chgBit(oldp+138,((((vlSelfRef.top_tb__DOT__DUT__DOT__EX_op1 
                                  >> 0x0000001fU) != 
                                 (vlSelfRef.top_tb__DOT__DUT__DOT__EX_op2 
                                  >> 0x0000001fU)) 
                                & ((vlSelfRef.top_tb__DOT__DUT__DOT__EX_ALU_result 
                                    >> 0x0000001fU) 
                                   != (vlSelfRef.top_tb__DOT__DUT__DOT__EX_op1 
                                       >> 0x0000001fU)))));
        bufp->chgBit(oldp+139,(vlSelfRef.top_tb__DOT__DUT__DOT__EX_carry));
        bufp->chgIData(oldp+140,(vlSelfRef.top_tb__DOT__DUT__DOT__EX_op1),32);
        bufp->chgIData(oldp+141,(vlSelfRef.top_tb__DOT__DUT__DOT__EX_op2),32);
        bufp->chgIData(oldp+142,(vlSelfRef.top_tb__DOT__DUT__DOT__EX_rs1_fwd_data),32);
        bufp->chgIData(oldp+143,(vlSelfRef.top_tb__DOT__DUT__DOT__EX_rs2_fwd_data),32);
        bufp->chgIData(oldp+144,(vlSelfRef.top_tb__DOT__DUT__DOT__EX_rs1_data_final),32);
        bufp->chgIData(oldp+145,(vlSelfRef.top_tb__DOT__DUT__DOT__EX_rs2_data_final),32);
        bufp->chgBit(oldp+146,(vlSelfRef.top_tb__DOT__DUT__DOT__EX_Flush));
        bufp->chgIData(oldp+147,(vlSelfRef.top_tb__DOT__DUT__DOT__EX_ALU_result),32);
        bufp->chgBit(oldp+148,(vlSelfRef.top_tb__DOT__DUT__DOT__EX_branch_taken));
        bufp->chgIData(oldp+149,(vlSelfRef.top_tb__DOT__DUT__DOT__MEM_rs2_fwd_data),32);
        bufp->chgIData(oldp+150,(vlSelfRef.top_tb__DOT__DUT__DOT__MEM_rs2_data_final),32);
        bufp->chgIData(oldp+151,(vlSelfRef.top_tb__DOT__DUT__DOT__next_pc),32);
        bufp->chgIData(oldp+152,(VL_SHIFTR_III(32,32,32, vlSelfRef.top_tb__DOT__DUT__DOT__INST1__DOT__addra, 2U)),32);
        bufp->chgIData(oldp+153,(vlSelfRef.top_tb__DOT__DUT__DOT__INST11__DOT__MEM_rd_write_data),32);
        bufp->chgBit(oldp+154,(vlSelfRef.top_tb__DOT__DUT__DOT__INST2__DOT__ZeroOp));
        bufp->chgCData(oldp+155,(vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__opcode),7);
        bufp->chgCData(oldp+156,(vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__funct3),3);
        bufp->chgSData(oldp+157,(vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__intimm1),12);
        bufp->chgIData(oldp+158,(vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__intimm2),20);
        bufp->chgIData(oldp+159,(vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__imm1),32);
        bufp->chgIData(oldp+160,(vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__imm2),32);
        bufp->chgIData(oldp+161,(vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__imm3),32);
        bufp->chgIData(oldp+162,(vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__imm4),32);
        bufp->chgBit(oldp+163,((1U & (vlSelfRef.top_tb__DOT__DUT__DOT__ID_instruction 
                                      >> 5U))));
        bufp->chgIData(oldp+164,(vlSelfRef.top_tb__DOT__DUT__DOT__INST9__DOT__DMEM_shifted_word),32);
        bufp->chgIData(oldp+165,(vlSelfRef.top_tb__DOT__DUT__DOT__INST9__DOT__DMEM_result),32);
    }
    bufp->chgBit(oldp+166,(vlSelfRef.rst_n));
    bufp->chgBit(oldp+167,(vlSelfRef.clk));
    bufp->chgIData(oldp+168,(vlSelfRef.top_tb__DOT__DUT__DOT__IF_pc),32);
    bufp->chgBit(oldp+169,(vlSelfRef.top_tb__DOT__DUT__DOT__ID_PostFlush));
    bufp->chgIData(oldp+170,((vlSelfRef.top_tb__DOT__DUT__DOT__EX_rs1_data_final 
                              + ((vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[1U] 
                                  << 0x00000011U) | 
                                 (vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[0U] 
                                  >> 0x0000000fU)))),32);
}

void Vtop_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_cleanup\n"); );
    // Body
    Vtop_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop_tb___024root*>(voidSelf);
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
