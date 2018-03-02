#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int> >edge[30009];
//map<int,vector<pair<int,int> > > edge;
int dis[30009];
bool visited[30009];
void bfs(int source)
{
    visited[source]=true;
    dis[source]=0;
    queue<int>q;
    q.push(source);
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        for(int i=0;i<edge[u].size();i++)
        {
            int v=edge[u][i].first;
            int w=edge[u][i].second;
            if(!visited[v])
            {
                visited[v]=true;
                dis[v]=dis[u]+w;
                q.push(v);
            }
        }
    }
}

int main()
{
    int t,n,u,v,w,s;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        scanf("%d",&n);
        for(int j=1;j<n;j++)
        {
            scanf("%d%d%d",&u,&v,&w);
            edge[u].push_back(make_pair(v,w));
            edge[v].push_back(make_pair(u,w));
        }
        bfs(0);
        for(int i=0;i<n;i++)
        {
            if(dis[0]<=dis[i])
            {
                dis[0]=dis[i];
                s=i;
            }
            visited[i]=false;
        }
        bfs(s);
        sort(dis,dis+n);
        printf("Case %d: %d\n",i,dis[n-1]);
        for(int i=0;i<=n;i++)
        {
            edge[i].clear();
            dis[i]=0;
            visited[i]=false;
        }
    }
    return 0;
}

