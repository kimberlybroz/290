/*********************************************************************************************************************
** Author: Kimberly Broz
** Date: 11/18/17
** Description: Class definition file for the Board Class.  The Board Class has a 3 by 3 array that represents
**              a tic-tac-toe game. Has a method that takes the coordinates of a move and occupies tpot
**              for that player.  Also has a method that returns the state of the game.    
********************************************************************************************************************/

#include "Board.hpp"
#include <iostream>

using std::cout;
using std::endl;

/**************************************************************************************************************
** Description: This is the default constructor, which initializes all spaces on the tic-tac-toe board to empty.
**************************************************************************************************************/
 
Board::Board()
{
      for (int row = 0; row < 3; row ++)
      {
            for (int column = 0; column < 3; column ++)
            {
                  location[row][column] = ' ';
            }
      }

}

/************************************************************************************************************
** Description: The makeMove method take the x and y coordinates of the move, and which players occupying the
                spot.
************************************************************************************************************/

bool Board::makeMove(int x, int y, char move)
{
      if (location[x][y] == ' ')
      {
            location[x][y] = move;
            return true;
      }
      else
      {
            return false;
      }
}

/************************************************************************************************************
** Description: This print function prints out the current tic-tac-toe board to the screen.
************************************************************************************************************/

void Board::print()
{
      for (int row = 0; row < 3; row ++)
      {   
            for (int column = 0; column < 3; column ++)
            {
                  cout << location[row][column] << " ";
            }
      cout << endl << endl;
      }
}

/**************************************************************************************************************
** Description: The gameState function returns one of four enumerated values depending on the state of the game
**************************************************************************************************************/

int Board::gameState()
{
      //check for every win condition for both X and O
      if (location[0][0] == 'x' && location[0][1] == 'x' && location[0][2] == 'x')
            return X_WON;
      if (location[1][0] == 'x' && location[1][1] == 'x' && location[1][2] == 'x')
            return X_WON;
      if (location[2][0] == 'x' && location[2][1] == 'x' && location[2][2] == 'x')
            return X_WON;
      if (location[0][0] == 'x' && location[1][0] == 'x' && location[2][0] == 'x')
            return X_WON;
      if (location[0][1] == 'x' && location[1][1] == 'x' && location[2][1] == 'x')
            return X_WON;
      if (location[0][2] == 'x' && location[1][2] == 'x' && location[2][2] == 'x')
            return X_WON;
      if (location[0][0] == 'x' && location[1][1] == 'x' && location[2][2] == 'x')
            return X_WON;
      if (location[0][2] == 'x' && location[1][1] == 'x' && location[2][0] == 'x')
            return X_WON;
      if (location[0][0] == 'o' && location[0][1] == 'o' && location[0][2] == 'o')
            return O_WON;
      if (location[1][0] == 'o' && location[1][1] == 'o' && location[1][2] == 'o')
            return O_WON;
      if (location[2][0] == 'o' && location[2][1] == 'o' && location[2][2] == 'o')
            return O_WON;
      if (location[0][0] == 'o' && location[1][0] == 'o' && location[2][0] == 'o')
            return O_WON;
      if (location[0][1] == 'o' && location[1][1] == 'o' && location[2][1] == 'o')
            return O_WON;
      if (location[0][2] == 'o' && location[1][2] == 'o' && location[2][2] == 'o')
            return O_WON;
      if (location[0][0] == 'o' && location[1][1] == 'o' && location[2][2] == 'o')
            return O_WON;
      if (location[0][2] == 'o' && location[1][1] == 'o' && location[2][0] == 'o')
            return O_WON;

      //traverse through tic tac toe board to see if there are any empty slots
      for (int row = 0; row < 3; row ++)
      {
            for (int column = 0; column < 3; column ++)
            {
                  if (location[row][column] == ' ')
                        return UNFINISHED;
            }
      }


      /*since we know at this point none of the win conditions have been met, and we know
        there are no spaces left on the board, it must be a draw */

      return DRAW;

}

