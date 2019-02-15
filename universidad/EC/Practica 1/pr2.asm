#Segundo Programa

.text 0x00400000		#Ponemos esta dirección de memoria como la inicial

addi $8, $0, 10 		#Añadimos a la posición 8 un 10 ya que se lo sumamos a la Zero
addi $12, $8, 0 		#Copiamos el resultado de la posición 8 a la 12
addi $8, $8, -1			#En la posición 8 le restamos 1 a su valor
