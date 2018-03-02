#include<bits/stdc++.h>
using namespace std;
int dp[1<<15+2];
int w[15][15];
int n;
int Set(int N,int pos)
{
    return N=(N|(1<<pos));
}
bool check(int N,int pos)
{
    return (N&(1<<pos));
}

int call(int mask)
{
    int price,ret;
    if(mask==(1<<n)-1)
        return 0;
    if(dp[mask]!=-1)
        return dp[mask];
    int mn=1<<28;
    for(int i=0;i<n;i++)
    {
        if(check(mask,i)==0)
        {
            price=w[i][i];
            for(int j=0;j<n;j++)
            {
                if(i!=j and check(mask,j)!=0)
                    price+=w[i][j];
            }
            ret=price+call(Set(mask,i));
            mn=min(mn,ret);
        }
    }
    return dp[mask]=mn;
}

int main()
{
    int t;
    scanf("%d",&t);
    for(int c=1;c<=t;c++)
    {
        memset(dp,-1,sizeof dp);
        scanf("%d",&n);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                scanf("%d",&w[i][j]);
            }
        }
        printf("Case %d: %d\n",c,call(0));
    }
    return 0;
}
