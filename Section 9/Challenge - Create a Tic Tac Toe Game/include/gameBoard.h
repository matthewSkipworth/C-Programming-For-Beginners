#ifndef _GAMEBOARD_H_
#define _GAMEBOARD_H_

#include <stdio.h>
#include <stdlib.h>

#define ASCII_DESIGNATION 48

void playerMove(char (*) [], char);
void drawBoard(char []);

// TODO
// boardStatus
void switchPlayers(char *);
// inputBoundsChecker
int inputBoundsChecker(int);



#endif