#include<stdio.h>

int main(){
    char c, *cp; cp=&c;
    int i, *ip; ip=&i;
    float f, *fp; fp=&f;

    printf("\nSize of Character Pointer: %ld",sizeof(cp));
    printf("\nSize of Integer Pointer: %ld",sizeof(ip));
    printf("\nSize of float Pointer: %ld",sizeof(fp));

    return 0;
}    

