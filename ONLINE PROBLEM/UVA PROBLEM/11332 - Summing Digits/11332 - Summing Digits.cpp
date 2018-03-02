#include<bits/stdc++.h>
int main()
{
    long long n;
    int c,c1;
    while(scanf("%lld",&n)&&n!=0)
    {
        c=c1=0;
        while(n)
        {
            c+=n%10;
            n/=10;
        }
        while(c)
        {
            c1+=c%10;
            c/=10;
        }
        while(c1)
        {
            c+=c1%10;
            c1/=10;
        }
        printf("%d\n",c);
    }
    return 0;
}
