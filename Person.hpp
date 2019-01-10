/***************************************************************************************************
** Author: Kimberly Broz
** Date: 11/5/17
** Description: Header File for the Person Class - Has a string variable name and a double 
**              variable age. Has a constructor that takes 2 values and uses them to initialize the
**              data members.  Has get methods for both data members
***************************************************************************************************/

#ifndef PERSON_HPP
#define PERSON_HPP

#include <iostream>
#include <string>

using std::string;

//Person Class Declaration

class Person
{

      private:
            string name;
            double age;


      public:
            Person();                //default constructor
            Person(string, double);  //constructor takes 2 values, uses them to initialize data members
      
            string getName();        //accessor functions
            double getAge();       

};

#endif 
