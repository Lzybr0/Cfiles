#include<stdio.h>

int main() {
    char name[20], ch;
    int len = 0, i = 0;
    printf("\nEnter a name: ");
    scanf("%s",name);

/*    ch = str [0];
    if ( ch != '\0') {
        len++;
        ch = str[1];
      if (ch != '\0') {
       len ++

       */

      ch = name[i];
      while( ch != '\0') {
            len++;
            ch = name[i];
            i++;
      }

      printf("\nLength = %d",len);
      return 0;
}      


    
    
