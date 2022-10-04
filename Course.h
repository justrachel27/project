#ifndef COURSE_H
#define COURSE_H 

#include "Timetable.h"


class Course: public Timetable{
    public: 
    Course();
    float timing[]; 
    private: 
    Course(string name_course, float time_course, int total);
    string Course_title; 
    string get_title();
    float set_Time;
    float get_Time(); 
    int *subject=new int[k+1];
    
}
