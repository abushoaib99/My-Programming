#include<bits/stdc++.h>
int main()
{
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    long long n,result;
    while(scanf("%lld",&n),n)
    {
        result = n;
        for(long long i = 2; i * i <= n; ++i)
            if(n % i == 0)
            {
                while(n % i == 0)
                    n /= i;
                result -= result / i;
            }
        if(n > 1)
            result -= result / n;
        printf("%lld\n",result);
    }
    return 0;
}
