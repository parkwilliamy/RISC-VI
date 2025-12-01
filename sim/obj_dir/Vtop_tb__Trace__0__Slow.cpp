// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop_tb__Syms.h"


VL_ATTR_COLD void Vtop_tb___024root__trace_init_sub__TOP__0(Vtop_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_init_sub__TOP__0\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->pushPrefix("$rootio", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+167,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+168,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("top_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+167,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+168,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"RVMODEL_DATA_BEGIN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"RVMODEL_DATA_END",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"tohost",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+5,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+6,0,"fd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("DUT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+167,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+168,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+172,0,"wea",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+42,0,"web",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+111,0,"addra",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+43,0,"addrb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"doa",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+8,0,"dob",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+173,0,"dia",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+112,0,"dib",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+44,0,"IF_ID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+45,0,"ID_EX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 194,0);
    tracep->declArray(c+52,0,"EX_MEM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 148,0);
    tracep->declArray(c+57,0,"MEM_WB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 110,0);
    tracep->declBus(c+169,0,"IF_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+113,0,"ID_instruction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+44,0,"ID_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+114,0,"ID_opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+115,0,"ID_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,7);
    tracep->declBus(c+116,0,"ID_funct3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 14,12);
    tracep->declBus(c+117,0,"ID_rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,15);
    tracep->declBus(c+118,0,"ID_rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,20);
    tracep->declBus(c+119,0,"ID_funct7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,25);
    tracep->declBit(c+120,0,"ID_Stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+121,0,"ID_Flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+170,0,"ID_PostFlush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+122,0,"ID_ValidReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+123,0,"ID_ALUOp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+124,0,"ID_RegSrc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+125,0,"ID_ALUSrc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+126,0,"ID_RegWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+127,0,"ID_MemRead",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+128,0,"ID_MemWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+129,0,"ID_Branch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+130,0,"ID_Jump",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+131,0,"ID_field",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+132,0,"ID_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+133,0,"ID_pc_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+134,0,"ID_rs1_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+135,0,"ID_rs2_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+61,0,"WB_RegWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+62,0,"WB_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+136,0,"WB_rd_write_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+137,0,"EX_zero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+138,0,"EX_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+139,0,"EX_overflow",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+140,0,"EX_carry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+63,0,"EX_field",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+64,0,"EX_ValidReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+65,0,"EX_funct3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+66,0,"EX_ALUOp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+67,0,"EX_RegSrc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+68,0,"EX_ALUSrc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"EX_RegWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"EX_MemRead",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"EX_MemWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"EX_Branch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"EX_Jump",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+74,0,"EX_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+75,0,"EX_rs1_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+76,0,"EX_rs2_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+77,0,"EX_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+78,0,"EX_pc_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+79,0,"EX_rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+80,0,"EX_rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+81,0,"EX_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+141,0,"EX_op1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+142,0,"EX_op2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+143,0,"EX_rs1_fwd_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+144,0,"EX_rs2_fwd_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+145,0,"EX_rs1_data_final",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+146,0,"EX_rs2_data_final",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+147,0,"EX_Flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+148,0,"EX_ALU_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+149,0,"EX_branch_taken",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+171,0,"EX_rs1_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+82,0,"MEM_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+83,0,"MEM_funct3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+84,0,"MEM_ValidReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+85,0,"MEM_RegSrc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+86,0,"MEM_RegWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+87,0,"MEM_pc_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+43,0,"MEM_ALU_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+88,0,"MEM_rs2_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+150,0,"MEM_rs2_fwd_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+151,0,"MEM_rs2_data_final",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+89,0,"MEM_rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+90,0,"MEM_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+91,0,"MEM_MemRead",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+92,0,"MEM_MemWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+93,0,"WB_pc_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+94,0,"WB_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+95,0,"WB_ALU_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+96,0,"WB_funct3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+97,0,"WB_ValidReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+98,0,"WB_RegSrc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+99,0,"WB_MemRead",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+152,0,"next_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+100,0,"EX_rs1_fwd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+101,0,"EX_rs2_fwd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"MEM_rs2_fwd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("INST1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+168,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+172,0,"wea",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+42,0,"web",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+111,0,"addra",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+43,0,"addrb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+173,0,"dia",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+112,0,"dib",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"doa",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+8,0,"dob",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+174,0,"IMEM_START",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+175,0,"IMEM_END",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+175,0,"DMEM_START",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+176,0,"DMEM_END",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+9,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+153,0,"row_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+103,0,"row_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("INST10", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+72,0,"Branch",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+149,0,"branch_taken",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+130,0,"ID_Jump",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"EX_Jump",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"ID_ALUSrc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+68,0,"EX_ALUSrc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+169,0,"pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+133,0,"ID_pc_imm",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+78,0,"EX_pc_imm",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+171,0,"rs1_imm",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+152,0,"next_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+121,0,"ID_Flush",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+147,0,"EX_Flush",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("INST11", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+43,0,"MEM_ALU_result",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+82,0,"MEM_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+87,0,"MEM_pc_imm",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+136,0,"WB_rd_write_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+85,0,"MEM_RegSrc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+79,0,"EX_rs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+80,0,"EX_rs2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+89,0,"MEM_rs2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+90,0,"MEM_rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+62,0,"WB_rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+64,0,"EX_ValidReg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+84,0,"MEM_ValidReg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+97,0,"WB_ValidReg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+91,0,"MEM_MemRead",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+92,0,"MEM_MemWrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+99,0,"WB_MemRead",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+100,0,"EX_rs1_fwd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+101,0,"EX_rs2_fwd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"MEM_rs2_fwd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+143,0,"EX_rs1_fwd_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+144,0,"EX_rs2_fwd_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+150,0,"MEM_rs2_fwd_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+104,0,"EX_rs1_MEM_fwd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+105,0,"EX_rs2_MEM_fwd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+106,0,"EX_rs1_WB_fwd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"EX_rs2_WB_fwd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+154,0,"MEM_rd_write_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+108,0,"MEM_rs2_WB_fwd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("INST12", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+70,0,"EX_MemRead",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+128,0,"ID_MemWrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+81,0,"EX_rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+117,0,"ID_rs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+118,0,"ID_rs2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+122,0,"ID_ValidReg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+120,0,"Stall",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("INST2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+114,0,"opcode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+122,0,"ValidReg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+123,0,"ALUOp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+124,0,"RegSrc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+125,0,"ALUSrc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+126,0,"RegWrite",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+127,0,"MemRead",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+128,0,"MemWrite",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+129,0,"Branch",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+130,0,"Jump",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+155,0,"ZeroOp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+177,0,"OP_R",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+178,0,"OP_I",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+179,0,"OP_I_LD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+180,0,"OP_I_FENCE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+181,0,"OP_I_JALR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+182,0,"OP_S",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+183,0,"OP_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+184,0,"OP_U_LUI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+185,0,"OP_U_AUIPC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+186,0,"OP_J",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->popPrefix();
    tracep->pushPrefix("INST3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+168,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"RegWrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+117,0,"rs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+118,0,"rs2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+62,0,"rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+136,0,"rd_write_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+134,0,"rs1_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+135,0,"rs2_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("reg_file", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+10+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+4,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("INST4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+113,0,"instruction",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+132,0,"imm",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+156,0,"opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+157,0,"funct3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+158,0,"intimm1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+159,0,"intimm2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+160,0,"imm1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+161,0,"imm2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+162,0,"imm3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+163,0,"imm4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+178,0,"OP_I",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+179,0,"OP_I_LD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+180,0,"OP_I_FENCE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+181,0,"OP_I_JALR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+182,0,"OP_S",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+183,0,"OP_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+184,0,"OP_U_LUI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+185,0,"OP_U_AUIPC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+186,0,"OP_J",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->popPrefix();
    tracep->pushPrefix("INST5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+119,0,"funct7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+116,0,"funct3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+123,0,"ALUOp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+164,0,"regbit",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+131,0,"field",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("INST6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+141,0,"op1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+142,0,"op2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+63,0,"field",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+148,0,"ALU_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+137,0,"zero",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+138,0,"sign",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+139,0,"overflow",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+140,0,"carry",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+187,0,"ADD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+188,0,"SUB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+189,0,"AND",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+190,0,"OR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+191,0,"XOR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+192,0,"SLL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+193,0,"SRL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+194,0,"SRA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+195,0,"SLT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+196,0,"SLTU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("INST7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+72,0,"Branch",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+137,0,"zero",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+138,0,"sign",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+139,0,"overflow",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+140,0,"carry",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+65,0,"funct3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+149,0,"branch_taken",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("INST8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+92,0,"MemWrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+43,0,"addrb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+151,0,"rs2_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+83,0,"funct3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+42,0,"web",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+112,0,"dib",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+109,0,"byte_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("INST9", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+95,0,"ALU_result",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+93,0,"pc_imm",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+94,0,"pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+96,0,"funct3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+98,0,"RegSrc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+8,0,"DMEM_word",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+136,0,"rd_write_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+110,0,"byte_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+165,0,"DMEM_shifted_word",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+166,0,"DMEM_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtop_tb___024root__trace_init_top(Vtop_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_init_top\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtop_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop_tb___024root__trace_register(Vtop_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_register\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtop_tb___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vtop_tb___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vtop_tb___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vtop_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop_tb___024root__trace_const_0_sub_0(Vtop_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_const_0\n"); );
    // Body
    Vtop_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop_tb___024root*>(voidSelf);
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtop_tb___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop_tb___024root__trace_const_0_sub_0(Vtop_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_const_0_sub_0\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullCData(oldp+172,(vlSelfRef.top_tb__DOT__DUT__DOT__wea),4);
    bufp->fullIData(oldp+173,(vlSelfRef.top_tb__DOT__DUT__DOT__dia),32);
    bufp->fullIData(oldp+174,(0U),32);
    bufp->fullIData(oldp+175,(0x00200000U),32);
    bufp->fullIData(oldp+176,(0x00250000U),32);
    bufp->fullCData(oldp+177,(0x33U),7);
    bufp->fullCData(oldp+178,(0x13U),7);
    bufp->fullCData(oldp+179,(3U),7);
    bufp->fullCData(oldp+180,(0x0fU),7);
    bufp->fullCData(oldp+181,(0x67U),7);
    bufp->fullCData(oldp+182,(0x23U),7);
    bufp->fullCData(oldp+183,(0x63U),7);
    bufp->fullCData(oldp+184,(0x37U),7);
    bufp->fullCData(oldp+185,(0x17U),7);
    bufp->fullCData(oldp+186,(0x6fU),7);
    bufp->fullCData(oldp+187,(0U),4);
    bufp->fullCData(oldp+188,(8U),4);
    bufp->fullCData(oldp+189,(7U),4);
    bufp->fullCData(oldp+190,(6U),4);
    bufp->fullCData(oldp+191,(4U),4);
    bufp->fullCData(oldp+192,(1U),4);
    bufp->fullCData(oldp+193,(5U),4);
    bufp->fullCData(oldp+194,(0x0dU),4);
    bufp->fullCData(oldp+195,(2U),4);
    bufp->fullCData(oldp+196,(3U),4);
}

VL_ATTR_COLD void Vtop_tb___024root__trace_full_0_sub_0(Vtop_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_full_0\n"); );
    // Body
    Vtop_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop_tb___024root*>(voidSelf);
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtop_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop_tb___024root__trace_full_0_sub_0(Vtop_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_full_0_sub_0\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+1,(vlSelfRef.top_tb__DOT__RVMODEL_DATA_BEGIN),32);
    bufp->fullIData(oldp+2,(vlSelfRef.top_tb__DOT__RVMODEL_DATA_END),32);
    bufp->fullIData(oldp+3,(vlSelfRef.top_tb__DOT__tohost),32);
    bufp->fullIData(oldp+4,(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__i),32);
    bufp->fullIData(oldp+5,(vlSelfRef.top_tb__DOT__i),32);
    bufp->fullIData(oldp+6,(vlSelfRef.top_tb__DOT__fd),32);
    bufp->fullIData(oldp+7,(vlSelfRef.top_tb__DOT__DUT__DOT__doa),32);
    bufp->fullIData(oldp+8,(vlSelfRef.top_tb__DOT__DUT__DOT__dob),32);
    bufp->fullIData(oldp+9,(vlSelfRef.top_tb__DOT__DUT__DOT__INST1__DOT__i),32);
    bufp->fullIData(oldp+10,(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__reg_file[0]),32);
    bufp->fullIData(oldp+11,(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__reg_file[1]),32);
    bufp->fullIData(oldp+12,(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__reg_file[2]),32);
    bufp->fullIData(oldp+13,(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__reg_file[3]),32);
    bufp->fullIData(oldp+14,(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__reg_file[4]),32);
    bufp->fullIData(oldp+15,(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__reg_file[5]),32);
    bufp->fullIData(oldp+16,(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__reg_file[6]),32);
    bufp->fullIData(oldp+17,(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__reg_file[7]),32);
    bufp->fullIData(oldp+18,(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__reg_file[8]),32);
    bufp->fullIData(oldp+19,(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__reg_file[9]),32);
    bufp->fullIData(oldp+20,(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__reg_file[10]),32);
    bufp->fullIData(oldp+21,(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__reg_file[11]),32);
    bufp->fullIData(oldp+22,(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__reg_file[12]),32);
    bufp->fullIData(oldp+23,(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__reg_file[13]),32);
    bufp->fullIData(oldp+24,(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__reg_file[14]),32);
    bufp->fullIData(oldp+25,(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__reg_file[15]),32);
    bufp->fullIData(oldp+26,(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__reg_file[16]),32);
    bufp->fullIData(oldp+27,(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__reg_file[17]),32);
    bufp->fullIData(oldp+28,(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__reg_file[18]),32);
    bufp->fullIData(oldp+29,(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__reg_file[19]),32);
    bufp->fullIData(oldp+30,(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__reg_file[20]),32);
    bufp->fullIData(oldp+31,(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__reg_file[21]),32);
    bufp->fullIData(oldp+32,(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__reg_file[22]),32);
    bufp->fullIData(oldp+33,(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__reg_file[23]),32);
    bufp->fullIData(oldp+34,(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__reg_file[24]),32);
    bufp->fullIData(oldp+35,(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__reg_file[25]),32);
    bufp->fullIData(oldp+36,(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__reg_file[26]),32);
    bufp->fullIData(oldp+37,(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__reg_file[27]),32);
    bufp->fullIData(oldp+38,(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__reg_file[28]),32);
    bufp->fullIData(oldp+39,(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__reg_file[29]),32);
    bufp->fullIData(oldp+40,(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__reg_file[30]),32);
    bufp->fullIData(oldp+41,(vlSelfRef.top_tb__DOT__DUT__DOT__INST3__DOT__reg_file[31]),32);
    bufp->fullCData(oldp+42,(vlSelfRef.top_tb__DOT__DUT__DOT__web),4);
    bufp->fullIData(oldp+43,(((vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[2U] 
                               << 0x00000016U) | (vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[1U] 
                                                  >> 0x0000000aU))),32);
    bufp->fullIData(oldp+44,(vlSelfRef.top_tb__DOT__DUT__DOT__IF_ID),32);
    bufp->fullWData(oldp+45,(vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX),195);
    bufp->fullWData(oldp+52,(vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM),149);
    bufp->fullWData(oldp+57,(vlSelfRef.top_tb__DOT__DUT__DOT__MEM_WB),111);
    bufp->fullBit(oldp+61,((1U & (vlSelfRef.top_tb__DOT__DUT__DOT__MEM_WB[1U] 
                                  >> 5U))));
    bufp->fullCData(oldp+62,((0x0000001fU & vlSelfRef.top_tb__DOT__DUT__DOT__MEM_WB[0U])),5);
    bufp->fullCData(oldp+63,((vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[3U] 
                              >> 0x0000001cU)),4);
    bufp->fullCData(oldp+64,((7U & (vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[3U] 
                                    >> 0x00000019U))),3);
    bufp->fullCData(oldp+65,((7U & vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[4U])),3);
    bufp->fullCData(oldp+66,((3U & (vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[3U] 
                                    >> 0x00000017U))),2);
    bufp->fullCData(oldp+67,((3U & (vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[3U] 
                                    >> 0x00000015U))),2);
    bufp->fullBit(oldp+68,((1U & (vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[3U] 
                                  >> 0x00000014U))));
    bufp->fullBit(oldp+69,((1U & (vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[3U] 
                                  >> 0x00000013U))));
    bufp->fullBit(oldp+70,((1U & (vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[3U] 
                                  >> 0x00000012U))));
    bufp->fullBit(oldp+71,((1U & (vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[3U] 
                                  >> 0x00000011U))));
    bufp->fullBit(oldp+72,((1U & (vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[3U] 
                                  >> 0x00000010U))));
    bufp->fullBit(oldp+73,((1U & (vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[3U] 
                                  >> 0x0000000fU))));
    bufp->fullIData(oldp+74,(((vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[6U] 
                               << 0x0000001dU) | (vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[5U] 
                                                  >> 3U))),32);
    bufp->fullIData(oldp+75,(((vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[3U] 
                               << 0x00000011U) | (vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[2U] 
                                                  >> 0x0000000fU))),32);
    bufp->fullIData(oldp+76,(((vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[2U] 
                               << 0x00000011U) | (vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[1U] 
                                                  >> 0x0000000fU))),32);
    bufp->fullIData(oldp+77,(((vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[1U] 
                               << 0x00000011U) | (vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[0U] 
                                                  >> 0x0000000fU))),32);
    bufp->fullIData(oldp+78,(((vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[5U] 
                               << 0x0000001dU) | (vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[4U] 
                                                  >> 3U))),32);
    bufp->fullCData(oldp+79,((0x0000001fU & (vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[0U] 
                                             >> 5U))),5);
    bufp->fullCData(oldp+80,((0x0000001fU & vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[0U])),5);
    bufp->fullCData(oldp+81,((0x0000001fU & (vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[0U] 
                                             >> 0x0000000aU))),5);
    bufp->fullIData(oldp+82,(((vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[4U] 
                               << 0x0000000bU) | (vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[3U] 
                                                  >> 0x00000015U))),32);
    bufp->fullCData(oldp+83,((7U & (vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[2U] 
                                    >> 0x00000012U))),3);
    bufp->fullCData(oldp+84,((7U & (vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[2U] 
                                    >> 0x0000000fU))),3);
    bufp->fullCData(oldp+85,((3U & (vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[2U] 
                                    >> 0x0000000dU))),2);
    bufp->fullBit(oldp+86,((1U & (vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[2U] 
                                  >> 0x0000000cU))));
    bufp->fullIData(oldp+87,(((vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[3U] 
                               << 0x0000000bU) | (vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[2U] 
                                                  >> 0x00000015U))),32);
    bufp->fullIData(oldp+88,(((vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[1U] 
                               << 0x00000016U) | (vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[0U] 
                                                  >> 0x0000000aU))),32);
    bufp->fullCData(oldp+89,((0x0000001fU & (vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[0U] 
                                             >> 5U))),5);
    bufp->fullCData(oldp+90,((0x0000001fU & vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[0U])),5);
    bufp->fullBit(oldp+91,((1U & (vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[2U] 
                                  >> 0x0000000bU))));
    bufp->fullBit(oldp+92,((1U & (vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[2U] 
                                  >> 0x0000000aU))));
    bufp->fullIData(oldp+93,(((vlSelfRef.top_tb__DOT__DUT__DOT__MEM_WB[2U] 
                               << 0x00000011U) | (vlSelfRef.top_tb__DOT__DUT__DOT__MEM_WB[1U] 
                                                  >> 0x0000000fU))),32);
    bufp->fullIData(oldp+94,(((vlSelfRef.top_tb__DOT__DUT__DOT__MEM_WB[3U] 
                               << 0x00000011U) | (vlSelfRef.top_tb__DOT__DUT__DOT__MEM_WB[2U] 
                                                  >> 0x0000000fU))),32);
    bufp->fullIData(oldp+95,(((vlSelfRef.top_tb__DOT__DUT__DOT__MEM_WB[1U] 
                               << 0x0000001bU) | (vlSelfRef.top_tb__DOT__DUT__DOT__MEM_WB[0U] 
                                                  >> 5U))),32);
    bufp->fullCData(oldp+96,((7U & (vlSelfRef.top_tb__DOT__DUT__DOT__MEM_WB[1U] 
                                    >> 0x0000000cU))),3);
    bufp->fullCData(oldp+97,((7U & (vlSelfRef.top_tb__DOT__DUT__DOT__MEM_WB[1U] 
                                    >> 9U))),3);
    bufp->fullCData(oldp+98,((3U & (vlSelfRef.top_tb__DOT__DUT__DOT__MEM_WB[1U] 
                                    >> 7U))),2);
    bufp->fullBit(oldp+99,((1U & (vlSelfRef.top_tb__DOT__DUT__DOT__MEM_WB[1U] 
                                  >> 6U))));
    bufp->fullBit(oldp+100,((((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST11__DOT__EX_rs1_MEM_fwd) 
                              | (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST11__DOT__EX_rs1_WB_fwd)) 
                             & (0U != (0x0000001fU 
                                       & (vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[0U] 
                                          >> 5U))))));
    bufp->fullBit(oldp+101,((((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST11__DOT__EX_rs2_MEM_fwd) 
                              | (IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST11__DOT__EX_rs2_WB_fwd)) 
                             & (0U != (0x0000001fU 
                                       & vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[0U])))));
    bufp->fullBit(oldp+102,(((IData)(vlSelfRef.top_tb__DOT__DUT__DOT__INST11__DOT__MEM_rs2_WB_fwd) 
                             & (0U != (0x0000001fU 
                                       & (vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[0U] 
                                          >> 5U))))));
    bufp->fullIData(oldp+103,(VL_SHIFTR_III(32,32,32, 
                                            ((vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[2U] 
                                              << 0x00000016U) 
                                             | (vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[1U] 
                                                >> 0x0000000aU)), 2U)),32);
    bufp->fullBit(oldp+104,(vlSelfRef.top_tb__DOT__DUT__DOT__INST11__DOT__EX_rs1_MEM_fwd));
    bufp->fullBit(oldp+105,(vlSelfRef.top_tb__DOT__DUT__DOT__INST11__DOT__EX_rs2_MEM_fwd));
    bufp->fullBit(oldp+106,(vlSelfRef.top_tb__DOT__DUT__DOT__INST11__DOT__EX_rs1_WB_fwd));
    bufp->fullBit(oldp+107,(vlSelfRef.top_tb__DOT__DUT__DOT__INST11__DOT__EX_rs2_WB_fwd));
    bufp->fullBit(oldp+108,(vlSelfRef.top_tb__DOT__DUT__DOT__INST11__DOT__MEM_rs2_WB_fwd));
    bufp->fullCData(oldp+109,((3U & (vlSelfRef.top_tb__DOT__DUT__DOT__EX_MEM[1U] 
                                     >> 0x0000000aU))),2);
    bufp->fullCData(oldp+110,((3U & (vlSelfRef.top_tb__DOT__DUT__DOT__MEM_WB[0U] 
                                     >> 5U))),2);
    bufp->fullIData(oldp+111,(vlSelfRef.top_tb__DOT__DUT__DOT__INST1__DOT__addra),32);
    bufp->fullIData(oldp+112,(vlSelfRef.top_tb__DOT__DUT__DOT__dib),32);
    bufp->fullIData(oldp+113,(vlSelfRef.top_tb__DOT__DUT__DOT__ID_instruction),32);
    bufp->fullCData(oldp+114,((0x0000007fU & vlSelfRef.top_tb__DOT__DUT__DOT__ID_instruction)),7);
    bufp->fullCData(oldp+115,((0x0000001fU & (vlSelfRef.top_tb__DOT__DUT__DOT__ID_instruction 
                                              >> 7U))),5);
    bufp->fullCData(oldp+116,((7U & (vlSelfRef.top_tb__DOT__DUT__DOT__ID_instruction 
                                     >> 0x0000000cU))),3);
    bufp->fullCData(oldp+117,((0x0000001fU & (vlSelfRef.top_tb__DOT__DUT__DOT__ID_instruction 
                                              >> 0x0000000fU))),5);
    bufp->fullCData(oldp+118,((0x0000001fU & (vlSelfRef.top_tb__DOT__DUT__DOT__ID_instruction 
                                              >> 0x00000014U))),5);
    bufp->fullCData(oldp+119,((vlSelfRef.top_tb__DOT__DUT__DOT__ID_instruction 
                               >> 0x00000019U)),7);
    bufp->fullBit(oldp+120,(vlSelfRef.top_tb__DOT__DUT__DOT__ID_Stall));
    bufp->fullBit(oldp+121,(vlSelfRef.top_tb__DOT__DUT__DOT__ID_Flush));
    bufp->fullCData(oldp+122,(vlSelfRef.top_tb__DOT__DUT__DOT__ID_ValidReg),3);
    bufp->fullCData(oldp+123,(vlSelfRef.top_tb__DOT__DUT__DOT__ID_ALUOp),2);
    bufp->fullCData(oldp+124,(vlSelfRef.top_tb__DOT__DUT__DOT__ID_RegSrc),2);
    bufp->fullBit(oldp+125,(vlSelfRef.top_tb__DOT__DUT__DOT__ID_ALUSrc));
    bufp->fullBit(oldp+126,(vlSelfRef.top_tb__DOT__DUT__DOT__ID_RegWrite));
    bufp->fullBit(oldp+127,(vlSelfRef.top_tb__DOT__DUT__DOT__ID_MemRead));
    bufp->fullBit(oldp+128,(vlSelfRef.top_tb__DOT__DUT__DOT__ID_MemWrite));
    bufp->fullBit(oldp+129,(vlSelfRef.top_tb__DOT__DUT__DOT__ID_Branch));
    bufp->fullBit(oldp+130,(vlSelfRef.top_tb__DOT__DUT__DOT__ID_Jump));
    bufp->fullCData(oldp+131,(vlSelfRef.top_tb__DOT__DUT__DOT__ID_field),4);
    bufp->fullIData(oldp+132,(vlSelfRef.top_tb__DOT__DUT__DOT__ID_imm),32);
    bufp->fullIData(oldp+133,(vlSelfRef.top_tb__DOT__DUT__DOT__ID_pc_imm),32);
    bufp->fullIData(oldp+134,(vlSelfRef.top_tb__DOT__DUT__DOT__ID_rs1_data),32);
    bufp->fullIData(oldp+135,(vlSelfRef.top_tb__DOT__DUT__DOT__ID_rs2_data),32);
    bufp->fullIData(oldp+136,(vlSelfRef.top_tb__DOT__DUT__DOT__WB_rd_write_data),32);
    bufp->fullBit(oldp+137,((0U == vlSelfRef.top_tb__DOT__DUT__DOT__EX_ALU_result)));
    bufp->fullBit(oldp+138,(VL_GTS_III(32, 0U, vlSelfRef.top_tb__DOT__DUT__DOT__EX_ALU_result)));
    bufp->fullBit(oldp+139,((((vlSelfRef.top_tb__DOT__DUT__DOT__EX_op1 
                               >> 0x0000001fU) != (vlSelfRef.top_tb__DOT__DUT__DOT__EX_op2 
                                                   >> 0x0000001fU)) 
                             & ((vlSelfRef.top_tb__DOT__DUT__DOT__EX_ALU_result 
                                 >> 0x0000001fU) != 
                                (vlSelfRef.top_tb__DOT__DUT__DOT__EX_op1 
                                 >> 0x0000001fU)))));
    bufp->fullBit(oldp+140,(vlSelfRef.top_tb__DOT__DUT__DOT__EX_carry));
    bufp->fullIData(oldp+141,(vlSelfRef.top_tb__DOT__DUT__DOT__EX_op1),32);
    bufp->fullIData(oldp+142,(vlSelfRef.top_tb__DOT__DUT__DOT__EX_op2),32);
    bufp->fullIData(oldp+143,(vlSelfRef.top_tb__DOT__DUT__DOT__EX_rs1_fwd_data),32);
    bufp->fullIData(oldp+144,(vlSelfRef.top_tb__DOT__DUT__DOT__EX_rs2_fwd_data),32);
    bufp->fullIData(oldp+145,(vlSelfRef.top_tb__DOT__DUT__DOT__EX_rs1_data_final),32);
    bufp->fullIData(oldp+146,(vlSelfRef.top_tb__DOT__DUT__DOT__EX_rs2_data_final),32);
    bufp->fullBit(oldp+147,(vlSelfRef.top_tb__DOT__DUT__DOT__EX_Flush));
    bufp->fullIData(oldp+148,(vlSelfRef.top_tb__DOT__DUT__DOT__EX_ALU_result),32);
    bufp->fullBit(oldp+149,(vlSelfRef.top_tb__DOT__DUT__DOT__EX_branch_taken));
    bufp->fullIData(oldp+150,(vlSelfRef.top_tb__DOT__DUT__DOT__MEM_rs2_fwd_data),32);
    bufp->fullIData(oldp+151,(vlSelfRef.top_tb__DOT__DUT__DOT__MEM_rs2_data_final),32);
    bufp->fullIData(oldp+152,(vlSelfRef.top_tb__DOT__DUT__DOT__next_pc),32);
    bufp->fullIData(oldp+153,(VL_SHIFTR_III(32,32,32, vlSelfRef.top_tb__DOT__DUT__DOT__INST1__DOT__addra, 2U)),32);
    bufp->fullIData(oldp+154,(vlSelfRef.top_tb__DOT__DUT__DOT__INST11__DOT__MEM_rd_write_data),32);
    bufp->fullBit(oldp+155,(vlSelfRef.top_tb__DOT__DUT__DOT__INST2__DOT__ZeroOp));
    bufp->fullCData(oldp+156,(vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__opcode),7);
    bufp->fullCData(oldp+157,(vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__funct3),3);
    bufp->fullSData(oldp+158,(vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__intimm1),12);
    bufp->fullIData(oldp+159,(vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__intimm2),20);
    bufp->fullIData(oldp+160,(vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__imm1),32);
    bufp->fullIData(oldp+161,(vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__imm2),32);
    bufp->fullIData(oldp+162,(vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__imm3),32);
    bufp->fullIData(oldp+163,(vlSelfRef.top_tb__DOT__DUT__DOT__INST4__DOT__imm4),32);
    bufp->fullBit(oldp+164,((1U & (vlSelfRef.top_tb__DOT__DUT__DOT__ID_instruction 
                                   >> 5U))));
    bufp->fullIData(oldp+165,(vlSelfRef.top_tb__DOT__DUT__DOT__INST9__DOT__DMEM_shifted_word),32);
    bufp->fullIData(oldp+166,(vlSelfRef.top_tb__DOT__DUT__DOT__INST9__DOT__DMEM_result),32);
    bufp->fullBit(oldp+167,(vlSelfRef.rst_n));
    bufp->fullBit(oldp+168,(vlSelfRef.clk));
    bufp->fullIData(oldp+169,(vlSelfRef.top_tb__DOT__DUT__DOT__IF_pc),32);
    bufp->fullBit(oldp+170,(vlSelfRef.top_tb__DOT__DUT__DOT__ID_PostFlush));
    bufp->fullIData(oldp+171,((vlSelfRef.top_tb__DOT__DUT__DOT__EX_rs1_data_final 
                               + ((vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[1U] 
                                   << 0x00000011U) 
                                  | (vlSelfRef.top_tb__DOT__DUT__DOT__ID_EX[0U] 
                                     >> 0x0000000fU)))),32);
}
