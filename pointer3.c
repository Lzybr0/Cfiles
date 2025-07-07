
#include<stdio.h>
int main(){
    int x[5];
    int *p, i=0;
    p=&x[0];
    for( i=0; i<5; ++i){
       printf("Enter x [%d]:",i);
       scanf("%d",(p+i));
    }
    printf("\n");
    for( i=0; i<5; ++i){
       printf("%d\t",x[i]);
    }
    return 0;
}    
