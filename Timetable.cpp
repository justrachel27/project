#include <iostream>

#include "Timetable.h"
using namespace std; 

Timetable::Timetable(){
    
}

void Timetable::intro(){
    cout<<"WELCOME TO SUBJECT'S SELECTIONS"<<endl;
    
}

string Timetable::course_option(){
    string option; 
    cout<<"What subject would you like to select"<<endl;
    cout<<"Enter M for Math, P for Physics, C for Chemistry, A for Arts, B for Business"<<endl;
    cin>>option; 
    return option;
}

void Timetable::redo(){
    cout<<"Invalid input, please enter again"<<endl;
    
}
