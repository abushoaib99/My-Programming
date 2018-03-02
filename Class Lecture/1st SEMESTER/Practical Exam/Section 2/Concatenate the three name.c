#include<stdio.h>
int main()

{
    char name1[100],name2[100],name3[100];
    scanf("%s %s %s",name1,name2,name3);
    strcat(name1," ");
    strcat(name1,name2);
    strcat(name1," ");
    strcat(name1,name3);
    printf("%s",name1);

    return 0;
}
