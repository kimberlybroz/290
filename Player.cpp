/*****************************************************************************
** Author: Kimberly Broz
** Date: 10/30/17
** Description:	Player Object Functions: A player can report their own values
**              through the getter methods. A player can set her own point,   
**              rebounds, and assists through the setter methods 
**     	        and a player can pull in another player as a parameter and
**              answer the question T or F:
**              I have more points than	this other player(parameter).
*****************************************************************************/

#include "Player.hpp"

/***************************************************************************
** Description: Default constructor that inititalizes player name to an empty
**              string, and initializes points, robounds, and assists to -1.
*****************************************************************************/

Player::Player()
{
	
       	playerName = "";
       	setPoints(-1);
       	setRebounds(-1);
       	setAssists(-1); 

}

/******************************************************************************
** Description: Takes in a string parameter for player name, and integer 
**              parameters for points, rebounds, and assists. Assigns the data
**     	        member variables to the input.
******************************************************************************/

Player::Player(string playerNameIn, int pointsIn, int reboundsIn, int assistsIn)
{
       	playerName = playerNameIn;
       	points = pointsIn;
       	rebounds = reboundsIn;
       	assists = assistsIn;
}

/********************************************************************************
** Description: Set methods for each of the 3 stats: points, rebounds, and assists
*********************************************************************************/ 

void Player::setPoints(int pointsIn)
{
        points = pointsIn;
}

void Player::setRebounds(int reboundsIn)
{
       	rebounds = reboundsIn;
}

void Player::setAssists(int assistsIn)
{
       	assists = assistsIn;
}

/***************************************************************************************
** Description: Get methods for each data member: player's name, points, rebounds, and
**     	        assists.
***************************************************************************************/

string Player::getName()
{
       	return playerName;
}
int Player::getPoints()
{
       	return points;
}

int Player::getRebounds()
{
       	return rebounds;
}

int Player::getAssists()
{
       	return assists;
}

/******************************************************************************************
** Description: Takes a player parameter and returns true if the player
**     	        that is executing the function has more points than the player that
**     	        was passed in as a parameter.
*******************************************************************************************/

bool Player::hasMorePointsThan(Player otherPlayer)
{
       	if (getPoints() > otherPlayer.getPoints())

       	{
                return true;
	}
	
       	else
       	{	
       	      	return false;
       	}
		
}
