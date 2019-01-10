/*****************************************************************************
** Author: Kimberly Broz
** Date: 10/25/17
** Description: Player Object Function Declarations: 
**              A player can report their own values
**              through the getter methods. A player can set her own point,
**              rebounds, and assists through the setter methods
**              and a player can pull in another player as a parameter and
**              answer the question T or F:
**              I have more points than this other player(parameter). 
****************************************************************************/

#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <iostream>
using std::string;

//Player class declaration 
class Player
{
private:
       	string 	 playerName;	//data members	
       	int    	 points,
       	       	 rebounds,
       	       	 assists;		

public:
       	Player();	//default constructor
       	Player(string, int, int, int);	//overload constructor

       	string getName();		//assessor function prototypes
       	int getPoints();
       	int getRebounds();
       	int getAssists();
	
       	void setPoints(int);		//mutator function prototypes
       	void setRebounds(int);
       	void setAssists(int);
	
       	bool hasMorePointsThan(Player);	//calculator function prototype
};

#endif
