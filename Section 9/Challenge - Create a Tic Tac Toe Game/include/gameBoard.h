#ifndef _GAMEBOARD_H_
#define _GAMEBOARD_H_

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define ASCII_DESIGNATION 48

void playerMove(char (*) [], bool (*) [], char);
void drawBoard(char []);

// TODO
// boardStatus
void switchPlayers(char *);
// inputBoundsChecker
int inputBoundsChecker(int);



#endif