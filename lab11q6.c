#include<stdio.h>

struct student{
       char name[20];
       int rollno;
       int marks[5];
       int totalmarks;
};

typedef struct student student;

int main(){
    student s1, s2;
    int i=0;
    printf("\nEnter the deatils of student 1: ");
    scanf("%s", s1.name);
    printf("\nEnter the rollno:");
    scanf("%d",&s1.rollno);
    for( i=0; i<5; ++i){
        printf("\nEnter the marks of subject[%d]: ",i+1);
        scanf("%d",&s1.marks[i]);
     }
        
    printf("\n\nEnter the deatails of student 2: ");
    scanf("%s", s2.name);
    printf("\nEnter rollno: ");
    scanf("%d", &s2.rollno);
    for( i=0; i<5; ++i){
        printf("\nEnter the marks of subject[%d]:",i+1);
        scanf("%d",&s2.marks[i]);
    }

    s1.totalmarks = 0, s2.totalmarks =0;
    for( i=0; i<5; ++i){
       s1.totalmarks += s1.marks[i];
       s2.totalmarks += s2.marks[i];
    }

    printf("\nName:%s \nRollno:%d \nTotalmarks:%d",s1.name,s1.rollno,s1.totalmarks);
    printf("\n");
    printf("\nName:%s \nRollno:%d \nTotalmarks:%d",s2.name,s2.rollno,s2.totalmarks);

    return 0;
}    



