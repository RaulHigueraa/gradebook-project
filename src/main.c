#include <stdio.h>
#include "student.h"
#include "gradebook.h"
#include "course.h"

/* 
1. Add a course(s) to the gradebook - can change later to add more courses,
   but for now we can just have one course in the gradebook to keep it simple.
   We can always expand later if we want to support multiple courses.
2. Create a student
3. Add student to a course
4. Record grades for a student for that course

- functions
- print list of all grades a student in course
- prints a list of all students in a course
- compute the avg for a student in a course
- prints a list of all courses
- prints a list of all classes
- computes the average for a course


*/

int main() {

   printf("Gradebook program end\n");
   course c;
   setCourseName(&c, "Intro to C Programming");
   printf("Course Name: %s\n", getCourseName(&c));
   gradebook gb;
   gb.students = NULL;
   gb.studentCount = 0;

   student s = addStudent();
   addStudentToGradebook(&gb, s);
   
    
}