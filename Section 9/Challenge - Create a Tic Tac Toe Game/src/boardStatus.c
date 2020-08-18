#include "../include/boardStatus.h"

bool gameIsWon(char (*gameBoard)[])
{
    if ( (*gameBoard)[0] == 'X' && (*gameBoard)[1] == 'X' && (*gameBoard)[2] == 'X')  
    {
        printf("\n\nX wins!");
        return true;
    }
    else if ( (*gameBoard)[0] == 'O' && (*gameBoard)[1] == 'O' && (*gameBoard)[2] == 'O')
    {
        printf("\n\nO wins!");
        return true;
    }
        else if ( (*gameBoard)[4] == 'X' && (*gameBoard)[5] == 'X' && (*gameBoard)[3] == 'X')  
    {
        printf("\n\nX wins!");
        return true;
    }
    else if ( (*gameBoard)[4] == 'O' && (*gameBoard)[5] == 'O' && (*gameBoard)[3] == 'O')
    {
        printf("\n\nO wins!");
        return true;
    }
        else if ( (*gameBoard)[7] == 'X' && (*gameBoard)[8] == 'X' && (*gameBoard)[6] == 'X')  
    {
        printf("\n\nX wins!");
        return true;
    }
    else if ( (*gameBoard)[7] == 'O' && (*gameBoard)[8] == 'O' && (*gameBoard)[6] == 'O')
    {
        printf("\n\nO wins!");
        return true;
    }
        else if ( (*gameBoard)[0] == 'X' && (*gameBoard)[3] == 'X' && (*gameBoard)[6] == 'X')  
    {
        printf("\n\nX wins!");
        return true;
    }
    else if ( (*gameBoard)[0] == 'O' && (*gameBoard)[3] == 'O' && (*gameBoard)[6] == 'O')
    {
        printf("\n\nO wins!");
        return true;
    }
        else if ( (*gameBoard)[1] == 'X' && (*gameBoard)[4] == 'X' && (*gameBoard)[7] == 'X')  
    {
        printf("\n\nX wins!");
        return true;
    }
    else if ( (*gameBoard)[1] == 'O' && (*gameBoard)[4] == 'O' && (*gameBoard)[7] == 'O')
    {
        printf("\n\nO wins!");
        return true;
    }
        else if ( (*gameBoard)[2] == 'X' && (*gameBoard)[5] == 'X' && (*gameBoard)[8] == 'X')  
    {
        printf("\n\nX wins!");
        return true;
    }
    else if ( (*gameBoard)[2] == 'O' && (*gameBoard)[5] == 'O' && (*gameBoard)[8] == 'O')
    {
        printf("\n\nO wins!");
        return true;
    }
        else if ( (*gameBoard)[0] == 'X' && (*gameBoard)[4] == 'X' && (*gameBoard)[8] == 'X')  
    {
        printf("\n\nX wins!");
        return true;
    }
    else if ( (*gameBoard)[0] == 'O' && (*gameBoard)[4] == 'O' && (*gameBoard)[8] == 'O')
    {
        printf("\n\nO wins!");
        return true;
    }
        else if ( (*gameBoard)[2] == 'X' && (*gameBoard)[4] == 'X' && (*gameBoard)[6] == 'X')  
    {
        printf("\n\nX wins!");
        return true;
    }
    else if ( (*gameBoard)[2] == 'O' && (*gameBoard)[4] == 'O' && (*gameBoard)[6] == 'O')
    {
        printf("\n\nO wins!");
        return true;
    }

    return false;
}

bool isTieGame( bool (*isTaken_ptr)[] )
{
    int i = 0;
    for (i = 0; i < BOARDSIZE; i++)
    {
        if ( (*isTaken_ptr)[i] == 0 )
        {
            return false;
        }

    }
    
    printf("\n\nTIE GAME");
    return true;
}