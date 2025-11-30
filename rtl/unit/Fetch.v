`timescale 1ns/1ps

module Fetch(
    input Branch, branch_taken, ID_Jump, EX_Jump, ID_ALUSrc, EX_ALUSrc,
    input [31:0] pc, ID_pc_imm, EX_pc_imm, rs1_imm,
    output reg [31:0] next_pc,
    output reg ID_Flush, EX_Flush
);

    always @ (*) begin

        ID_Flush = 0;
        EX_Flush = 0;
        
        // Branch Instruction Logic
        if (Branch && branch_taken) begin

            next_pc = EX_pc_imm;
            ID_Flush = 1;
            EX_Flush = 1;

        end
        // Jump Instruction Logic
        else if (ID_Jump && ID_ALUSrc == 0) begin 

            ID_Flush = 1;
            next_pc = ID_pc_imm; // JAL

        end

        else if (EX_Jump && EX_ALUSrc != 0) begin
            
            ID_Flush = 1;
            EX_Flush = 1;
            next_pc = rs1_imm & 32'hFFFFFFFE; // JALR, clear lsb to ensure word alignment
            

        end

        else next_pc = pc+4;

    end


endmodule