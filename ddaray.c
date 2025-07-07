#include<stdio.h>
int main(){
    int i=0,j=0;

    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int b[3][3]={{4,5,6},{7,8,9},{2,3,5}};
    int c[3][3];
    for (i=0; i<3; i++){
        for (j=0; j<3; j++){
            c[i][j]=a[i][j] + b[i][j];
            printf("\nThe value is c[%d][%d] : c[%d]  ",i,j,c[i][j]);
        }
    }
    
    return 0;

}