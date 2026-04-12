#include <stdio.h>
#include "student.h"
#include "gradebook.h"
#include "course.h"
#include "system.h"

/* 
1. Add a course(s) to the system - can change later to add more courses,
   but for now we can just have one course in the system to keep it simple.
   We can always expand later if we want to support multiple courses.
      - creates a gradebook for that course
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
   printf("Welcome to the gradebook program!\n");
   System sys;
   initSystem(&sys);
   systemMenu(&sys);


   /*

   /* int opition id; 
        printf("Select from options from list below.\n");
        printf("1.Add \n2.Find a student \n3.Update Students info \n4.Delete \n5.List Student Information\n");
        scanf("%d",&option);
        
        switch(option){
        case 1:
                //calls adding method
                break;
        case 2:
                //calls finding  method
                printf("Enter the students id number: ");
                scanf("%10d",&id)
                find(//array name ,id);
                break;
        case 3:
                //calls updating  method
                break;
        case 4:
                //calls delete method
                break;
        case 5:
                 //calls listing method
                break;
        } */
/*

   printf("Gradebook program end\n");
   course c;
   setCourseName(&c, "Intro to C Programming");
   printf("Course Name: %s\n", getCourseName(&c));
   gradebook gb;
   gb.students = NULL;
   gb.studentCount = 0;

   student s = addStudent();
   addStudentToGradebook(&gb, s);
*/ 
/*
   printf("Welcome to the gradebook program!\n");
   System sys;
   initSystem(&sys);
   int choice; 
   //initSystem(&sys);

   do{
 
   printf("System Menu:\n");
   printf("1. Add course to system\n");
   printf("2. Print list of courses in system\n");
   printf("3. Choose a course to manage\n");
   printf("4. Exit\n");
   scanf("%d", &choice);

 
      switch(choice){
         case 1: {
            printf("1. Adding a course to system\n");
            addCoursetoSystem(&sys, addCourse());
            break;
         }
         case 2: {
            printf("List of courses in system:\n");
            printListofCoursesInSystem(&sys);
            break;
         }
         case 3: {
            printf("Choose a course to manage:\n");
            int course_num = selectCourse(&sys);
            if (course_num == -1){
               break;
            }
            // choosing the course to manage
            course *curr_course = &sys.courses[course_num];
            //initGradebook(&curr_course->gradebook);
            gradebook *gb = &curr_course->gradebook;
            do{
               printf("Course Management Menu:\n");
               printf("1. Add student\n");
               printf("2. Print list of students in course\n");
               printf("3. Manage Gradebook\n");
               printf("0. Exit Course Management Menu..\n");
               scanf("%d", &choice);

               switch(choice){
                  case 1: {
                     // ADD STUDENT
                     student newStudent = addStudent();
                     addStudentToGradebook(gb, newStudent);
                     break;
                  }
                  case 2: {
                     // PRINT LIST OF STUDENTS IN COURSE
                     printf("List of students in course:\n");
                     printListofStudentsInCourse(gb);
                     break;
                  }
                  case 3: {
                     // MANAGE GRADEBOOK
                     // - accesses new menu
                     //   -enter homework scores, exam scores, project scores
                     //   - get avg of 
                     // Support adding x, finding findStudent(), updating updateStudent()->what field?, deleting-> deleteStudent(), and listing students
                     break;
                  }
                  default:
                     printf("Invalid choice. Please try again.\n");
               }

            }while(choice != 0);

            printf("Exiting course managment menu.. going back to main menu");
            break;
         }
         case 4:
            printf("Exiting program...\n");
            printf("Goodbye!\n");
            break;

         default:
            printf("Invalid choice. Please try again.\n");
      }

   }while(choice !=4);

   printf("Gradebook program end\n");

   */

   /* int find(//array name, int a){
        int ID = a;
        char grade;
        //search for id in array
        for(int i=0; i<arraysize; i++){
           
        }
        //get grade that corressponds to the id enterd
                grade =;
        //display id number and student grade
        printf("-----------------Student Infromation------------------------");
        printf("Student ID: %d\tGrade: %s",ID, grade);

        }*/
    
}
