/*********************************************************************
** Program name: Student.cpp
** Author: Nathan Smith
** Date: 7-20-18
** Description: Student class implimentation file
* Has constructor that sets member variables. inherits from base class Person.
* has do_work function as well as function to get student specific data and data name
*********************************************************************/

#include "Student.hpp"
#include "Person.hpp"
#include "libraryFunctions.hpp"
#include <string>
#include <iostream>

Student::Student(std::string nameIn, int ageIn, double GPAIn) : Person(nameIn, ageIn)
{
    GPA = GPAIn;
}

void Student::do_work()
{
    std::cout << name << " did " << getRandIntInRange(1,10) <<
                " hours of homework." << std::endl;
}

double Student::getData()
{
    return GPA;
}

std::string Student::getDataType()
{
    return "GPA";
}