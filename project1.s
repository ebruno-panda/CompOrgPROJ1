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
		li $t6, 0x30 # $t6 = '0' 
		li $t7, 0x39 # $t7 = '9' 
		li $v0, 0 # initialize $v0 = 0 
		move $t0, $a0 # $t0 = pointer to string 
		lb $t1, ($t0) # load $t1 = digit character

	ITERAR: 
		beq $t1, 0x20, spaceCount #checks for spaces
		blt $t1, $t6, Zilch # char < ‘0’ 
		bgt $t1, $t7, HEX # check if hex digit
		bgt $t1, $t5, HEXS # check if little hex digit	 
