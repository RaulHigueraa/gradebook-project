#include "course.h"
#include "gradebook.h"
#include <string.h>
#include <stdio.h>

course addCourse(){
    course c;
    printf("Creating a new course...\n");
    printf("Enter course name: ");
    scanf(" %49[^\n]", c.course_name);

    initGradebook(&c.gradebook);

    return c;
}

void setCourseName(course *c, char *courseName) {
    // Placeholder for setting the course name
    strcpy(c->course_name, courseName);
}

char *getCourseName(course *c) {
    // Placeholder for getting the course name
    return c->course_name;
}
