#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()

{
    char s1[11];
    char s2[11];
    scanf("%s %s",s1,s2);
    strcat(s1," ");
    strcat(s1,s2);
    printf("%s",s1);
    return 0;

}
