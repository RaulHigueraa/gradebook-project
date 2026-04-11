#ifndef COURSE_H
#define COURSE_H

#include "gradebook.h"
typedef struct{

    gradebook gradebook;
    char course_name[50];


}course;

void addCourse(gradebook *gb, char *courseName);
void setCourseName(course *c, char *courseName);
char *getCourseName(course *c);

#endif