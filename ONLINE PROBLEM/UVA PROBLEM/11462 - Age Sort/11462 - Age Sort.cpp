#include<bits/stdc++.h>
using namespace std;
long long n,a[2000009];
int main()
{
    while(scanf("%lld",&n) && n)
    {

        for(long long i=0;i<n;i++)
            scanf("%lld",a+i);
        sort(a,a+n);
        for(long long i=0;i<n;i++)
        {
            printf("%lld",a[i]);
            if(i<n-1)
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
