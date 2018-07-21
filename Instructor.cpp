/*********************************************************************
** Program name: Instructor.cpp
** Author: Nathan Smith
** Date: 7-20-18
** Description: Instructor class implementation file
* Contains constructor, overridden virtual function to do work, 
* and functions to get subclass specific data as well as its type
*********************************************************************/

#include "Instructor.hpp"
#include "libraryFunctions.hpp"
#include <string>
#include <iostream>

Instructor::Instructor(std::string nameIn, int ageIn, double ratingIn) : Person(nameIn, ageIn)
{
    rating = ratingIn;
}

//prints random integer between 1 and 10 for number of hours grading papers
void Instructor::do_work()
{
    std::cout << name << " graded papers for " << getRandIntInRange(1,10) <<
                " hours." << std::endl;
}

double Instructor::getData()
{
    return rating;
}

std::string Instructor::getDataType()
{
    return "Rating";
}