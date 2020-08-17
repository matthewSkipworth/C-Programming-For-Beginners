#include <stdbool.h>
#include <stdio.h>
#include <string.h>

#include "include/gameBoard.h"
#include "include/boardStatus.h"

#define TESTING 0


int main(void)
{
    if (!TESTING)
    {
        printf("\n-- TIC-TAC-TOE --");

        char gamePeice[] = {'X', 'O'};

        char (*board_ptr)[];
        bool (*isTaken_ptr)[];

        char tiles[] = {'1','2','3',
                        '4','5','6',
                        '7','8','9'};

        bool isTaken[9];

        memset(isTaken, false, sizeof(isTaken));
        board_ptr = &tiles;
        isTaken_ptr = &isTaken;

        // if(!isTaken[4])
        // {
        //     printf("isTaken array filled with false hope.");
        // }
        // getchar();

        char currentPlayer = 1, *currentplayer_ptr;
        currentplayer_ptr = &currentPlayer;
        
        bool gameOver = false;
        
        drawBoard(tiles);
        
        while(!gameOver)
        {
            playerMove(board_ptr, isTaken_ptr, gamePeice[currentPlayer]);
            drawBoard(tiles);
            //checkBoardStatus(gameOver);
            switchPlayers(&currentPlayer);
            if(gameIsWon(board_ptr) || isTieGame(isTaken_ptr))
            {
                gameOver = true;
            }
       
        }


        printf("\n\n");
        return 0;
    }
    else
    {
        int i = playerInput();
        

    }
    
}