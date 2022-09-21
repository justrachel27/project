
/* Class Person
Inherited from PersonalDetails (public mode)
Class have protected attributes -  role
Class have public functions -  getRole, setRole, constructor, deconstructor*/#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string>

#include "PersonalDetails.h"
using namespace std;

class Person : public PersonalDetails {
 protected:
  string role;

 public:
  Person();
  virtual void setRole() = 0; //Virtual setRole, getRole functions
  virtual string getRole() =0; //ensures that derived class have their own roles 
  ~Person(); 
};
#endif
