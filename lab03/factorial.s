.globl factorial

.data
n: .word 8

.text
main:
    la t0, n
    lw a0, 0(t0)
    jal ra, factorial

    addi a1, a0, 0
    addi a0, x0, 1
    ecall # Print Result

    addi a1, x0, '\n'
    addi a0, x0, 11
    ecall # Print newline

    addi a0, x0, 10
    ecall # Exit

factorial:
    addi t0, x0, 1                # t0 is the accumulator
    li t1, 1
loop:
    bge t1, a0, fac_exit
    addi t1, t1, 1
    mul t0, t0, t1
    j loop
fac_exit:
    mv a0, t0
    ret