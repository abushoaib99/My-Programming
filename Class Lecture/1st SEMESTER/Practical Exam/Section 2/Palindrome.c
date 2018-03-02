#include<stdio.h>
int main()

{
    char name[20],copy[20];
    printf("Enter Name: ");
    gets(name);
    strcpy(copy,name);
    strrev(name);
    printf("\nReverse Name: ");
    printf("%s",name);
    if(strcmp(name,copy)==0)
        printf("\nPalindrome\n");
        else
            printf("\nNot Palindrome\n");

    return 0;
}
