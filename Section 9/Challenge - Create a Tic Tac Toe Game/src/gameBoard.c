#include "../include/gameBoard.h"



    // boardStatus
    // drawBoard
    // playerMove(tiles);
    // switchPlayers

void playerMove(char (*gameBoard)[], bool (*isTaken_ptr)[],  char player)
{
    int selection = 0;

    do 
    {
        selection = playerInput();
    } while((*isTaken_ptr)[selection-1]);   
    
    (*isTaken_ptr)[selection-1] = true;
    (*gameBoard)[selection-1] = player;

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




/**
 * checks for and discards invalid input.
 * Anything outside of 1-9 and 'q' is invalid input. 
 */

int inputBoundsChecker(int input)
{
    if(input > 9 || input < 1)
        return 1;
    else if (input == 'q')
        exit(0);
    return 0;
}




/**
 * Toggles between players.
 */

void switchPlayers(char * currentPlayer_ptr)
{
    (*currentPlayer_ptr) ^= 1;
}


int playerInput(void)
{
    char buffer[20];
    
    do
    {
        printf("\nSelect a tile.");
        fgets(buffer, 20, stdin);    /* code */

        if (buffer[0] == 'q')
        {   
            exit(0);
        }
    } while (!atoi(buffer));

    return atoi(buffer);

}
