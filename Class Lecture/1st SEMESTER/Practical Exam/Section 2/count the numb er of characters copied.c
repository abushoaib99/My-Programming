#include<stdio.h>
int main()

{
    char name[100],copy[100];
    printf("Enter Name: ");
    gets(name);

    strcpy(copy,name);
     printf("\nCopied name: %s\n",copy);
    printf("\nThe number of characters copied: %d\n",strlen(copy));
}
