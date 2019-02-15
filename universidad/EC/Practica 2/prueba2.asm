# Tercer Programa

.text 0x00400000   

addiu $t0, $zero, 25   		#Introducimos en la posición $t0 un 25
addiu $t1, $zero, 5   		#Introducimos en la posición $t1 un 5
sub $t2, $t0, $t1 		#Mediante una resta introducimos en la posición $t2 el contenido de $t1 con el signo cambiado
addi $v0, $zero, 10 		#Salimos del programa   
syscall