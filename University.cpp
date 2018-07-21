/*********************************************************************
** Program name: University.cpp
** Author: Nathan Smith
** Date: 7-20-18
** Description: University class implimentation file. Contains constructor
* that sets university name, setter functions for adding People and Building
* pointers to array, a getter function for returning People, and 2 print
* functions. printBuildings function iterates through vector and returns data
* from Building objects. printPeople does the same but for People vector.
*********************************************************************/

#include "University.hpp"
#include "Person.hpp"
#include "Building.hpp"
#include <string>
#include <iostream>
#include <vector>

// constructor
University::University(std::string nameIn)
{
    name = nameIn;
}

void University::addBuilding(Building *buildingIn)
{
    buildings.push_back(buildingIn);
}

void University::addPerson(Person *personIn)
{
    people.push_back(personIn);
}

Person* University::getPerson(int index)
{
    return people[index];
}

void University::printBuildings()
{
    std::vector<Building*>::iterator iter;
    for (iter = buildings.begin(); iter != buildings.end(); iter++)
    {
        int index = std::distance(buildings.begin(), iter);
        std::cout << index+1 <<  ":" << std::endl;
        std::cout << "Name: " << (*iter)->getName() << std::endl;
        std::cout << "Size: " << (*iter)->getSize() << " square feet" << std::endl;
        std::cout << "Address: " << (*iter)->getAddress() << std::endl;
    }
}

// returns an int containing number of people contained
// takes a char 'L' or 'S' depending on if user wants to also includeage and dataType
int University::printPeople(char printType)// returns number of people it prints
{
    int loopCounter = 0;
    std::vector<Person*>::iterator iter;
    for (iter = people.begin(); iter != people.end(); iter++)
    {
        int index = std::distance(people.begin(), iter);
        std::cout << index+1 <<  ":" << std::endl;
        std::cout << "Name: " << (*iter)->getName() << std::endl;
        
        if (printType == 'L')// if user would like to display full description
        {
        std::cout << "Age: " << (*iter)->getAge() << std::endl;
        std::cout << (*iter)->getDataType() << ": " << (*iter)->getData() << std::endl;
        }
        
        loopCounter++;
    }
    return loopCounter;
}