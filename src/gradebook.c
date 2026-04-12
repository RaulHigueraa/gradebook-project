#include "gradebook.h"
#include "student.h"
#include <stdlib.h>
#include <stdio.h>

void addStudentToGradebook(gradebook *gb, student s){
        if (gb->studentCount == gb->capacity) {
        printf("no memory left\n");
        gb->capacity *= 2; // allocating new array with bigger capacity 2x
        gb->students = realloc(gb->students, sizeof(student) * gb->capacity); // copy the content from the current array to the new one

        if (gb->students == NULL) {
            printf("Realloc failed\n");
            exit(1);
        }
    }

    gb->students[gb->studentCount++] = s;
}


void initGradebook(gradebook *gb) {
    gb->studentCount = 0;
    gb->capacity = 1;

    gb->students = malloc(sizeof(student) * gb->capacity);
    if (gb->students == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
}
    

void printListofStudentsInCourse(gradebook *gb){
    for (int i = 0; i < gb->studentCount; i++) {
        printf("%d: %s (ID: %d)\n", 
            i + 1,
            gb->students[i].name, 
            gb->students[i].id_number);
    }
}

int selectStudent(gradebook *gb){
    printf("Select student:\n");
    if (gb->studentCount == 0){
        printf("No students.");
        return -1;
    }
    printListofStudentsInCourse(gb);
    int choice;
    scanf("%d", &choice);
    if (choice < 1 || choice > gb->studentCount) {
        printf("Invalid choice. Please try again.\n");
        return -1;
    }
    return choice - 1; 

}
