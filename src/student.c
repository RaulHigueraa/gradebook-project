#include <stdio.h>
#include <stdlib.h>
#include "student.h"

student createStudent() {

    student s;
    
    printf("Creating a new student...\n");
    printf("Enter student name: ");
    scanf("%s", s.name);
    printf("Enter student ID number: ");
    scanf("%d", &s.id_number);

    printf("How many homework scores? ");
    scanf("%d", &s.homeworkCount);
    s.hw_scores = (double *)malloc(s.homeworkCount * sizeof(double));

    for (int i = 0; i < s.homeworkCount; i++) {
        printf("Homework %d: ", i + 1);
        scanf("%lf", &s.hw_scores[i]);
    }

    printf("How many exam scores? ");
    scanf("%d", &s.examCount);
    s.exam_scores = (double *)malloc(s.examCount * sizeof(double));
    for (int i = 0; i < s.examCount; i++) {
        printf("Exam %d: ", i + 1);
        scanf("%lf", &s.exam_scores[i]);
    }

    printf("How many project scores? ");
    scanf("%d", &s.projectCount);
    s.project_scores = (double *)malloc(s.projectCount * sizeof(double));
    for (int i = 0; i < s.projectCount; i++) {
        printf("Project %d: ", i + 1);
        scanf("%lf", &s.project_scores[i]);
    }

    return s;

    // Code to create a new student would go here
}