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
