#include<bits/stdc++.h>
using namespace std;
int a[201][201];
int dp[201][201];
int n;
int call(int i,int j)
{
    int ret,m;
    m=(n*2)-1;
    if(i>=0 && i<m && j>=0 && j<m)
    {
        if(dp[i][j]!=-1)
            return dp[i][j];
        ret=-1;
        ret=max(ret,call(i+1,j)+a[i][j]);
        if(i>=n-1)
            ret=max(ret,call(i+1,j-1)+a[i][j]);
        else if(i<n-1)
            ret=max(ret,call(i+1,j+1)+a[i][j]);
        return dp[i][j]=ret;
    }
    else
        return 0;
}

int main()
{

    int t;
    scanf("%d",&t);
    for(int c=1; c<=t; c++)
    {
        scanf("%d",&n);
        memset(a,0,sizeof a);
        memset(dp,-1,sizeof dp);
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<=i; j++)
                scanf("%d",&a[i][j]);
        }
        for(int i=n,k=2; i<(n*2); i++,k++)
        {
            for(int j=0; j<=n-k; j++)
                scanf("%d",&a[i][j]);
        }
        printf("Case %d: %d\n",c,call(0,0));
    }
    return 0;
}
