#include<bits/stdc++.h>
using namespace std;
#define mod 100000007
int make,n;
int dp[51][1001];
int coin[51];
int use[51];
int call(int i, int amount)
{
    int ret1,ret2;
    if(i >= n)
    {
        if(amount ==make)
            return 1;
        else
            return 0;
    }

    if(dp[i][amount] != -1)
        return dp[i][amount];

    ret1=0, ret2=0;

    for(int a=1; a<=use[i]; a++)
    {
        if(amount+coin[i]*a <= make)
            ret1 += call(i+1,amount+coin[i]*a)%mod;
        else
            break;
    }
    ret2 = call(i+1,amount)%mod;

    return dp[i][amount] = (ret1 + ret2)%mod;
}
int main()
{

    int t,result;
    scanf("%d",&t);

    for(int i=1; i<=t; i++)
    {
        memset(dp,-1,sizeof(dp));
        scanf("%d%d",&n,&make);
        for(int j=0; j<n; j++)
            scanf("%d",coin+j);
        for(int j=0; j<n; j++)
            scanf("%d",use+j);

        result=call(0,0);
        printf("Case %d: %d\n",i,result%mod);
    }
    return 0;
}
