#include<stdio.h>
int main(){
    int a[10]= {10,5,7,3,1,4,6,12,8,14};
    int i = 0, sum = 0;

    for(i=0; i<10; i++){
        printf("a[%d]=%d\t",i,a[i]);
    }

    for (i=0; i<10; ++i){
        sum+=a[i];
    }
    printf("\nSum of Array=%d",sum);
    return 0;
}