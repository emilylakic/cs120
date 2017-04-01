.data
goodbye:  .asciiz "Goodbye\n"
buffer:   .space 80 #line is usually 80 spaces
          .text
main:
      addi $t1, $0, 0x71 #invariant
      la $a0, list #loads list into register $a0
      addi $a1, $0, 80 #puts a maximum value

      addi $v0, $0, 8
      syscall #generates a software interrupt

      addi $v0, $0, 10    #existing #when you need to execute (end) your code, put these 2 lines v
      syscall
