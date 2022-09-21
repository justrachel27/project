#ifndef TEACHER_H
#define TEACHER_H
#include "Person.h"
using namespace std;

class Teacher{
    public:
    Teacher(int experiences);
    void set_role(Person role);
    Person get_role();
    void display();

    private:
    Person role;
    int experiences;
};
#endif
