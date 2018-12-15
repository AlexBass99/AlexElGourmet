%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%% DIF:	3
%%% PT:	00:25  [STS: 02:00]
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

map_format_version(1.0).
load_behaviour(enemyBasicMovement).
load_behaviour(mineExplosion).
map([['#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#'],
['#', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '#'],
['#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#'],
['#', '.', '#', '.', '#', '.', '#', '.', '#', '.', '#', '.', '#', '.', '#', '.', '#'],
['#', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ' ', '#'],
['#', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '#'],
['#', ' ', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ' ', '#'],
['#', '#', '.', '#', '.', '#', '.', '#', '.', '#', '.', '#', '.', '#', '.', '#', '#'],
['#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#'],
['#', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '#'],
['#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#']]).
map_size(17, 11).
num_dots(87).
pacman_start(15, 6).
initMap:- 
	addSolidObject('#'), 
	createGameEntity(OID_0, '+', object, 15, 4, active, mine, 
			[name(mina_1), solid(false), static(false), use_rule(norule),
			description('Mina que explota un segundo despues de dejarla en el suelo'), appearance(attribs(bold, cyan, default))]), 
	createGameEntity(OID_1, '+', object, 1, 6, active, mine, 
			[name(mina_2), solid(false), static(false), use_rule(norule),
			description('Mina que explota nada mas dejarla en el suelo'), appearance(attribs(bold, cyan, default))]), 
	mine(init, OID_0, 1, 1, [ no_destroy(['.']) ]),
	mine(init, OID_1, 1, 1, [ no_destroy(['.']) ]),
	createGameEntity(EID_0, 'E', mortal, 1, 5, active, enemyBasicMovement, [appearance(attribs(normal, red, default))]),
	enemyBasicMovement(init, EID_0, right-left, ['#', '+']).
norule(_).
norule(_,_,_,_,_).
