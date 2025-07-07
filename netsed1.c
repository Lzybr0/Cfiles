#include<stdio.h>
int main(){
    int x=1, y=1, m=10, n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    while(x<=n){
        printf("\n"); y=1;
        while(y<=m){
            printf("\n%d x %d = %d",x,y,x*y);
            y++;
        }
        x++;
    }
    return 0;
}