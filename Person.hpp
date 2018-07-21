/*********************************************************************
** Program name: Person.hpp
** Author: Nathan Smith
** Date: 7-20-18
** Description: Person class declaration file
*********************************************************************/

#ifndef PERSON_HPP
#define PERSON_HPP
#include <string>

class Person
{
    protected:
        std::string name; // name of person
        int age; // age of person
    public:
        Person(std::string, int);
        std::string getName();
        int getAge();
        virtual void do_work()=0; // generates random number in range for how many hours
                        // they will work for. Then outputs message depending on 
                        // if Person class is a Student or Instructor.
        virtual double getData()=0;
        virtual std::string getDataType()=0;
};

#endif