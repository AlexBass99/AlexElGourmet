%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%% DIF:	5
%%% PT:	01:10	[STS: 04:10]
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

map_format_version(1.0).
load_behaviour(basicDoorKey).
load_behaviour(entitySequentialMovement).
map([['#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#'],
['#', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ' ', '.', '.', '#'],
['#', '.', '.', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '.', '.', '.', '.', '#'],
['#', '.', '.', ' ', '.', '.', '.', '.', '.', '.', ' ', '.', '.', '.', '.', '.', ' ', ' ', '.', '.', '.', '.', '#'],
['#', '.', '.', '#', '.', '.', '.', '#', '#', '#', '#', '#', '#', '#', '.', '.', '.', '#', '.', '.', '.', '.', '#'],
['#', '.', '.', '#', '.', '.', '.', '#', '.', '.', ' ', '.', '.', '.', '.', '.', '.', '#', '.', '.', '.', '.', '#'],
['#', '.', '.', '#', '.', '.', '.', '.', '.', '.', '.', '.', ' ', '#', '.', '.', '.', '#', '.', '.', '.', '.', '#'],
['#', '.', '.', '#', '.', '.', '.', '#', '#', '#', '#', '#', '#', '#', '.', '.', '.', '#', '.', '.', '.', '.', '#'],
['#', '.', '.', '#', ' ', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '#', '.', '.', '.', '.', '#'],
['#', '.', '.', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', ' ', '#', '.', '.', '.', '.', '#'],
['#', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ' ', '.', '#'],
['#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#']]).
map_size(23, 12).
num_dots(145).
pacman_start(10, 5).
initMap:- 
	addSolidObject('#'), 
	createGameEntity(OID_RD, '|', object, 3, 3, inactive, norule, 
			[name('Puerta Roja'), solid(true), static(true), use_rule(norule),
			 description('Puerta que se abre con la llave roja'), appearance(attribs(bold, red, default))]),
	createGameEntity(OID_YK, 'a', object, 16, 3, inactive, norule, 
			[name(llave_amarilla), solid(false), static(false), use_rule(basicDoorKey),
			 description('una llave de color amarillo'), appearance(attribs(bold, yellow, default))]),
	createGameEntity(OID_GD, '|', object, 17, 3, inactive, norule, 
			[name('Puerta Verde'), solid(true), static(true), use_rule(norule),
			 description('Puerta que se abre con la llave verde'), appearance(attribs(bold, green, default))]),
	createGameEntity(OID_GK, 'v', object, 12, 6, inactive, norule, 
			[name(llave_verde), solid(false), static(false), use_rule(basicDoorKey),
			 description('una llave de color verde'), appearance(attribs(bold, green, default))]),
	createGameEntity(OID_RK, 'r', object, 4, 8, inactive, norule, 
			[name(llave_roja), solid(false), static(false), use_rule(basicDoorKey),
			 description('una llave de color rojo'), appearance(attribs(bold, red, default))]),
	createGameEntity(OID_YD, '_', object, 16, 9, inactive, norule, 
			[name('Puerta Amarilla'), solid(true), static(true), use_rule(norule),
			 description('Puerta que se abre con la llave amarilla'), appearance(attribs(bold, yellow, default))]),
	createGameEntity(EID_E1, 'E', mortal, 19, 1, active, entitySequentialMovement, [appearance(attribs(normal, red, default))]), 
	createGameEntity(EID_E2, 'E', mortal, 10, 3, active, entitySequentialMovement, [appearance(attribs(normal, red, default))]), 
	createGameEntity(EID_E3, 'E', mortal, 20, 10, active, entitySequentialMovement, [appearance(attribs(normal, red, default))]),
	entitySequentialMovement(init, EID_E1, [d,d,d,d,d,d,d,d,d,n,l,n,u,u,u,u,u,u,u,u,u,n,r,n], [no_repeat_moves]),
	entitySequentialMovement(init, EID_E2, [l,l,l,l,d,d,d,d,d,r,r,r,r,r,r,r,r,u,u,u,u,u,l,l,l,l,n], [no_repeat_moves]),
	entitySequentialMovement(init, EID_E3, [u,u,u,u,u,u,u,u,u,n,r,d,d,d,d,d,d,d,d,d,n,l], [no_repeat_moves]),
	basicDoorKey(init, OID_RD, ['pl-man':destroyGameEntity(OID_RD)], [OID_RK]),
	basicDoorKey(init, OID_YD, ['pl-man':destroyGameEntity(OID_YD)], [OID_YK]),
	basicDoorKey(init, OID_GD, ['pl-man':destroyGameEntity(OID_GD)], [OID_GK]).
norule(_).
norule(_,_,_,_,_).
