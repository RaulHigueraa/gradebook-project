#include "course.h"
#include "gradebook.h"
#include <string.h>

void addCourse(gradebook *gb, char *courseName) {
    // Placeholder for adding a course to the gradebook
    gb = gb;
    courseName = courseName;    
}

void setCourseName(course *c, char *courseName) {
    // Placeholder for setting the course name
    strcpy(c->course_name, courseName);
}

char *getCourseName(course *c) {
    // Placeholder for getting the course name
    return c->course_name;
}