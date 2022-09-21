/* Class Personal Details
Class have protected attributes - name, age, email, birthday, ID
Class have public functions -  */
#ifndef PERSONALDETAILS_H
#define PERSONALDETAILS_H
#include <iostream>
#include <string>
using namespace std;
class PersonalDetails {
 protected:  // protected data members
  string name;
  int age;
  string email;
  int dateBD;
  int monthBD;
  int yearBD;
  int ID;
  string gender; 

 public:                          // public function members
  PersonalDetails();              // only the default constructor
  void setName(string nameTemp);  // get and set attributes
  string getName();
  void setAge(int ageTemp);
  int getAge();
  void setEmail(string emailTemp);
  string getEmail();
  void setBirthday();
  void setBirthday(int date, int month, int year);
  int getdateBD();
  int getmonthBD();
  int getyearBD();
  void setID(int id);
  int getID();
  void setGender(string genderTemp);
  string getGender(); 
  ~PersonalDetails();  // default deconstructor
};
#endif