#include "Teacher.h"

#include <iostream>
#include <string>

#include "Person.h"
#include "PersonalDetails.h"

using namespace std;
Teacher::Teacher() {
  name = "Null";
  age = 0;
  email = "Null";
  dateBD = 0;
  monthBD = 0;
  yearBD = 0;
  ID = 0;
  gender = "Null";
  experiences = 0;
  role = "Teacher"; 
}

Teacher::Teacher(int experiences) { this->experiences = experiences; }

void Teacher::set_experience(int experienceTemp) {
  experiences = experienceTemp;
}
int Teacher::get_experience() { return experiences; }
void Teacher::setRole() { role = "Teacher"; }

string Teacher::getRole() { return role; }

Teacher::~Teacher() {}
