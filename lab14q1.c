#include<stdio.h>
int main(){
    FILE *intro;

    intro = fopen("hello.txt","w");
    
    fprintf(intro, "Za Worlda");

    fclose(intro);

    return 0;
}
