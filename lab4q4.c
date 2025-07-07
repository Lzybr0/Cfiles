#include<stdio.h>

int main(){
//wap to check grade using if
    int marks;
    printf("\nEnter your marks: ");
    scanf("%d", &marks);

    if (marks >= 90 ){
        printf("\nYou got Grade A+");
    }
    else if (marks >= 80){
        printf("\nYou got Grade B");
    }
    else if (marks >= 70){
        printf("\nYou got Grade C");
    }
    else if (marks >= 60){
        printf("\nYou got Grade D");
    }
    else{
        printf("\nYou got Grade F");
    }
    return 0;
}