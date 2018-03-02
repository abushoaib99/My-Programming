#include<stdio.h>
int main()

{
    char country[11],copy[11];
    int i;
    printf("Enter Country Name: ");
    scanf("%s",country);/*or gets(country);*/
    for(i=0;country[i]!='\0';i++){
        copy[i]=country[i];
    }
    printf("\nCopy File are: %s\n",copy);/*or puts(country);*/
    return 0;
}
