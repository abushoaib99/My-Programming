#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()

{
    char s1[1111],s2[1111];
    printf("Enter Character: ");
    scanf("%s",s1);
    strcpy(s2,s1);/*copy to s2 from s1.*/
    printf("\nCopy File: %s\n",s2);
    return 0;

}

