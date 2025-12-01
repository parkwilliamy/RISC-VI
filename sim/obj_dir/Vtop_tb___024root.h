// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop_tb.h for the primary calling header

#ifndef VERILATED_VTOP_TB___024ROOT_H_
#define VERILATED_VTOP_TB___024ROOT_H_  // guard

#include "verilated.h"


class Vtop_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(rst_n,0,0);
        VL_IN8(clk,0,0);
        CData/*3:0*/ top_tb__DOT__DUT__DOT__wea;
        CData/*3:0*/ top_tb__DOT__DUT__DOT__web;
        CData/*0:0*/ top_tb__DOT__DUT__DOT__ID_Stall;
        CData/*0:0*/ top_tb__DOT__DUT__DOT__ID_Flush;
        CData/*0:0*/ top_tb__DOT__DUT__DOT__ID_PostFlush;
        CData/*2:0*/ top_tb__DOT__DUT__DOT__ID_ValidReg;
        CData/*1:0*/ top_tb__DOT__DUT__DOT__ID_ALUOp;
        CData/*1:0*/ top_tb__DOT__DUT__DOT__ID_RegSrc;
        CData/*0:0*/ top_tb__DOT__DUT__DOT__ID_ALUSrc;
        CData/*0:0*/ top_tb__DOT__DUT__DOT__ID_RegWrite;
        CData/*0:0*/ top_tb__DOT__DUT__DOT__ID_MemRead;
        CData/*0:0*/ top_tb__DOT__DUT__DOT__ID_MemWrite;
        CData/*0:0*/ top_tb__DOT__DUT__DOT__ID_Branch;
        CData/*0:0*/ top_tb__DOT__DUT__DOT__ID_Jump;
        CData/*3:0*/ top_tb__DOT__DUT__DOT__ID_field;
        CData/*0:0*/ top_tb__DOT__DUT__DOT__EX_carry;
        CData/*4:0*/ top_tb__DOT__DUT__DOT__EX_rs1;
        CData/*4:0*/ top_tb__DOT__DUT__DOT__EX_rs2;
        CData/*4:0*/ top_tb__DOT__DUT__DOT__EX_rd;
        CData/*0:0*/ top_tb__DOT__DUT__DOT__EX_Flush;
        CData/*0:0*/ top_tb__DOT__DUT__DOT__EX_branch_taken;
        CData/*7:0*/ top_tb__DOT__DUT__DOT__INST1__DOT____Vlvbound_h5c26a5c7__0;
        CData/*7:0*/ top_tb__DOT__DUT__DOT__INST1__DOT____Vlvbound_h853563f3__0;
        CData/*0:0*/ top_tb__DOT__DUT__DOT__INST2__DOT__ZeroOp;
        CData/*6:0*/ top_tb__DOT__DUT__DOT__INST4__DOT__opcode;
        CData/*2:0*/ top_tb__DOT__DUT__DOT__INST4__DOT__funct3;
        CData/*0:0*/ top_tb__DOT__DUT__DOT__INST11__DOT__EX_rs1_MEM_fwd;
        CData/*0:0*/ top_tb__DOT__DUT__DOT__INST11__DOT__EX_rs2_MEM_fwd;
        CData/*0:0*/ top_tb__DOT__DUT__DOT__INST11__DOT__EX_rs1_WB_fwd;
        CData/*0:0*/ top_tb__DOT__DUT__DOT__INST11__DOT__EX_rs2_WB_fwd;
        CData/*0:0*/ top_tb__DOT__DUT__DOT__INST11__DOT__MEM_rs2_WB_fwd;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__rst_n__0;
        SData/*11:0*/ top_tb__DOT__DUT__DOT__INST4__DOT__intimm1;
        VlWide<250>/*7999:0*/ top_tb__DOT__program_file;
        IData/*31:0*/ top_tb__DOT__RVMODEL_DATA_BEGIN;
        IData/*31:0*/ top_tb__DOT__RVMODEL_DATA_END;
        IData/*31:0*/ top_tb__DOT__tohost;
        IData/*31:0*/ top_tb__DOT__i;
        IData/*31:0*/ top_tb__DOT__fd;
        IData/*31:0*/ top_tb__DOT__DUT__DOT__doa;
        IData/*31:0*/ top_tb__DOT__DUT__DOT__dob;
        IData/*31:0*/ top_tb__DOT__DUT__DOT__dia;
        IData/*31:0*/ top_tb__DOT__DUT__DOT__dib;
        IData/*31:0*/ top_tb__DOT__DUT__DOT__IF_ID;
        VlWide<7>/*194:0*/ top_tb__DOT__DUT__DOT__ID_EX;
        VlWide<5>/*148:0*/ top_tb__DOT__DUT__DOT__EX_MEM;
        VlWide<4>/*110:0*/ top_tb__DOT__DUT__DOT__MEM_WB;
        IData/*31:0*/ top_tb__DOT__DUT__DOT__IF_pc;
        IData/*31:0*/ top_tb__DOT__DUT__DOT__ID_instruction;
        IData/*31:0*/ top_tb__DOT__DUT__DOT__ID_imm;
        IData/*31:0*/ top_tb__DOT__DUT__DOT__ID_pc_imm;
        IData/*31:0*/ top_tb__DOT__DUT__DOT__ID_rs1_data;
        IData/*31:0*/ top_tb__DOT__DUT__DOT__ID_rs2_data;
        IData/*31:0*/ top_tb__DOT__DUT__DOT__WB_rd_write_data;
        IData/*31:0*/ top_tb__DOT__DUT__DOT__EX_pc;
        IData/*31:0*/ top_tb__DOT__DUT__DOT__EX_imm;
        IData/*31:0*/ top_tb__DOT__DUT__DOT__EX_pc_imm;
        IData/*31:0*/ top_tb__DOT__DUT__DOT__EX_op1;
        IData/*31:0*/ top_tb__DOT__DUT__DOT__EX_op2;
        IData/*31:0*/ top_tb__DOT__DUT__DOT__EX_rs1_fwd_data;
    };
    struct {
        IData/*31:0*/ top_tb__DOT__DUT__DOT__EX_rs2_fwd_data;
        IData/*31:0*/ top_tb__DOT__DUT__DOT__EX_rs1_data_final;
        IData/*31:0*/ top_tb__DOT__DUT__DOT__EX_rs2_data_final;
        IData/*31:0*/ top_tb__DOT__DUT__DOT__EX_ALU_result;
        IData/*31:0*/ top_tb__DOT__DUT__DOT__MEM_rs2_fwd_data;
        IData/*31:0*/ top_tb__DOT__DUT__DOT__MEM_rs2_data_final;
        IData/*31:0*/ top_tb__DOT__DUT__DOT__next_pc;
        IData/*31:0*/ top_tb__DOT__DUT__DOT__INST1__DOT__addra;
        IData/*31:0*/ top_tb__DOT__DUT__DOT__INST1__DOT__i;
        IData/*31:0*/ top_tb__DOT__DUT__DOT__INST3__DOT__i;
        IData/*19:0*/ top_tb__DOT__DUT__DOT__INST4__DOT__intimm2;
        IData/*31:0*/ top_tb__DOT__DUT__DOT__INST4__DOT__imm1;
        IData/*31:0*/ top_tb__DOT__DUT__DOT__INST4__DOT__imm2;
        IData/*31:0*/ top_tb__DOT__DUT__DOT__INST4__DOT__imm3;
        IData/*31:0*/ top_tb__DOT__DUT__DOT__INST4__DOT__imm4;
        IData/*31:0*/ top_tb__DOT__DUT__DOT__INST9__DOT__DMEM_shifted_word;
        IData/*31:0*/ top_tb__DOT__DUT__DOT__INST9__DOT__DMEM_result;
        IData/*31:0*/ top_tb__DOT__DUT__DOT__INST11__DOT__MEM_rd_write_data;
        IData/*31:0*/ __Vdly__top_tb__DOT__DUT__DOT__IF_ID;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<IData/*31:0*/, 606208> top_tb__DOT__DUT__DOT__INST1__DOT__mem;
        VlUnpacked<IData/*31:0*/, 32> top_tb__DOT__DUT__DOT__INST3__DOT__reg_file;
        VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
        VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    };

    // INTERNAL VARIABLES
    Vtop_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop_tb___024root(Vtop_tb__Syms* symsp, const char* v__name);
    ~Vtop_tb___024root();
    VL_UNCOPYABLE(Vtop_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
