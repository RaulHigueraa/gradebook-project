#ifndef GRADEBOOK_H
#define GRADEBOOK_H
#include "student.h"

typedef struct{

    student *students;
    int studentCount;



}gradebook;

void addStudentToGradebook(gradebook *gb, student s);
#endif