#include "game.h"
#include <stdio.h>
#include <string.h>

void Game_manager(void)
{
	int pX = 1, pY = 1;
	int *PlayerX = &pX, *PlayerY = &pY;

	char area[AREAL][AREAC];

	initArea(area, PlayerX, PlayerY);

}

void initArea(char area[][AREAC], int *PlayerX, int *PlayerY)
{
	int i = 0, j = 0;

	for (i=0; i<AREAL; i++)
		for (j=0; j<AREAC; j++)
				if (i == 0 || i == AREAL-1 || j == 0 || j == AREAC-1)
					area[i][j] = "O";
				else
					area[i][j] = " ";

	area[*PlayerX][*PlayerY] = "T";
}