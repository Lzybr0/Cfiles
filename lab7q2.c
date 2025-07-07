//Integer array consist of following numbers.
//[3, -2, 7, 6, -4, -5, 9, -3, 1, 2, -10, -12] display the +ve nums only.

#include<stdio.h>
int main(){
    int i=0;
    int a[12] = {3, -2, 7, 6, -4, -5, 9, -3, 1, 2, -10, -12};
    


    for(i = 0; i<12; ++i){
        
    
    if (a[i]>0)
    printf("\n+ve num is %d",a[i]);
    }
    return 0;
}