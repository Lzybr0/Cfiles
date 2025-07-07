#include<stdio.h>
#include<stdlib.h>

struct std{
       char name[20];
       int rollno;
};

typedef struct std s;

int main(){ 
 
    s *student;
    int i=0, n;
    FILE *stds;
    stds = fopen("stds.txt","w");
    printf("\nEnter the number of stds: ");
    scanf("%d",&n);
    student = (s*)malloc(n*sizeof(s));
    for (i=0; i<n; i++){
        printf("\nEnter the name of student [%d]: ",i);
        scanf("%s",(student+i)->name);
        printf("\nEnter roll no [%d]: ",i);
        scanf("%d",&(student+i)->rollno);
    }
    for (i = 0; i < n; i++){
          fprintf(stds,"\nName = %s",(student+i)->name);
          fprintf(stds,"\nRollno = %d",(student+i)->rollno);
    }
    free(student);
    fclose(stds);
    return 0;
}    



    
