#ifndef SYSTEM_H
#define SYSTEM_H

#include "course.h"

typedef struct{
    course *courses;
    int courseCount;
    int capacity;
    
}System;

void addCoursetoSystem(System *sys, course c);
void printListofCoursesInSystem(System *sys);
int selectCourse(System *sys);
void initSystem(System *sys);
void systemMenu(System *sys);
void courseMenu(course *c);
void studentMenu(student *s);



#endif