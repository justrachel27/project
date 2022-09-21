#ifndef TEACHER_H
#define TEACHER_H
#include "PersonalDetails.h"
using namespace std; 

class Teacher {
    public:
    Teacher();
    void set_Role;  // role for teachers
    string get_Role();
    string Teacher_level;//year level that teachers are doing 
    
    protected: 
    PersonalDetails char name[20]; //not sure if it is required 
    
    int experience; //experiences of teachers 
    string role; 
}; 
#endif 
