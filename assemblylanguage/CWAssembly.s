.data
var: .word 3
     .word 4
     .word 5
     .word -1
.text
      la $t0, list
      lw $s0, 0($t0)
      addi $t1, $0, 3
loop: beq $t1, $0, done
      addi $t0, $t0, 4
      lw $t2, 0($t0)
      add $s0, $s0, $t2
      addi $t1, $t1, -1
      j loop         #jump back to loop, adds 4 back to address, goes to 5, loads address into t2, add that to s0, )
done: sw $s0, 0($t0)
