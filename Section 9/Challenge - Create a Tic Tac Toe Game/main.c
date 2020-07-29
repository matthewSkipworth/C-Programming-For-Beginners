#include <stdio.h>
#include "include/gameBoard.h"

int main(void)
{
    printf("-- TIC-TAC-TOE --");

    char tiles[] = {' ',' ',' ',
                    ' ',' ',' ',
                    ' ',' ',' '};

    char currentPlayer = 1;

    printf("\ncurrentPlayer = %d", currentPlayer);
    currentPlayer ^= 1;
    printf("\ncurrentPlayer = %d", currentPlayer);
    currentPlayer ^= 1;
    printf("\ncurrentPlayer = %d", currentPlayer);

    // boardStatus
    // drawBoard
    // playerMove(tiles);


    printf("\n\n");
    return 0;
}