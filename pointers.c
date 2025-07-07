#include<stdio.h>
int main(){
    char a, *cp;
    int x, *p;
    float f, *fp;

    a = '+'; x =2; f = 2.35;
    cp = &a; p = &x; fp = &f;
    *cp = *cp + 1;
    *p = *p + 1;
    *fp = *fp + 1;
    printf("%c",*cp);
    printf("\n%d",*p);
    printf("\n%f",*fp);
    return 0;
}    
