#include<stdio.h>
int main()

{
    char ch[20];
    scanf("%s",&ch);
    printf("\n%10s",ch);
    printf("\n%-10s",ch);
    printf("%-10.35",ch);
    return 0;
}
