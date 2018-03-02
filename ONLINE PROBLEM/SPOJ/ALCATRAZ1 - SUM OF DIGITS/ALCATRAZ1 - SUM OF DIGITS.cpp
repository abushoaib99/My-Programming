#include<bits/stdc++.h>
int main()
{
    //freopen("input.txt","r",stdin);
    int t,t1,sum;
    char ch[55],c;
    scanf("%d%c",&t,&c);
    while(t--)
    {
        sum=0;
        scanf("%s",ch);
        for(int i=0;i<strlen(ch);i++)
        {
            t1=ch[i]-'0';
            sum+=t1;
        }
        printf("%d\n",sum);
    }
    return 0;
}
