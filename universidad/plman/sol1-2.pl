:- use_module('pl-man-game/main').
do(get(right)) :- see(normal,right,'n'), writeln('cogerllave').
do(use(down)) :- see(normal,down,'-').

do(move(left)) :- see(normal,left,' '), see(normal,right,'#'), see(normal,up-right,'.'), see(normal,up,'.'), see(normal,up-left,'.'), writeln('AYUDAME').
do(move(down)) :- see(normal,down,'.'), writeln('PuntoAba').
do(move(right)) :- see(normal,right,'.'), writeln('PuntoDer').
do(move(up)) :- see(normal,up,'.'), writeln('PuntoArr').
do(move(left)) :- see(normal,left,'.'), writeln('PuntoIzq').


do(move(up)) :- see(normal,up,' '), writeln('DesatasqueArr').
do(move(left)) :- see(normal,left,' '), see(normal,right,'#'); see(normal,right-up,'#'), see(normal,right-down,'#'), see(normal,left-up,' '),writeln('DesatasqueIzq').
do(move(down)) :- see(normal,up-right,'#'), see(normal,right,'#'), see(normal,up,'#'); see(normal,up-right,'#'), see(normal,right,'#'), see(normal,down-right,'#'),  writeln('DesatasqueAba').
do(move(right)) :- see(normal,right,' '), see(normal,up,'#'), see(normal,down,'#'); see(normal,down-left,'#'), see(normal,up-right,'#'), writeln('DesatasqueDer').


do(move(right)) :- writeln('derecha').




