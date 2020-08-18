#ifndef _BOARD_STATUS_H_
#define _BOARD_STATUS_H_

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define BOARDSIZE 9


bool isTieGame(bool (*) []);

bool gameIsWon(char (*) []);


#endif