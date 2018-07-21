/*********************************************************************
** Program name: Student.hpp
** Author: Nathan Smith
** Date: 7-20-18
** Description: Student class declaration file
*********************************************************************/

#ifndef STUDENT_HPP
#define STUDENT_HPP

#include <string>
#include "Person.hpp"

class Student : public Person
{
    private: 
        double GPA; // student's GPA in range 0.0, 4.0
    public:
        Student(std::string, int, double);
        void do_work();
        double getData();
        std::string getDataType();
};

#endif