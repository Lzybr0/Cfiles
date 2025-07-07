/* Example of creativity Brand Structure and Vieweing information*/

#include<stdio.h>

struct Date {
     int yy;
     int mm;
     int dd;
};
typedef struct Date Date;

struct Brand {
    char name[20];
    char address[20];
    Date doe;
    int pqty;
    float budget;
};

typedef struct Brand Brand;

int main(){
    Brand a = {"Apple","U.S",1980,1,1,30000,1000};

    printf("\nName of Brand:%s",a.name);
    printf("\nAddress of Brand:%s",a.address);
    printf("\nDate of Establishment:%d-%d-%d",a.doe.yy,a.doe.mm,a.doe.dd);
    printf("\nTotal Product Count: %d ",a.pqty);
    printf("\nCompany Budget:%0.3f Billion$",a.budget);

    return 0;
}    






