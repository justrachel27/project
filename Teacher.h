#ifndef TEACHER_H
#define TEACHER_H
#include "Person.h"
#include "PersonalDetails.h"
using namespace std;

class Teacher : public Person {
 protected:
  int experiences;

 public:
  Teacher();
  Teacher(int experiences);
  void set_experience(int experienceTemp);
  int get_experience();
  void setRole();
  string getRole();
  ~Teacher();
};
#endif
