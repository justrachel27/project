#include <iostream>
#include "Teacher.h"
#include "Person.h"


using namespace std;

Teacher::Teacher(int experiences){
    this->experiences=experiences;
}

void Teacher::set_role(Person role){
    this->role=role;
}

Person Teacher::get_role(){
    return role;
}

void display(){
    cout<<"Experience level: "<<experiences<<endl;
    cout<<"Teacher role: "<<role.getRole()<<endl;
}
