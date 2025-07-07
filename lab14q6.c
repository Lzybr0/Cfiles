#include<stdio.h>

int main(){
    FILE *fp;
    char ch;
    fp = fopen("hello.txt","r");
    ch = getc(fp);

    while ( ch != EOF){
          printf("%c",ch);
          ch = getc(fp);
    }
    fclose(fp);
    return 0;
}

