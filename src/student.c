
#include <stdio.h>
#include <stdlib.h>
#include "student.h"



student addStudent() {

    student s = {0};   

    printf("Creating a new student...\n");
    printf("Enter student name: ");
    scanf(" %49[^\n]", s.name);
    printf("Enter student ID number: ");
    scanf("%d", &s.id_number);


    return s;

}

void addExamScore(student *s) {
    if (s->examCount < MAX_EXAMS) {
        double score; 
        printf("Enter exam score: ");
        scanf("%lf", &score);
        s->exam_scores[s->examCount] = score;
        s->examCount++;
    } else {
        printf("Cannot add more exam scores. Maximum reached.\n");
    }
}

void listExamScores(student *s){
    for(int i = 0; i < s->examCount; i++ ){
        printf("%d: %.2f\n", i+1, s->exam_scores[i]);
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

void listHomeworkScores(student *s){
    for(int i = 0; i < s->homeworkCount; i++ ){
        printf("%d: %.2f\n", i+1, s->hw_scores[i]);
    }
}

void addProjectScore(student *s) {
    if (s->projectCount < MAX_PROJECTS) {
        double score; 
        printf("Enter project score: ");
        scanf("%lf", &score);
        s->project_scores[s->projectCount] = score;
        s->projectCount++;
    } else {
        printf("Cannot add more project scores. Maximum reached.\n");
    }
}

void listProjectScores(student *s){
        for(int i = 0; i < s->projectCount; i++ ){
        printf("%d: %.2f\n", i+1, s->project_scores[i]);
    }
}

void printAllScores(student *s){
        printf("_________________________________\n");
        printf("PROJECT SCORES:\n");
        for(int i = 0; i < s->projectCount; i++ ){
        printf("%d: %.2f\n", i+1, s->project_scores[i]);
    }
        printf("_________________________________\n");

        printf("HOMEWORK SCORES:\n");
        for(int i = 0; i < s->homeworkCount; i++ ){
        printf("%d: %.2f\n", i+1, s->hw_scores[i]);
    }
        printf("_________________________________\n");

         printf("EXAM SCORES:\n");
        for(int i = 0; i < s->examCount; i++ ){
        printf("%d: %.2f\n", i+1, s->exam_scores[i]);
    }
        printf("_________________________________\n");



}

// KIMBERLY'S CODE

/* UPDATE FUNCTION HERE */
void updateStudentName(student *s) {
    printf("Enter new student name: ");
    scanf(" %49[^\n]", s->name);

    printf("Student name updated successfully.\n");
}

void updateStudentID(student *s) {
    printf("Enter new student ID number: ");
    scanf("%d", &s->id_number);

    printf("Student ID updated successfully.\n");
}