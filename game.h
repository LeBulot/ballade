#ifndef GAME_H
#define GAME_H

//-----------------definir les constantes-----------------------
	#define NBL 3
	#define NBC 4
	#define AREAL NBL + 2
	#define AREAC NBC + 2

//-----------------Protoytpes-----------------------------------

void Game_manager(void);
void initArea(char area[][AREAC], int *PlayerX, int *PlayerY);

#endif