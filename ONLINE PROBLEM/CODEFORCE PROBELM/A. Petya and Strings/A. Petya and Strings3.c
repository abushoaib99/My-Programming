#include<stdio.h>
#include<string.h>
int main()
{
    char ch[101],ch1[101];
    gets(ch);
    gets(ch1);
    printf("%d\n",strcasecmp(ch,ch1));
    return 0;
}

