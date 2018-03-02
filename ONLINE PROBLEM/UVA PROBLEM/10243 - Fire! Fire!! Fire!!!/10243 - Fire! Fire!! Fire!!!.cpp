#include<bits/stdc++.h>
using namespace std;
int dp[1009][5];
map<int,int>par;
map<int,vector<int> >edge;
int f(int u,int isGuard)
{
    if(edge[u].size()==0)
        return 0;
    if(dp[u][isGuard]!=-1)
        return dp[u][isGuard];
    int sum=0;
    for(int i=0;i<edge[u].size();i++)
    {
        int v=edge[u][i];
        if(v!=par[u])
        {
            par[v]=u;
            if(!isGuard)
                sum+=f(v,1);
            else
                sum+=min(f(v,1),f(v,0));
        }
    }
    return dp[u][isGuard]=sum+isGuard;
}

int main()
{
    int N,n,a;
    while(scanf("%d",&N),N)
    {
        memset(dp,-1,sizeof dp);
        for(int i=1;i<=N;i++)
        {
            scanf("%d",&n);
            while(n--)
            {
                scanf("%d",&a);
                edge[i].push_back(a);
            }
        }
        int ans=max(1,min(f(1,1),f(1,0)));
        printf("%d\n",ans);
        edge.clear();
        par.clear();
    }
    return 0;
}
