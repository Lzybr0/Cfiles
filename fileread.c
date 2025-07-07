#include<stdio.h>
#include<stdlib.h>

int main() {
    FILE *file;
    char filename[20];
    char ch;
    printf("Enter the filename to read: ");
    scanf("%s\n",filename);

    file = fopen(filename,"r");

    if (file == NULL ){
       perror("Error opening file");
       return 1;
    }

    printf("Contents of %s : \n",filename);
    while ((ch = fgetc(file)) != EOF) {
          putchar(ch);
    }
    fclose(file);
    return 0;
}
