/*********************************************************************
** Program name: main.cpp
** Author: Nathan Smith
** Date: 7-20-18
** Description: Implimentions a university information system that holds
* students, instructors, and buildings inside a university class. Currently
* hardcodes universitity, buildings, and people but could easily add
* functionality later to allow for user input variables.
*********************************************************************/

#include "Building.hpp"
#include "Instructor.hpp"
#include "libraryFunctions.hpp"
#include "Person.hpp"
#include "Student.hpp"
#include "University.hpp"
#include <iostream>

int main() {
    
    int userIn = getValidNumber("Chose one of the following options:\n"
                            "1. Print information about all buildings\n"
                            "2. Print information about everyone at university\n"
                            "3. Choose a person to do work\n"
                            "4. Exit program\n",
                            "Please choose a number 1-4",
                            0,
                            5
                            );
                            
    if (userIn == 4)// if user quits, exit-- else continue w/ building objects
    {
        std::cout << "Goodbye!" << std::endl;
        return 0;
    }
    
    // build university, person, and building objects
    University *university = new University("Generic University");
    Student *student = new Student("John", 25, 3.9);
    Instructor *instructor = new Instructor("Bill", 45, 4.1);
    Building *building1 = new Building("Finance Building", 2000, "300 E Normal St.");
    Building *building2 = new Building("Science Building", 3000, "301 E Normal St.");
    
    // add person and building objects to university
    university->addBuilding(building1);
    university->addBuilding(building2);
    university->addPerson(student);
    university->addPerson(instructor);
    
    switch(userIn)
    {
        case 1:
            university->printBuildings();
            break;
        case 2:
            university->printPeople('L');// print long version of people
            break;
        case 3:
            int totalPeople = university->printPeople('S'); // show choices of people
            int userIn = getValidNumber("Please choose one of the above people to do work.",
                                        "Please enter a valid number.",
                                        0,
                                        totalPeople+1
                                        );
            university->getPerson(userIn-1)->do_work();
            break;
    }
    
    // free dynamically created memory in heap
    delete university;
    delete student;
    delete instructor;
    delete building1;
    delete building2;
    
    return 0;
}