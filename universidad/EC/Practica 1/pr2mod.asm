#Segundo Programa con nombres espec�ficos

.text 0x00400000		#Ponemos esta direcci�n de memoria como la inicial

addiu $t0, $zero, 10 		#A�adimos a la posici�n 8 el n�mero 10 ya que se lo sumamos a la Zero y la enviamos a la anterior
addiu $t4, $t0, 0 		#Copiamos el resultado de la posici�n 8 a la 12
addiu $t0, $t0, -1		#En la posici�n 8 le restamos 1 a su valor
