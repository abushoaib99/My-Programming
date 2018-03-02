#include<bits/stdc++.h>
using namespace std;
vector<int>g[102];
double sum;
void bfs1(int source)
{
    bool visited[102];
    int distance[102];
    memset(visited,false,sizeof visited);
    queue<int>q;
    q.push(source);
    visited[source]=1;
    distance[source]=0;
    int u,v;
    while(!q.empty())
    {
        u=q.front();
        q.pop();
        for(int i=0;i<g[u].size();i++)
        {
            v=g[u][i];
            if(!visited[v])
            {
                visited[v]=true;
                q.push(v);
                distance[v]=distance[u]+1;
                sum+=distance[v];
            }
        }
    }
}
void bfs(int source)
{
    bfs1(source);
    bool visited[102];
    int distance[102];
    memset(visited,false,sizeof visited);
    queue<int>q;
    q.push(source);
    visited[source]=1;
    distance[source]=0;
    int u,v;
    while(!q.empty())
    {
        u=q.front();
        q.pop();
        for(int i=0;i<g[u].size();i++)
        {
            v=g[u][i];
            if(!visited[v])
            {
                visited[v]=true;
                q.push(v);
                bfs1(v);
            }
        }
    }
}
int main()
{
    int a,b,n,c=0,j=1;
    while(scanf("%d%d",&a,&b) && a+b)
    {
        while(true)
        {

            g[a].push_back(b);
            scanf("%d%d",&a,&b);
            if(a+b==0)
                break;
            n=a;
            c++;
        }
        bfs(n);
        printf("Case %d: average length between pages = %.3f clicks\n",j++,sum/(c*(c-1)));
        for(int i=0;i<=c;i++)
            g[i].clear();
        c=0,sum=0;
    }
    return 0;
}

