#include<stdio.h>

struct date{
      int yrs;
      int mon;
      int day;
};

typedef struct date date;

struct employee{
       int empid;
       char name[20];
       date doe;
       int salary;
};

typedef struct employee emp;

int main(){
    emp e[5];
    int i = 0;
    for(i = 0; i < 5; ++i ){
       printf("\nEnter emp_id: ");
       scanf("%d", &e[i].empid);
       printf("\nEnter name: ");
       scanf("%s", e[i].name);
       printf("\nEnter doe: ");
       scanf("%d %d %d", &e[i].doe.yrs, &e[i].doe.mon, &e[i].doe.day);
       printf("\nEnter salary: ");
       scanf("%d",&e[i].salary);
       }

       printf("\n");
       for (i=0; i<5; ++i){
          if(e[i].salary > 20000){
             printf("\nEmploye_id:%d ",e[i].empid);
             printf("\nName:%s",e[i].name);
             printf("\nD.O.E: %d-%d-%d:",e[i].doe.yrs,e[i].doe.mon,e[i].doe.day);
             printf("\nSalary:%d",e[i].salary);
          }
          printf("\n");
       }
       return 0;
}       



