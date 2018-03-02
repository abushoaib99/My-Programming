#include<stdio.h>
int main()

{
    char ch[20];
    int n,i;
    scanf("%s",ch);
    n=strlen(ch);
    for(i=n-1;i>=0;i--){
        printf("%c",ch[i]);
        }

}
