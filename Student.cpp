#include <iostream>
#include <string>
#include "PersonalDetails.h"
#include "Person.h"
#include "Student.h"
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

string Student::setRoll(){
    role = "Student";
}
string Student::getRoll(){
    return role;
}

int Student::yearlevel(int level){
    year_level = level;
    return year_level;
}

Student::~Student(){

}

