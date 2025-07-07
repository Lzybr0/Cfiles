#include<stdio.h>
int main(){
    int a[12] ={3,-2,7,6,-4,-5,9,-3,1,2,-10,-12};
    int i=0, si=0;
    for(i=0;i<12;++i){
        printf("%d\t",a[i]);
    }
    printf("\n");
    for(i=0;i<12;++i){
        if(a[si]>a[i]){
            si=i;
        }
    }
    printf("\nSmallest number is %d at %d",a[si],si);
    return 0;

    }
