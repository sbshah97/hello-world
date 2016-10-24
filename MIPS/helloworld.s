#############################################	
#            Print Hello World              #
#############################################

.data
	str: .asciiz "Hello World\n"
.text
	.globl main
	main:
	la $a0, str
	addi $v0, $0, 4 	# 4 is used for printing strings
	syscall
	add $v0, $0, 10
	syscall
