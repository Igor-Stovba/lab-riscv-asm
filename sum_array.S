    .text
    .globl sum_array

sum_array:
    li t0, 0        
    li t1, 16       

loop:
    beqz t1, done

    lw t2, 0(a0)   
    add t0, t0, t2  

    addi a0, a0, 4  
    addi t1, t1, -1   

    j loop

done:
    mv a0, t0      
    ret