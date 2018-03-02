#include<stdio.h>
int main()

{
    char ch;
    wrong:
    printf("Enter the letter: ");
    scanf("%c",&ch);
    switch(ch){
case 'A':
    printf("\nA for Apple\n");
    break;
case 'B':
    printf("\nB for Ball\n");
    break;
case 'C':
    printf("\nC for Cat\n");
    break;
default:
    printf("\n\nWrong Input\n\n");
    goto wrong;
    }
}
