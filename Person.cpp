/***************************************************************************************************
** Author: Kimberly Broz
** Date: 11/5/17
** Description:	Person Object Functions - Takes in a string variable name and a double 
**     	       	variable age. Has a constructor	that takes 2 values and	uses them to initialize	the    
**     	       	data members.  Has get methods for both	data members     
***************************************************************************************************/

#include "Person.hpp"
#include <string>
using std::string;

/***************************************************************************************************
** Description: Default constructor for Person Class.  Initializes string name to empty, and int
**              age to 0.
***************************************************************************************************/

Person::Person()                       
{
      name = "";
      age = 0;
}

/*****************************************************************************************************
** Description: Overload Constructor for Person Class. Accepts two parameters.  String name and
**              double age. Assigns the member variables to the input.
*****************************************************************************************************/

Person::Person(string nameIn, double ageIn)         
{
      name = nameIn;
      age = ageIn;
}

/****************************************************************************************************
** Description: Get methods for Person Class. Gets the string name and int age and assigns them
**              to the data members.
****************************************************************************************************/   

string Person::getName()                            
{
      return name;
}

double Person::getAge()
{
      return age;
}
