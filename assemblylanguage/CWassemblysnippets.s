#1
$s0 = $s3 - $s2

nor $s2, $s2, $0
addi $s2, $s2, 1
add $s0, $s3, $s2

#2 if ($s1 is even)
$s2 = $s2 + 8
andi $t0, $s1, 1 #here you take the value in $s1, which lets say is 2, then find the binary of that (0011), then add 1 to that (00001), which gives you all 0s
bne $t0, $0, else
addi $s2, $s2, 8
add $s5, $s1, $s2

#3
add $s0, $0, $t1
slt $t4, $t2, $s0
bne $0, $t4, NEXT
NEXT $s0, $0, $t2
