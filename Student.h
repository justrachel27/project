#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <string>
#include "PersonalDetails.h"
#include "Person.h"
using namespace std;

class Student: public Person{
    protected:
    int Year_Level;
    public:
    Student();
   void setRole(); //Virtual setRole, getRole functions
 string getRole(); //ensures that derived class have their own roles 

    void New_Student_Detail();
    void Update_Student_Detail();
    //Subject* m_array;
    void Set_Year_Level(int level);
    int Get_Year_Level();
    ~Student();
};
#endif //STUDENT_H

