#include "../include/gameBoard.h"


    // boardStatus
    // drawBoard
    // playerMove(tiles);
    // switchPlayers

void playerMove(char (*gameBoard)[], char player)
{
    
    char space;
    do
    {
        printf("\nSelect a tile.");

        scanf("%c", &space);
        while(getchar() != '\n');
        
        if (space == 'q')
        {
            
            exit(0);
        }
        else
        {
            continue;
        }
        
        
    } while(inputBoundsChecker(space - ASCII_DESIGNATION)); // subtract 48 to convert char to int.
                                             // (the ASCII for 1 is 49)
    (*gameBoard)[(space)-(ASCII_DESIGNATION + 1) ] = player;

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