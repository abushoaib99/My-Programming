#include <bits/stdc++.h>
using namespace std;
#define pi pair<int,int>
#define pb push_back
#define mp make_pair
#define inf 99999999

map<int,vector<pi> >g;


void dijstkra(int n,int source)
{
    int dis[100001];
    for(int i=1;i<=n;i++){
       dis[i]=inf;
    }
    priority_queue<int>s;
    s.push(source);
    dis[source]=0;
    while(!s.empty())
    {
        int u=s.top();
        s.pop();
        for(int i=0;i<g[u].size();i++)
        {
            int v=g[u][i].first;
            int w=g[u][i].second;
            if(dis[v]>dis[u]+w)
            {
                dis[v]=dis[u]+w;
                s.push(v);
            }
        }
    }
    for(int i=1;i<=n;i++){
        cout<<source<<" --> "<<i<<" = "<<dis[i]<<endl;
    }
}
int main()
{
    int n,m,u,v,w;
    scanf("%d%d",&n,&m);
    while(m--)
    {
       scanf("%d%d%d",&u,&v,&w);
       g[u].pb(mp(v,w));
       //g[v].pb(mp(u,w));
    }
    int source;
    cin>>source;
    dijstkra(n,source);
    return 0;
}
