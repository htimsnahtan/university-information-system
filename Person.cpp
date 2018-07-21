/*********************************************************************
** Program name: Person.cpp
** Author: Nathan Smith
** Date: 7-20-18
** Description: Person class implementation file. Contains constructor
* that sets member variables and seeds time for getting random numbers
* in methods in derived classes
*********************************************************************/

#include "Person.hpp"
#include <string>
#include <cstdlib>
#include <ctime>

Person::Person(std::string nameIn, int ageIn)
{
    name = nameIn;
    age = ageIn;
    srand(time(NULL));
}

std::string Person::getName()
{
    return name;
}

int Person::getAge()
{
    return age;
}