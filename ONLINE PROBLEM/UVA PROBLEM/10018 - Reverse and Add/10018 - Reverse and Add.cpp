#include<bits/stdc++.h>
long long rev(long long n)
{
    long long r=0;
    while(n>0)
    {
        r=r*10+(n%10);
        n/=10;
    }
    return r;
}
int main()
{
    int t,c;
    long long n,r,sum,sum1;
    scanf("%d",&t);
    while(t--)
    {
        c=1;
        scanf("%lld",&n);
        r=rev(n);
        sum=n+r;
        sum1=rev(sum);
        while(sum!=sum1)
        {
            sum=sum+sum1;
            sum1=rev(sum);
            c++;
        }
        printf("%d %lld\n",c,sum);
    }
    return 0;
}
