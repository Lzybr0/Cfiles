#include<stdio.h>
int main(){
//this is logical operator
int a=1, b=0, c=3;
printf("\n%d AND %d is %d",a,b,a&&b);
printf("\n%d OR %d is %d",a,b,a||b);
printf("\n%d NOT is %d\n%d NOT is %d",a,!a,b,!b);
printf("\n%d >%d AND %d<%d is %d",a,b,a,c,a>b&&a<c);
return 0;


}