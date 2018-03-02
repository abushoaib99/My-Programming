#include<stdio.h>
int main()

{
    char first_name[10],second_name[10],last_name[10],name[30];
    int i,j,k;

    printf("Enter First Name: ");
    scanf("%s",first_name);
    printf("Enter second Name: ");
    scanf("%s",second_name);
    printf("Enter last Name: ");
    scanf("%s",last_name);

    for(i=0;first_name[i]!='\0';i++)
        name[i]=first_name[i];
        name[i]=' ';

    for(j=0;second_name[j]!='\0';j++)
        name[i+j+1]=second_name[j];
        name[i+j+1]=' ';

    for(k=0;last_name[k]!='\0';k++)
        name[i+j+k+2]=last_name[k];
        name[i+j+k+2]='\0';


    printf("\n\nFull Name: %s\n",name);
    return 0;
}
