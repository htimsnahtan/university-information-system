/*********************************************************************
** Program name: University.hpp
** Author: Nathan Smith
** Date: 7-20-18
** Description: University class declaration file
*********************************************************************/

#ifndef UNIVERSITY_HPP
#define UNIVERSITY_HPP

#include <string>
#include <vector>
#include "Building.hpp"
#include "Person.hpp"

class University
{
private:
    std::string name; // name of university
    std::vector<Building*> buildings; // contains n number of Building objects
    std::vector<Person*> people; // contains n number of Person objects
public:
    University(std::string); // constructor
    void addBuilding(Building*);
    void addPerson(Person*);
    Person* getPerson(int); // gets person in peoplearray
    void printBuildings(); // prints information on all buildings in its information 
                        //system (name, address, and building's size)
    int printPeople(char); // prints information of all people (name, age, GPA or Rating)
};

#endif