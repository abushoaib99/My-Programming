#include<bits/stdc++.h>
using namespace std;
long long  bigmod(long long a ,long long p,long long m)
{
    long long c;
    if(p==0)
        return 1%m;
    int x=bigmod(a,p/2,m);
    x=(x*x)%m;
    if(p&1)
        x=(x*a)%m;
    return x;
}
int main()
{
    long long a,p,m,n;
    while(scanf("%lld\n%lld\n%lld",&a,&p,&m)!=EOF)
    {
        printf("%lld\n",bigmod(a,p,m));
    }
    return 0;
}


