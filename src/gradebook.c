#include "gradebook.h"
#include "student.h"
#include <stdlib.h>

void addStudentToGradebook(gradebook *gb, student s){
    gb->studentCount++;
    gb->students = (student *)realloc(gb->students, gb->studentCount * sizeof(student));
    gb->students[gb->studentCount - 1] = s;
}
