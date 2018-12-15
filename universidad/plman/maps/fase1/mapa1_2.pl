%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%% DIF:	4
%%% PT:	00:18	[STS: 00:54]
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

map_format_version(1.0).
load_behaviour(basicDoorKey).
map([['#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#'],
['#', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '#'],
['#', '.', '#', '#', '#', '#', '#', '.', '#', '.', '#', '#', '#', '.', '#', '#', '.', '#', '#', '.', '#', '.', '.', '.', '#', '.', '#'],
['#', '.', '#', '.', '.', '.', '.', '.', '#', '.', '.', ' ', '#', '.', '#', '.', '.', '.', '#', '.', '#', '#', '.', '.', '#', '.', '#'],
['#', '.', '#', '.', '#', '.', '.', '.', '#', '.', '#', '#', '#', '.', '#', '#', '#', '.', '#', '.', '#', '#', '.', '#', '#', '.', '#'],
['#', '.', '#', '.', '.', '.', '.', '.', '#', '.', '.', '#', '.', '.', '#', '.', '.', '.', '#', '.', '#', '.', '.', '#', '#', '.', '#'],
['#', ' ', '#', '.', '.', '.', '.', '.', '#', '.', '.', '.', '#', '.', '#', '.', '.', '.', '#', '.', '#', '.', '.', '.', '#', '.', '#'],
['#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#']]).
map_size(27, 8).
num_dots(96).
pacman_start(1, 6).
initMap:- 
	addSolidObject('#'), 
	createGameEntity(OID_K, 'n', object, 11, 3, inactive, norule, 
			[name(llave_naranja), solid(false), static(false), use_rule(basicDoorKey),
			description('Llave que abre la puerta naranja'), appearance(attribs(normal, yellow, default))]), 
	createGameEntity(OID_D, '-', object, 22, 4, inactive, norule, 
			[name(puerta_naranja), solid(true), static(true), use_rule(norule),
			description('Puerta que se abre con una llave naranja'), appearance(attribs(bold, black, yellow))]),
	basicDoorKey(init, OID_D, [ 'pl-man':destroyGameEntity(OID_D) ], [ OID_K ]).
norule(_).
norule(_,_,_,_,_).