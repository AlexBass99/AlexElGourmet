:- use_module('pl-man-game/main').

do(get(left)) :- see(normal,left,'+'), writeln('CogerMina').
do(get(right)) :- see(normal,right,'+'), writeln('CogerMina2').
do(drop(up)) :- havingObject, see(normal,up-right,'#'), see(normal,up,' '), see(normal,left,'.'), see(normal,right,'#'), see(normal,down,' '), writeln('BOMB').
do(move(down)) :- havingObject, see(normal,up-right,' '), see(normal,up,'#'), see(normal,left,'#'), see(normal,right,'#'), writeln('CORRE').

do(move(left)) :- see(normal,up-left,'E'), writeln('Enemigo2').
do(move(up)) :- see(normal,right,'#'), see(normal,up-right,'.'), writeln('OTRO2').
do(move(left)) :- see(normal,left,'.'), see(normal,up-left,'#'), see(normal,down-left,'#'), writeln('OTRO1').
do(move(down)) :- see(normal,left,'E'), writeln('Enemigo').

do(move(up)) :- see(normal,up,'.'), writeln('PuntoArr').
do(move(down)) :- see(normal,down,'.'), writeln('PuntoAba').
do(move(left)) :- see(normal,left,'.'), writeln('PuntoIzq').
do(move(right)) :- see(normal,right,'.'), writeln('PuntoDer').

do(move(right)) :- writeln('DERECHA').


