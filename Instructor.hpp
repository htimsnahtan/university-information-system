/*********************************************************************
** Program name: Instructor.hpp
** Author: Nathan Smith
** Date: 7-20-18
** Description: Instructor class implimentation file
*********************************************************************/

#ifndef INSTRUCTOR_HPP
#define INSTRUCTOR_HPP

#include <string>
#include "Person.hpp"

class Instructor : public Person
{
    private:
        double rating; // insturctor's rating
    public:
        Instructor(std::string, int, double); // constructor 
        void do_work(); // virtual class
        double getData(); // returns rating
        std::string getDataType(); // returns string "Rating"
};

#endif