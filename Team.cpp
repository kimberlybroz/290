/****************************************************************************
** Author: Kimberly Broz
** Date: 10/30/17
** Description: The Team class gets five Player data types. Sets them as
**              point guard, shooting guard, small forward, power forward, 
**              and center. It adds up all the points of the player objects
**              it takes in.
****************************************************************************/

#include "Team.hpp"

/***************************************************************************
** Description: Constructor that takes in five types of Player Objects, and 
**              uses them to initialize the data member variables for point guard,
**              shooting guard, small forward, power forward, and center
**              to the input.
*****************************************************************************/

Team::Team(Player pointGuardIn, Player shootingGuardIn, Player smallForwardIn,
           Player powerForwardIn, Player centerIn)
{
       	pointGuard = pointGuardIn;
       	shootingGuard = shootingGuardIn;
       	smallForward = smallForwardIn;
       	powerForward = powerForwardIn;
       	center = centerIn;
}

/********************************************************************************
** Description: Set methods for each of the 5 player types data members:
**              point guard, shooting guard, small forward, power forward,
**              and center.
*********************************************************************************/

void Team::setPointGuard(Player pointGuardIn)
{
       	pointGuard = pointGuardIn;
}

void Team::setShootingGuard(Player shootingGuardIn)
{
       	shootingGuard = shootingGuardIn;
}

void Team::setSmallForward(Player smallForwardIn)
{
       	smallForward = smallForwardIn;
}

void Team::setPowerForward(Player powerForwardIn)
{
       	powerForward = powerForwardIn;
}

void Team::setCenter(Player centerIn)
{
       	center = centerIn;
}

/******************************************************************************************
** Description: Get methods for the five Player data members: point guard, shooting guard,
**              small forward, power forward, and center.
******************************************************************************************/

Player Team::getPointGuard()
{
       	return pointGuard;
}

Player Team::getShootingGuard()
{
       	return shootingGuard;
}

Player Team::getSmallForward()
{	
       	return smallForward;
}

Player Team::getPowerForward()
{
       	return powerForward;
}

Player Team::getCenter()
{
       	return center;
}

/******************************************************************************************
** Description: This method returns the sum of all points for all the Player objects
**              on a team.
*******************************************************************************************/

int Team::totalPoints()
{
       	return pointGuard.getPoints() + shootingGuard.getPoints() + smallForward.getPoints()
       	       + powerForward.getPoints() + center.getPoints();
}
