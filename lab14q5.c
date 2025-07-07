#include<stdio.h>
struct Date{
       int yrs;
       int mon;
       int day;
};

typedef struct Date Date;

struct Students{
       char name[20];
       int rollno;
       int age;
       Date dob;
       int fee;
};

typedef struct Students st;

int main(){
    st st;
    FILE *fp;
    fp = fopen("students.txt","a");
    printf("\nEnter name: ");
    scanf("%s",st.name);
    printf("\nEnter rollno: ");
    scanf("%d",&st.rollno);
    printf("\nEnter age: ");
    scanf("%d",&st.age);
    printf("\nEnter DOB: ");
    scanf("%d %d %d",&st.dob.yrs,&st.dob.mon,&st.dob.day);
    printf("\nEnter fee: ");
    scanf("%d",&st.fee);

    fprintf(fp,"\nName = %s",st.name);
    fprintf(fp,"\nRollno = %d",st.rollno);
    fprintf(fp,"\nAge = %d",st.age);
    fprintf(fp,"\nDOB = %d-%d-%d",st.dob.yrs,st.dob.mon,st.dob.day);
    fprintf(fp,"\nFee = %d",st.fee);

    fclose(fp);
    return 0;
}    
