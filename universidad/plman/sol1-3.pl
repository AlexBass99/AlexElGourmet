:- use_module('pl-man-game/main').

do(get(left)) :- see(normal,left,'r').
do(move(left)) :- see(normal,up,'E'), see(normal,up-right,'E'), writeln('HUIDA2').
do(move(down)) :- see(normal,left,'E'), see(normal,down-right,'E'), writeln('HUIDA').
do(use(left)) :- havingObject, see(normal,left,'|').
do(move(none)) :- see(normal,up-right,'E').
do(move(up)) :- not(havingObject), see(normal,down-right,'E'), writeln('TIRAR').


do(move(left)) :- not(havingObject), see(normal,up-left,'.'), see(normal,left,' '), see(normal,right,'#'), writeln('Salida8').  
do(move(left)) :- not(havingObject) , see(normal,left,'.'), see(normal,right,'#'), writeln('Salida7').
do(move(none)) :- see(normal,left,'E'), writeln('Quieto').
do(move(down)) :- see(normal,down,'.'), see(normal,down-right,'#'), see(normal,up,'#'), writeln('Salida4').
do(move(down)) :- havingObject ,see(normal,down,'.'), see(normal,left,'.'),see(normal,down-right,'#'),see(normal,right,'#'), writeln('Salida5').
do(move(left)) :- havingObject ,see(normal,left,' '), see(normal,up-left,'#'), see(normal,up,'#'), see(normal,up-right,'#'), see(normal,right,' '), see(normal,down-right,' '), see(normal,down,' '), see(normal,down-left,'#'), writeln('Salida6').



do(move(left)) :- see(normal,left,'.'), writeln('PuntoIzq').
do(drop(down)) :- havingObject, see(normal,right,'E'), see(normal,up,'.').
do(move(left)) :- not(havingObject), see(normal,right,'E').
do(move(right)) :- see(normal,right,'.'), writeln('PuntoDer').
do(move(down)) :- see(normal,down,'.'), writeln('PuntoAba').
do(move(up)) :- see(normal,up,'.'), writeln('PuntoArr').


do(move(left)) :- see(normal,right,' '), see(normal,up,'#'),see(normal,down,'#'), see(normal,left,' '), see(normal,up-right,'#'), writeln('Salida3').
do(move(up)) :- see(normal,right,'v'), writeln('Salida1').
do(move(left)) :- see(normal,up,'a'), writeln('Salida2').



do(move(right)) :-writeln('DERECHA').


