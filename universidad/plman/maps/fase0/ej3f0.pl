:- use_module('pl-man-game/main').
do(move(DIR)) :- see(normal,DIR,'.'), writeln('REGLA1').
do(move(left)) :- see(normal,left,' '), writeln('REGLA7').
do(move(down)) :- see(normal,down,' '), writeln('REGLA8').

do(get(DIR)) :- see(normal,DIR,'h'), writeln('REGLA2').
