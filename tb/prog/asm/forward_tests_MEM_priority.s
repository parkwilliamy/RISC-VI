    .globl _start

    .section .text
_start:
    # Both EX/MEM and MEM/WB with MEM priority

    addi x1, x0, 2
    addi x1, x1, 4
    addi x1, x1, 6

    addi x4, x0, 8
    addi x4, x4, 10
    or x4, x4, x4

    addi x7, x0, 14
    add x7, x7, x7
    sll x7, x7, x7

   
  
    