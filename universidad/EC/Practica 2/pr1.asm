# Primer Programa

.text 0x00400000

addi $v0, $0, 5  			#Función nº5, pedimos al usuario que introduzca un número por teclado  
syscall    				#Guarda el valor introducido en el registro $v0  

addi $a0, $v0, +1 			#Copiamos el valor de $v0 al registro $a0 pero sumandole 1  
addi $v0, $0, 1  			#Función nº1, pedimos al sistema que saque por pantalla el valor de $a0  
syscall  				#En la consola aparece dicho valor  

addi $v0, $0, 10 			#Función nº10, cerrar el programa   
syscall  				#Aplica la función 10 