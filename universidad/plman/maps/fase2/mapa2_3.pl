%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%% DIF:	1
%%% PT:	00:15  [STS: 00:45]
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

map_format_version(1.0).
load_behaviour(mineExplosion).
load_behaviour(entitySequentialMovement).
map([['#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#'],
['#', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '#'],
['#', '.', '#', '.', '.', '.', '.', '.', '.', '.', '#', '.', '#'],
['#', '.', '#', '#', '.', '.', '.', '.', '.', '#', '#', '.', '#'],
['#', '.', '#', '#', '#', '#', '.', '#', '#', '#', '#', '.', '#'],
['#', '.', '.', ' ', '#', '#', '#', '.', '#', ' ', '.', '.', '#'],
['#', '.', '#', '#', '#', '#', '.', '#', '.', '#', '#', '.', '#'],
['#', '.', '#', '#', '.', '#', '.', '.', '.', '#', '#', '.', '#'],
['#', '.', '#', '.', '.', '.', '.', '.', '.', '.', '#', '.', '#'],
['#', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '#'],
['#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#']]).
map_size(13, 11).
num_dots(65).
pacman_start(3, 5).
initMap:- 
	addSolidObject('#'), 
	createGameEntity(OID_0, '+', object, 9, 5, active, mine, 
			[name(mina), solid(false), static(false), use_rule(norule),
			description('Mina que explota 2 segundos despues de ser depositada'), appearance(attribs(bold, cyan, default))]), 
   mine(init, OID_0, 2, 1, [ no_destroy(['.']) ]),
	createGameEntity(EID_0, 'E', mortal, 6, 2, active, entitySequentialMovement, [appearance(attribs(normal, red, default))]), 
	createGameEntity(EID_1, 'E', mortal, 6, 8, active, entitySequentialMovement, [appearance(attribs(normal, red, default))]),
	entitySequentialMovement(init, EID_0, [ l,l,l,u,r,r,r,r,r,r,d,l,l,l ], [ no_repeat_moves ]),
	entitySequentialMovement(init, EID_1, [ r,r,r,d,l,l,l,l,l,l,u,r,r,r ], [ no_repeat_moves ]).
norule(_).
norule(_,_,_,_,_).
