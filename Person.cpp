#include "Person.h"
#include <iostream>
#include <string>

#include "PersonalDetails.h"
using namespace std;
Person::Person() { //default constructors
  name = "No name";
  age = 0;
  email = "no email";
  dateBD = 0;
  monthBD = 0;
  yearBD = 0;
  gender = "Unspecified";
  role = "no role";
}

Person::~Person() {} //defaul deconstructor 
