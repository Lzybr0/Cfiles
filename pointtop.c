#include<stdio.h>
int main(){
    int var=10;
    int *ptr, **pptr, ***ppptr;
    ptr=&var; pptr=&ptr; ppptr=&pptr;
    printf("\nValue of var =%d",var);
    printf("\nValue at ptr =%d",*ptr);
    printf("\nValue at pointer to pointer pptr =%d",**pptr);
    printf("\nValue at pointer to pointer to pointer ppptr =%d",***ppptr);
    return 0;
}