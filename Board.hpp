/*********************************************************************************************************************
** Author: Kimberly Broz
** Date: 11/18/17
** Description: Board Class Header File.  Board has a 3 by 3 array that represents a tic-tac-toe board.
********************************************************************************************************************/

#ifndef BOARD_HPP
#define BOARD_HPP


enum game_state {X_WON, O_WON, DRAW, UNFINISHED};   // enumerated value equals 0, 1, 2, 3


class Board
{

      private:
            char location[3][3];                   //stores the location of the players move



      public:
            Board();                             // default constructor
            bool makeMove(int, int, char);       // takes x and y coordinates of the move, and x or o player
            void print();                        // prints out the board for testing purposes
            int gameState();                     // returns the enum values depending on a winner, draw, or unfinished game


};
#endif
