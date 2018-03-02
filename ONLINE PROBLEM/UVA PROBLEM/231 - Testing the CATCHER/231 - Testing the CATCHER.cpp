#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t=0,n,k;
    int a[1001];
    int dp[1001];
    while(scanf("%d",&n)&& n!=-1)
    {
        a[0]=n;
        k=1;
        while(scanf("%d",&n)&& n!=-1)
        {
            a[k++]=n;
        }
        fill(dp,dp+k,1);
        for(int i=0; i<k; i++)
        {
            for(int j=0; j<i; j++)
            {
                if(a[i]<a[j] && dp[i]<dp[j]+1)
                {
                    dp[i]=dp[j]+1;
                }

            }
        }
        if(t)
            puts("");
        sort(dp,dp+k);
        printf("Test #%d:\n  maximum possible interceptions: %d\n",++t,dp[k-1]);

    }
    return 0;
}
