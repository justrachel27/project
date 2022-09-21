#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <string>
#include "PersonalDetails.h"
#include "Person.h"
using namespace std;

class Student: public Person{
    protected:
    int year_level;
    public:
    Student();
   void setRole(); //Virtual setRole, getRole functions
 string getRole(); //ensures that derived class have their own roles 

    void New_Student_Detail();
    void Update_Student_Detail();
    //Subject* m_array;
    int yearlevel(int level);
    ~Student();
};
#endif //STUDENT_H

