#include<stdio.h>
int main(){
    int x[]= {3,2,7,1,5};
    int *p, i=0;
    p =&x[0];

    for( i=0; i<5; ++i){
       printf("%d\t",x[i]);
    }
    printf("\n");
    for( i=0; i<5; ++i){
       printf("%d\t",*(p+i));
    }
    return 0;
}    
