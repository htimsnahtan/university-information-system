/*********************************************************************
** Program name: Building.hpp
** Author: Nathan Smith
** Date: 7-20-18
** Description: Building class declaration file.
* Contains constructor and 
* getter functions for all member variables
*********************************************************************/

#ifndef BUILDING_HPP
#define BUILDING_HPP

#include <string>

class Building
{
private:
    std::string name; // name of building
    int size; // size of building in sqft
    std::string address;
public:
    Building(std::string, int, std::string);
    std::string getName();
    int getSize();
    std::string getAddress();
};

#endif