#include <stdbool.h>
#include <stdio.h>

#include "include/gameBoard.h"

int main(void)
{
    printf("\n-- TIC-TAC-TOE --");

    char gamePeice[] = {'X', 'O'};

    char (*boardptr)[];

    char tiles[] = {'1','2','3',
                    '4','5','6',
                    '7','8','9'};

    bool isTaken[] = {0,0,0,
                      0,0,0,
                      0,0,0};

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