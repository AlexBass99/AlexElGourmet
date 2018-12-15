:- use_module('pl-man-game/main').

do(move(left)) :- see(normal,left,' '), writeln('REGLA7').
do(move(down)) :- see(normal,down,' '), writeln('REGLA8').

do(get(DIR)) :- see(normal,DIR,'a'), writeln('REGLA2').
do(get(left)) :- see(normal, left,'U'), writeln('REGLA4').
do(get(left)) :- see(normal,left,'V'), see(normal,right,'U'), writeln('REGLA6').

do(drop(right)) :- see(normal,left,'V'), writeln('REGLA5').

do(use(DIR)) :- see(normal,DIR,'-'), writeln('REGLA3').

