#include<stdio.h>
int main()

{
    char text[20],name1[20],name2[20],name3[20];
    scanf("%s %s %s",name1,name2,name3);
    strcat(name1," ");
    strcat(name1,name2);
    strcat(name1," ");
    strcat(name1,name3);
    puts(name1);
    return 0;
}
