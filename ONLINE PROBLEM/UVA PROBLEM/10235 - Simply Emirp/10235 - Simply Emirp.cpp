#include<bits/stdc++.h>
using namespace std;
bool prime(long long n)
{
    long long p=sqrt(n);
    for(long long i=2;i<=p;++i)
    {
        if(n%i==0)
            return false;
    }
    return true;
}
long long rev(long long n)
{
    long long r=0;
    while(n)
    {
        r=r*10+(n%10);
        n/=10;
    }
    return r;
}
int main()
{
    long long n,r;
    while(scanf("%lld",&n)!=EOF)
    {
        if(!prime(n))
            printf("%lld is not prime.\n",n);
        else
        {
            r=rev(n);
            if(r!=n && prime(r))
                printf("%lld is emirp.\n",n);
            else
                printf("%lld is prime.\n",n);
        }
    }
    return 0;
}
