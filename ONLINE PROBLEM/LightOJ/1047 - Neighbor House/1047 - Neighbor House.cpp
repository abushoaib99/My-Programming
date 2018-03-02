#include<bits/stdc++.h>
using namespace std;
int R[21],G[21],B[21];
int dp[21][4];
int main()
{
    int t,n,ans;
    scanf("%d",&t);
    for(int c=1;c<=t;c++)
    {
        fill(dp[0],dp[21],0);
        scanf("%d",&n);
        for(int i=1;i<=n;i++)
        {
            scanf("%d%d%d",&R[i],&G[i],&B[i]);
            dp[i][0]=min(dp[i-1][1],dp[i-1][2])+R[i];
            dp[i][1]=min(dp[i-1][0],dp[i-1][2])+G[i];
            dp[i][2]=min(dp[i-1][0],dp[i-1][1])+B[i];
        }
        ans=min(dp[n][0],min(dp[n][1],dp[n][2]));
        printf("Case %d: %d\n",c,ans);
    }
    return 0;
}
