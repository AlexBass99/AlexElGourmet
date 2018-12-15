:- use_module('pl-man-game/main').

do(get(left)) :- see(normal,left,'+'), writeln('CogerMina').
do(get(right)) :- see(normal,right,'+'), writeln('CogerMina2').

do(drop(down)) :- havingObject, see(normal,down,' '), see(normal,down-right,'#'), see(normal,down-left,'#'), writeln('TirarAbajo').
do(drop(up)) :- havingObject, see(normal,up,' '), see(normal,up-right,'#'), see(normal,up-left,'#'), writeln('TirarArriba'). 



do(move(up)) :- see(normal,down,'+'), writeln('CubiertoArriba').
do(move(down)) :- see(normal,up,'+'), writeln('CubiertoAbajo').
do(move(left)) :- see(normal,down-left,'E'); not(see(normal,left,'#')), see(normal,down-right,'E'), writeln('Enemigo1').
do(move(right)) :- see(normal,down-right,'E'); see(normal,down,'E'); see(normal,left,'E'), writeln('Enemigo2').

do(move(down)) :- see(normal,down,'*'), writeln('SectorAbajo1').
do(move(down)) :- not(havingObject), see(normal,up-left,'#'), see(normal,left,'#'), see(normal,down-left,'#'), see(normal,down,' '), see(normal,down-right,' '), see(normal,right,' '), see(normal,up-right,' '), see(normal,up,' '), writeln('FUMADA').
do(move(left)) :- not(havingObject), see(normal,up,'#'), see(normal,down,'#'), see(normal,right,'#'), see(normal,left,' '), writeln('SectorAbajo3').
do(move(left)) :- not(havingObject), see(normal,up,'#'), see(normal,down,'#'), see(normal,right,' '), see(normal,left,' '), writeln('SectorAbajo2').



do(move(left)) :- not(havingObject), see(normal,up,'#'), see(normal,right,'#'), see(normal,left,' '), see(normal,up-left,'#'), see(normal,down-left,' '), writeln('SectorArriba1').
do(move(right)) :- not(havingObject), see(normal,up,'#'), see(normal,down,'#'), see(normal,right,' '), see(normal,left,' '), writeln('SectorArriba2').
do(move(right)) :- not(havingObject), see(normal,up,'#'), see(normal,left,'#'), see(normal,up-left,'#'), writeln('SectorArriba3').
do(move(down)) :- havingObject, see(normal,up,'#'), see(normal,left,'#'), see(normal,right,'#').



do(move(left)) :- havingObject, see(normal,up-left,'.'), see(normal,down,'.'), see(normal,up,'#'), writeln('Otro1').
do(move(down)) :- havingObject, see(normal,down,'.'), see(normal,down-right,'#'), see(normal,down-left,'#').
do(move(up)) :- havingObject, see(normal,up,'.'), see(normal,up-right,'#'), see(normal,up-left,'#').

do(move(right)) :- see(normal,up,'.'), see(normal,left-up,'#'), see(normal,right-up,'#');see(normal,up,'#'), see(normal,left-up,'.'), see(normal,right-up,'.').

do(move(left)) :- see(normal,left,'.'), writeln('PuntoIzq').
do(move(right)) :- see(normal,right,'.'), writeln('PuntoDer').
do(move(up)) :- see(normal,up,'.'), writeln('PuntoArr').
do(move(down)) :- see(normal,down,'.'), writeln('PuntoAba').






do(move(up)) :-writeln('ARRIBA').

