
#include <stdio.h>
#include <stdlib.h>
#include "student.h"

student addStudent() {

    student s;

    printf("Creating a new student...\n");
    printf("Enter student name: ");
    scanf("%s", s.name);
    printf("Enter student ID number: ");
    scanf("%d", &s.id_number);

    printf("How many homework scores? ");
    scanf("%d", &s.homeworkCount);

    if (s.homeworkCount > MAX_HW) {
        printf("Maximum homework scores exceeded. Setting to %d.\n", MAX_HW);
        s.homeworkCount = MAX_HW;
    }

    for (int i = 0; i < s.homeworkCount; i++) {
        printf("Homework %d: ", i + 1);
        scanf("%lf", &s.hw_scores[i]);
    }

    printf("How many exam scores? ");
    scanf("%d", &s.examCount);
    
    if (s.examCount > MAX_EXAMS) {
        printf("Maximum exam scores exceeded. Setting to %d.\n", MAX_EXAMS);
        s.examCount = MAX_EXAMS;
    }
        for (int i = 0; i < s.examCount; i++) {
        printf("Exam %d: ", i + 1);
        scanf("%lf", &s.exam_scores[i]);
    }

    printf("How many project scores? ");
    scanf("%d", &s.projectCount);
    
    if (s.projectCount > MAX_PROJECTS) {
        printf("Maximum project scores exceeded. Setting to %d.\n", MAX_PROJECTS);
        s.projectCount = MAX_PROJECTS;
    }

    for (int i = 0; i < s.projectCount; i++) {
        printf("Project %d: ", i + 1);
        scanf("%lf", &s.project_scores[i]);
    }

    return s;

}
