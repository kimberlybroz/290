/*****************************************************************************
** Author: Kimberly Broz
** Date: 10/29/17
** Description: The Team class Prototypes: Gets five Player data types. Sets them as
**              point guard, shooting guard, small forward, power forward,
**              and center. It adds up all the points of the player objects
**              it takes in.
****************************************************************************/

#ifndef TEAM_HPP
#define TEAM_HPP

#include "Player.hpp"

//Team class declaration
class Team
{
private:
        Player	pointGuard;    //Player type data members
        Player	shootingGuard;
       	Player	smallForward;
       	Player	powerForward;
       	Player	center;

public:
        Team();	//default constructor
        Team(Player, Player, Player, Player, Player);  //overload constructor

        Player getPointGuard();         //assessor function prototypes
        Player getShootingGuard();
        Player getSmallForward();
        Player getPowerForward();
       	Player getCenter();

        void setPointGuard(Player);     //mutator function prototypes
        void setShootingGuard(Player);
        void setSmallForward(Player);
        void setPowerForward(Player);
       	void setCenter(Player);

        int totalPoints();	//calculator function prototype
};

#endif

