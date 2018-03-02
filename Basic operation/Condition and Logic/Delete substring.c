#include<stdio.h>
int main()
{
    char str[20],ch;
    int i,j;
    printf("Enter string: ");
    gets(str);
    printf("\nEnter character will be deleted: ");
    scanf("%c",&ch);
    for(i=0,j=0;i<strlen(str);i++){
        if(str[i]!=ch){
            str[j]=str[i];
            j++;
        }
    }
    str[j]='\0';
    printf("\nString after removing character: %s\n",str);
    return 0;
}
