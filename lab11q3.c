/* WAP to declare and intialize two variable of student structure with member name, address, aage, rollno and fee. Also display records in Output screen */

#include<stdio.h>

struct Student{
       char name[20];
       char address[20];
       int age;
       int rollno;
       int fee;
};

typedef struct Student Student;

int main(){
    Student s1={"Kushal", "Samakhushi", 19, 03, 20000};
    Student s2={"Aaryash", "Maitidevi", 18, 01, 30000};
    printf("\n Name:%s",s1.name);
    printf("\n Address:%s",s1.address);
    printf("\n Age:%d",s1.age);
    printf("\n Rollno:%d",s1.rollno);
    printf("\n Fee:%d",s1.fee);
    printf("\n\n Name:%s",s2.name);
    printf("\n Address:%s",s2.address);
    printf("\n Age:%d",s2.age);
    printf("\n Rollno:%d",s2.rollno);
    printf("\n Fee:%d",s2.fee);
    return 0;
}    
