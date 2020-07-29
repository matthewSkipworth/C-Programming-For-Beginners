#include "../include/gameBoard.h"

void playerMove(char gameBoard[], char player)
{
    int space;
    printf("\nSelect a tile.");

    scanf("%d", &space);

    printf("%d", space);

    gameBoard[space-1] = player;

}