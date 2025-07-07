#include<stdio.h>
int main(){
    int i=0,j=0;

    int a[2][2]={{1,-2},{3,4}};
    int b[2][2]={{-7,3},{2,1}};
    int c[2][2];
    for (i=0; i<2; i++){
        for (j=0; j<2; j++){
            c[i][j]=a[i][j] + b[i][j];
            printf("\nThe value is c[%d][%d] : c[%d]  ",i,j,c[i][j]);
        }
    }
    
    return 0;

}