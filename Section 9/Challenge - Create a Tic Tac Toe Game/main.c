#include <stdio.h>
#include "include/gameBoard.h"

int main(void)
{
    printf("-- TIC-TAC-TOE --");

    char gamePeice[] = {'X', 'O'};

    char (*boardptr)[];

    char tiles[] = {' ',' ',' ',
                    ' ',' ',' ',
                    ' ',' ',' '};

    boardptr = &tiles;

    char currentPlayer = 1, *currentplayer_ptr;
    currentplayer_ptr = &currentPlayer;
    char gameOver = 0;
    
    drawBoard(tiles);
    
    while(!gameOver)
    {
        playerMove(boardptr, gamePeice[currentPlayer]);
        drawBoard(tiles);
        //checkBoardStatus(gameOver);
        switchPlayers(&currentPlayer);
    }


    printf("\n\n");
    return 0;
}