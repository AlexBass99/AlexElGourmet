#Cuarto Programa

.text 0x00400000		#Ponemos esta direcci�n de memoria como la inicial

addi $t4, $zero, 5 		#Sumamos 5 a la posici�n $zero y lo introducimos en la $t4
addi $t2, $zero, 8		#Sumamos 8 a la posici�n $zero y lo introducimos en la $t2
addi $t5, $t4, 10		#Sumamos 10 a la posici�n $t4 y lo introducimos en la $t5
addi $t2, $t2, -4 		#Sumamos '-4' a la posici�n $t2
addi $t6, $t5, -30		#Sumamos '-30' a la posici�n $t5 y lo introducimos en la $t6
addi $t7, $t2, 0		#Copiamos la informaci�n de la $t2 y lo introducimos en la $t7