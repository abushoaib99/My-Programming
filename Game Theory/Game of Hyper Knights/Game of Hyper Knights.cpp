#include<bits/stdc++.h>
using namespace std;
int next[6][2]={{-2,1},{1,-2},{-2,-1},{-1,-2},{-3,-1},{-1,-3}};
int g[1001][1001];
int dfs(int x,int y)
{
    int nx,ny;
    bool visit[101]={false};
    if(g[x][y]!=-1)
        return g[x][y];
    nx=ny=0;
    for(int i=0;i<6;i++)
    {
        nx=x+next[i][0];
        ny=y+next[i][1];
        if(nx>=0 && ny>=0)
            visit[dfs(nx,ny)]=true;
    }
    for(int j=0;j<101;j++)
    {
         if(!visit[j])
            return g[x][y]=j;
    }
}

int main()
{
    memset(g,-1,sizeof g);
    int t,n,x,y,ans;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        scanf("%d",&n);
        ans=0;
        while(n--)
        {
            scanf("%d%d",&x,&y);
            ans^=dfs(x,y);
        }
        ans ? printf("Case %d: Alice\n",i) : printf("Case %d: Bob\n",i);
    }
    return 0;
}
