%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%% DIF:	3+
%%% PT:	00:14	[STS: 00:42]
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

map_format_version(1.0).
map([['#', '#', '#', '#', '#', '#', '#', '#', '#', '#'],
['#', '.', '.', '.', '.', '.', '.', '.', '.', '#'],
['#', '.', '.', '.', '#', '#', '.', '.', '.', '#'],
['#', '.', '.', '#', ' ', ' ', '#', '.', '.', '#'],
['#', '.', '#', ' ', ' ', ' ', ' ', '#', '.', '#'],
['#', '.', '.', '#', ' ', ' ', '#', '.', '.', '#'],
['#', '.', '.', '.', '#', '#', '.', '.', '.', '#'],
['#', ' ', '.', '.', '.', '.', '.', '.', '.', '#'],
['#', '#', '#', '#', '#', '#', '#', '#', '#', '#']]).
map_size(10, 9).
num_dots(37).
pacman_start(1, 7).
initMap:- 
	addSolidObject('#').
norule(_).
norule(_,_,_,_,_).
