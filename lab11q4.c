#include<stdio.h>

struct Date{
      int year;
      int month;
      int day;
};


typedef struct Date Date;

int main(){
    Date a = {2002, 06 ,04};
    Date b = {2021, 02 ,8};
    Date c;
    c.year = a.year + b.year;
    c.month = a.month + b.month;
    c.day = a.day + b.day;
    printf("\n Combined year: %d - %d - %d ",c.year,c.month,c.day);
    return 0;
}
