#ifndef TIMETABLE_H
#define TIMETABLE_H


class Timetable{
    public:
    Timetable();
    void intro();
    virtual string course_option();//options of subjects 
    virtual void redo(); //when users enter invalid input 
    
};
#endif 
