#include "Student.h"

#include <iostream>
#include <string>

#include "Person.h"
#include "PersonalDetails.h"
using namespace std;

Student::Student() {
  name = "Null";
  age = 0;
  email = "Null";
  dateBD = 0;
  monthBD = 0;
  yearBD = 0;
  ID = 0;
  gender = "Null";
  role = "Student"; 
}
void Student::setRole() { role = "Student"; }
string Student::getRole() { return role; }

int Student::yearlevel(int level) {
  year_level = level;
  return year_level;
}

Student::~Student() {}
