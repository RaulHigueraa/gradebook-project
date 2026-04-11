

typedef struct{

    char name[50]; 
    int id_number; 

    int homeworkCount; 
    double *hw_scores; 
    
    int examCount; 
    double *exam_scores; 

    int projectCount; 
    double *project_scores; 


}student;
student createStudent(void);