
#ifndef STUDENT_H
#define STUDENT_H

// MAX constant for homework, exams, and projects
// - Limits can be adjusted as needed later
// - Tried using dynamic arrays but ran into issues with memory management and complexity, so switched to fixed-size arrays for simplicity
// - If we want to support more than these limits, we can always increase the constants and recompile
// - Ingrid

#define MAX_HW 10
#define MAX_EXAMS 5
#define MAX_PROJECTS 5

typedef struct{

    char name[50]; 
    int id_number; 

    double hw_scores[MAX_HW]; 
    int homeworkCount; 
    //double *hw_scores; 
    
    double exam_scores[MAX_EXAMS]; 
    int examCount; 
    //double *exam_scores; 

    double project_scores[MAX_PROJECTS];
    int projectCount;
    


}student;
student addStudent(void);
void addExamScore(student *s, double score);
void addHomeworkScore(student *s);
void addProjectScore(student *s, double score);
void listHomeworkScores(student *s);

#endif