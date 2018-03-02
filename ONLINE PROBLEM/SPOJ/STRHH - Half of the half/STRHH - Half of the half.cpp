#include<bits/stdc++.h>
int main()
{
    int t;
    char ch[210];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",ch);
        for(int i=0;i<strlen(ch)/2;i+=2)
        {
            printf("%c",ch[i]);
        }
        printf("\n");
    }
    return 0;
}
