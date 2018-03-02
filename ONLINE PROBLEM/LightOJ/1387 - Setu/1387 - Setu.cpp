#include<bits/stdc++.h>
int main()
{
    int t,test;
    long long sum,n;
    char ch[10];
    scanf("%d",&test);
    for(int i=1;i<=test;i++)
    {
        sum=0;
        scanf("%d",&t);
        bool b=true;
        while(t--)
        {
            scanf("%s",ch);
            if(strcmp(ch,"donate")==0)
            {
                scanf("%lld",&n);
                sum+=n;
            }
            else
            {

                if(b)
                printf("Case %d:\n",i);
                printf("%lld\n",sum);
                b=false;
            }

        }
    }

    return 0;
}

