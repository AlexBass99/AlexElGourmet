#Dificultad 1

#.006

select cod, nombre,'tiene el precio de', pvp 
from articulo 												
where pvp < 100; 


#Dificultad A

#.007

select DNI, email, nombre, apellidos 
from usuario												
where provincia = 33; 


#.008

select  provincia.*
from provincia, usuario								
where usuario.provincia = provincia.codp; 


#.009

select distinct provincia.*
from provincia, usuario								
where usuario.provincia = provincia.codp
order by provincia.nombre;   


#.010

select email, 'No tiene teléfono' 
from usuario u, provincia pv
where u.provincia = pv.codp and pv.nombre = 'Murcia' 
and u.telefono is null;


#.012

select nombre 
from articulo a
where marca is null;


#.014

select a.cod, nombre, pvp
from articulo a, pack p
where p.cod = a.cod;


#.015

select a.cod, nombre, marca
from articulo a, pack p
where a.cod = p.cod;


#.017

select articulo, nombre, marca, pvp, importe
from articulo a, linped l
where l.numPedido = 1 and l.articulo = a.cod;


#.022

select cod, sensor, pantalla
from camara 
where pantalla is not null;


#Dificultad B


#.018

select a.cod, a.nombre, a.marca, a.pvp, l.importe
from linped l, tv, articulo a
where numpedido = 1;


#.019

select fecha, usuario, articulo, nombre, marca, pvp, importe
from pedido p, linped l, tv, articulo a
where l.numPedido = 1 and l.numPedido = p.numPedido
and a.cod = tv.cod;


#Dificultad C


#.025

select a1.cod, a1.nombre, a1.pvp, a2.cod, a2.nombre, a2.pvp
from articulo a1, ptienea p, articulo a2 
where p.pack = a1.cod
and p.articulo = a2.cod;