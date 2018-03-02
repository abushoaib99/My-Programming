#include<bits/stdc++.h>
int main()
{
    int t;
    long long sum=0,n;
    char ch[10];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",ch);
        if(strcmp(ch,"donate")==0)
        {
            scanf("%lld",&n);
            sum+=n;
        }
        else
            printf("%lld\n",sum);
    }
    return 0;
}
