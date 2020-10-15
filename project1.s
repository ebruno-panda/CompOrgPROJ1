.data
	userInput:  .space 11 #how many characters allowed

.text
	main:
		li $v0, 8 #read user input (text)
		la $a0, userInput
		li $a1, 11
		
		b ITERAR
		syscall
		
		
	decstr2b30: # convert hex string to int
		add $t4, $zero, $zero
		
		
		li $s4, 0x61 # $t4 = 'a' 
		li $s5, 0x74 # $t7 = 't'
		li $t4, 0x41 # $t4 = 'A' 
		li $t5, 0x54 # $t7 = 'T' 
