#include <bits/stdc++.h>
using namespace std;
int main()
{
    int b,p,m,ans;

    while(scanf("%d\n%d\n%d",&b,&p,&m)!=EOF)
    {
        ans=1;
        b%=m;
        while(p)
        {
            if(p&1)
                ans=((ans%m)*(b%m)%m);
            b=((b%m)*(b%m)%m);
            p>>=1;
        }
        printf("%d\n",ans);
    }
    return 0;
}

