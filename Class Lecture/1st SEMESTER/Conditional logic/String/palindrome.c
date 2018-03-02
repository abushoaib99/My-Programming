#include<stdio.h>
int main()

{
    char name[20],copy[20];
    gets(name);
    strcpy(copy,name);
    strrev(name);
    puts(name);
    if(strcmp(copy,name)==0)
        printf("\nPalindrome\n");
    else
        printf("\nNO\n");
    return 0;
}
