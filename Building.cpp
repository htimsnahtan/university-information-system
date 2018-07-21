/*********************************************************************
** Program name: Building.cpp
** Author: Nathan Smith
** Date: 7-20-18
** Description: Building class implementation file. Contains constructor and 
* getter functions for all member variables
*********************************************************************/

#include "Building.hpp"
#include <string>

//constructor
Building::Building(std::string nameIn, int sizeIn, std::string addressIn)
{
    name = nameIn;
    size = sizeIn; // in sq feet
    address = addressIn;
}

std::string Building::getName()
{
    return name;
}

int Building::getSize()
{
    return size; // in sq feet
}

std::string Building::getAddress()
{
    return address;
}