#include <iostream>
#include <string>
#include "PersonalDetails.h"
#include "Person.h"
#include "student.h"
using namespace std;

Student::Student(){
    name = "Null";
    age = 0;
    email= "Null";
    dateBD = 0;
    monthBD = 0;
    yearBD = 0;
    ID = 0;
    gender = "Null"; 
}

   void Student::setRole(string roleTemp){
    role = roleTemp; 
   } 


 string Student::getRole(){
    return role; 
 }

int Student::yearlevel(int level){
    year_level = level;
    return year_level;
}

Student::~Student(){
    
}

