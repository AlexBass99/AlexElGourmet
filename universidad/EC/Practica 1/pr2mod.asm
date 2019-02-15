#Segundo Programa con nombres específicos

.text 0x00400000		#Ponemos esta dirección de memoria como la inicial

addiu $t0, $zero, 10 		#Añadimos a la posición 8 el número 10 ya que se lo sumamos a la Zero y la enviamos a la anterior
addiu $t4, $t0, 0 		#Copiamos el resultado de la posición 8 a la 12
addiu $t0, $t0, -1		#En la posición 8 le restamos 1 a su valor
