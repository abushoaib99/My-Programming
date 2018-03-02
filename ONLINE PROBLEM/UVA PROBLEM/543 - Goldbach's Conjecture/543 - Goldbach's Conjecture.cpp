#include<bits/stdc++.h>
using namespace std;

bool prime(unsigned long long n)
{
    unsigned long long p=sqrt(n);
    for(unsigned long long i=2;i<=p;++i)
    {
        if(n%i==0)
            return false;
    }
    return true;
}
int main()
{
    freopen("input.txt","r",stdin);
    unsigned long long n,i;
    int t;
    while(scanf("%llu",&n) && n!=0)
    {
        t=0;
        for(i=3;i<=n;i=i+2)
        {
            if(i>n-i)
                break;
            if(prime(i)&&prime(n-i))
            {
                t=1;
                break;
            }
        }
        t==1?printf("%llu = %llu + %llu\n",n,i,n-i):printf("Goldbach's conjecture is wrong.\n");
    }
    return 0;
}
