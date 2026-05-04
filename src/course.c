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
void findstudent(){
        char subject[50];
        //found will keep track on whether course is found 
        //found = 0 means course was not found and if found = 1 course was found in array
        int found = 0;
        // key will hold the id number the user inputs
        int key;
        //ask for course name to search for student in
        printf("Enter the course you want to look for a student in: ");
        scanf("%%49\n",&subject);
        
        //first check if course exsits 
        // if it does ask for id, if it doesn't return to main menu
        //strcmp will compare two strings character by character, 0 means the strings are equal
      for (int i=0; i<courseCount; i++)
      {
        if(strcmp (subject, course[i].course_name)==0)
            print("Course found...)" 
            found = 1;
      }
      if(!found)
      {
          printd("Course was not found...\n")
          return;
      }
    
        //asking user for students id(key)
        // used id for key incase their are students whith same name or name gets missspelled
        printf("Enter the student's ID number: ");
        scanf("%d",&key);
        
        //access course and look for student in course
        gradebook *gb = &coursescourseIndex.gradebook;
        for (int i=0; i<gb->studnetCount; i++);
          {
                if (gb->students[i].id_num == key) 
                {
                        printf("Student found.\n");
                        //display students current info such as 
                        //name, id, hw scores, project scores, test scores
                        printf("-----------------Student Infromation------------------------\n");
                        printf("Student Name: %s\n",gb->students[i].name);
                        print("ID: %d\n", gb->students[i].id_number);
                        
                        //use for loop to display scores for each hw, exam, and projects
                        printf("Homework scores: \n");
                        for(int a=0; a<gb->students[i].homeworkCount; a++)
                        {
                            printf("%f\n", gb->student[i].hw_scores[a] );
                        }
                        
                        printf("Exam Scores: \n"); 
                        for(int b =0; b<gb->studnets[i].examCount; b++)
                        {
                            print("%f\n", gb->students[i].exam_scores[b]);
                        }
                        printf("Project scores: \n");
                        for(int x = 0; x<gb->students[i].project_scores; x++){
                        printf("%f\n",gb->students[i].project_scores[x]);}
                    
                        return;
                    
                }
                else
                { 
                printf("Student with ID: %d not found ...",key); 
                return;
                }
         
         }
         
        }
