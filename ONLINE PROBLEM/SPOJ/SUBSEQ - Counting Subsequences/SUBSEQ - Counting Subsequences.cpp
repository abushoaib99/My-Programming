#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t ;
    long long n,sum,r,a;
    scanf("%d",&t);
    while(t--)
    {
        map <long long,long long> m ;
        m.clear();
        m[0]=1 ;
        sum=0,r=0 ;
        scanf("%lld",&n);
        while(n--)
        {
            scanf("%lld",&a);
            sum+=a;
            r+=m[sum-47];
            m[sum]++;
        }
        printf("%lld\n",r);
    }
    return 0;
}
