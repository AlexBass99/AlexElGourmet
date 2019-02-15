#Dificultad A

#.001

select cod, nombre
from articulo a
where a.pvp  between 400 and 500; 


#.002

select cod, nombre
from articulo a
where a.pvp = 415 or a.pvp = 129 
or a.pvp = 1259 or a.pvp = 3995;


#.003

select codp, nombre
from provincia p
where nombre not in ('Huelva', 'Sevilla', 'Asturias', 'Barcelona');


#.004

select codp
from provincia p
where nombre like 'Alicante%';


#.005

select cod, nombre, pvp
from articulo a
where marca like 'S%';


#.006

select*
from usuario
where email like '%eps%';


#.009

select email
from usuario u
where codpos not in (02012, 02018, 02032);


#.021

select nombre
from articulo 
where nombre like '%EOS%';