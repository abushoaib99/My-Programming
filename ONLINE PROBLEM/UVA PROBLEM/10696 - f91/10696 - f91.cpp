#include<bits/stdc++.h>
int main()
{
    long long n;
    while(scanf("%lld",&n)&&n)
    {
        n>100 ? printf("f91(%lld) = %lld\n",n,n-10) : printf("f91(%lld) = 91\n",n);
    }
    return 0;
}
