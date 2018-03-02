#include<bits/stdc++.h>
using namespace std;
bool visited[100];
int dis[100];
vector<int>g[100];
void DFS(int v,int dep)
{
    visited[v]=true;
    dis[v]=dep;
    for(int i=0;i<g[v].size();i++)
    {
        if(!visited[g[v][i]])
            DFS(g[v][i],dep+1);
    }
    return;
}

int main()
{
    freopen("input.txt","r",stdin);
    int n,e,u,v,source;
    scanf("%d%d",&n,&e);
    while(e--)
    {
        scanf("%d%d",&u,&v);
        g[u].push_back(v);
    }

    scanf("%d",&source);

    DFS(source,0);

    for(int i=1;i<=n;i++)
        printf("%d ---> %d = %d\n",source,i,dis[i]);
}
