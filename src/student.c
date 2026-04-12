
#include <stdio.h>
#include <stdlib.h>
#include "student.h"



student addStudent() {

    student s;

    printf("Creating a new student...\n");
    printf("Enter student name: ");
    scanf(" %49[^\n]", s.name);
    printf("Enter student ID number: ");
    scanf("%d", &s.id_number);


    return s;

}

void addExamScore(student *s, double score) {
    if (s->examCount < MAX_EXAMS) {
        s->exam_scores[s->examCount] = score;
        s->examCount++;
    } else {
        printf("Cannot add more exam scores. Maximum reached.\n");
    }
}

void addHomeworkScore(student *s) {
    if (s->homeworkCount < MAX_HW) {
        double score; 
        printf("Enter homework score: ");
        scanf("%lf", &score);
        s->hw_scores[s->homeworkCount] = score;
        s->homeworkCount++;
    } else {
        printf("Cannot add more homework scores. Maximum reached.\n");
    }
}

void addProjectScore(student *s, double score) {
    if (s->projectCount < MAX_PROJECTS) {
        s->project_scores[s->projectCount] = score;
        s->projectCount++;
    } else {
        printf("Cannot add more project scores. Maximum reached.\n");
    }
}
