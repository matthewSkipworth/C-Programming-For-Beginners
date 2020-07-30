#include <stdio.h>
#include "include/gameBoard.h"

int main(void)
{
    printf("\n-- TIC-TAC-TOE --");

    char (*boardptr)[];

    char tiles[] = {' ',' ',' ',
                    ' ',' ',' ',
                    ' ',' ',' '};

    boardptr = &tiles;

    char currentPlayer = 1;
    char gameOver = 0;
    
    drawBoard(tiles);
    
    while(!gameOver)
    {
        playerMove(boardptr, 'X');
        drawBoard(tiles);
        //checkBoardStatus(gameOver);
        //changePlayers();
    }


    printf("\n\n");
    return 0;
}