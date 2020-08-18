#include "../include/gameBoard.h"


    // boardStatus
    // drawBoard
    // playerMove(tiles);
    // switchPlayers

void playerMove(char (*gameBoard)[], int (*isTaken_ptr)[],  char player)
{
    
    // NEEDS REFACTORING

    char space;
    do
    {
        printf("\nSelect a tile.");

        scanf("%c", &space);
        while(getchar() != '\n');

        switch (space)
        {
            case '1':
                (*gameBoard)[0] = player;
                break;
            case '2':
                (*gameBoard)[1] = player;
                break;
            case '3':
                (*gameBoard)[2] = player;
                break;
            case '4':
                (*gameBoard)[3] = player;
                break;
            case '5':
                (*gameBoard)[4] = player;
                break;
            case '6':
                (*gameBoard)[5] = player;
                break;
            case '7':
                (*gameBoard)[6] = player;
                break;
            case '8':
                (*gameBoard)[7] = player;
                break;
            case '9':
                (*gameBoard)[8] = player;
                break;
            case 'q':
                exit(0);

            default:
                printf("default");
        }
            
    } 
    while \
    ( \
        ( inputBoundsChecker(space - ASCII_DESIGNATION) ) \
        && (! (*isTaken_ptr)[ (space) - (ASCII_DESIGNATION + 1) ] ) \
    ); 
    // subtract 48 to convert char to int.
    // (the ASCII for 1 is 49)
    
    // (*isTaken_ptr)[(space)-(ASCII_DESIGNATION + 1) ] = 1;
    // (*gameBoard)[(space)-(ASCII_DESIGNATION + 1) ] = player;


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