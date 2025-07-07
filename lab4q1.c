#include<stdio.h>

int main(){
//wap to check the vowel
    char x;
    printf("Enter a letter: ");
    scanf("%c", &x);

    if (x =='a' || x =='e' || x == 'i' || x == 'o' || x =='u' || x =='A' || x == 'E' || x == 'I' || x == 'O' || x =='U')
    printf("\nIt is a vowel %c", x);
    return 0;
}