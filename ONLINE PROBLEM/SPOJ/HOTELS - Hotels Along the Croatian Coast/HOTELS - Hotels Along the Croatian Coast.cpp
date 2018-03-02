#include <bits/stdc++.h>
#define ll long long
#define MAX 312345

using namespace std;

ll a[MAX];

int main()
{
    int n,M;
    scanf("%d%d",&n,&M);
    for(int i=0;i<n;i++)
        scanf("%lld",a+i);

    int l=0,r=0;
    ll ans=0,sum=0;

    while(l<n)
    {
        while(r<n && sum+a[r]<=M)
        {
            sum += a[r];
            r++;
        }
        ans = max(ans, sum);
        sum -= a[l];
        l++;
    }

    printf("%lld\n",ans);
    return 0;
}

