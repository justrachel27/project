/* Cpp file for PersonalDetails header */
#include "PersonalDetails.h"

#include <iostream>
#include <string>

using namespace std;
PersonalDetails::PersonalDetails() {
  name = "no name";
  age = 0;
  email = "null";
  gender = "unspecified"; 
  ID = 0; 
}
void PersonalDetails::setName(string nameTemp) { name = nameTemp; }
string PersonalDetails::getName() { return name; }
void PersonalDetails::setAge(int ageTemp) { age = ageTemp; }
int PersonalDetails::getAge() { return age; }
void PersonalDetails::setEmail(string emailTemp) { email = emailTemp; }
string PersonalDetails::getEmail() { return email; }
void PersonalDetails::setBirthday() {
  int temp;
  cout << "Enter your birth year: ";
  cin >> temp;
  while (temp <= 0) {
    cout << "invalid entry" << endl;
    cout << "Enter your birth year: ";
    cin >> temp;
  }
  yearBD = temp;

  cout << "Enter your birth month: ";
  cin >> temp;
  while (temp < 0 || temp > 12) {
    cout << "invalid entry" << endl;
    cout << "Enter your birth month: ";
    cin >> temp;
  }
  monthBD = temp;

  cout << "Enter your birth date: ";
  cin >> temp;
  while (temp < 0 || temp > 31) {
    cout << endl;
    cout << "invalid entry" << endl;
    cout << "Enter your birth date: ";
    cin >> temp;
  }
  dateBD = temp;
}
// overidding the setBirthday function
void PersonalDetails::setBirthday(int date, int month, int year) {
  dateBD = date;
  monthBD = month;
  yearBD = year;
}

void PersonalDetails::setGender(string genderTemp) { gender = genderTemp; }
string PersonalDetails::getGender() { return gender; }
int PersonalDetails::getdateBD() { return dateBD; }
int PersonalDetails::getmonthBD() { return monthBD; }
int PersonalDetails::getyearBD() { return yearBD; }
void PersonalDetails::setID(int id) { ID = id; }
int PersonalDetails::getID() { return ID; }
PersonalDetails::~PersonalDetails() {}