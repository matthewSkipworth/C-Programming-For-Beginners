#include "../include/gameBoard.h"


    // boardStatus
    // drawBoard
    // playerMove(tiles);
    // switchPlayers

void playerMove(char (*gameBoard)[], char player)
{
    
    int space;
    do
    {
        printf("\nSelect a tile.");

        scanf("%d", &space);
    } while(inputBoundsChecker(space));


    (*gameBoard)[space-1] = player;

}

void drawBoard(char gameBoard[])
{
    system("clear");
    printf
    (
   "\n     |     |       \
   \n  %c  |  %c  |  %c  \
    \n_____|_____|_____  \
    \n     |     |       \
   \n  %c  |  %c  |  %c  \
    \n_____|_____|_____  \
    \n     |     |       \
   \n  %c  |  %c  |  %c  \
    \n     |     |      ", 
     gameBoard[6],gameBoard[7], gameBoard[8],\
     gameBoard[3],gameBoard[4], gameBoard[5],\
     gameBoard[0],gameBoard[1], gameBoard[2]
     );
}

int inputBoundsChecker(int input)
{
    if(input > 9 || input < 1)
        return 1;
    return 0;
}

void switchPlayers(char * currentPlayer_ptr)
{
    (*currentPlayer_ptr) ^= 1;
}