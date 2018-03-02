#include <bits/stdc++.h>
using namespace std;
#define pi pair<int,int>
map<int,vector<pi> >g;

int dis[109];
int k;
void dijstkra(int n,int source)
{

    for(int i=0; i<=n; i++)
        dis[i]=0;
    priority_queue<int>s;
    s.push(source);
    dis[source]=0;
    while(!s.empty())
    {
        int u=s.top();
        s.pop();
        for(int i=0; i<g[u].size(); i++)
        {
            int v=g[u][i].first;
            int w=g[u][i].second;
            if(dis[v]<dis[u]+w)
            {
                dis[v]=dis[u]+w;
                s.push(v);
            }
        }
    }

    k=1;
    for(int i=1; i<=n; i++)
    {
        if(dis[1]<=dis[i])
        {
            if(dis[1]==dis[i] && dis[1]!=0)
                k=min(k,i);
            else
                k=i;
            dis[1]=dis[i];
        }
    }
}
int main()
{
    //freopen("input.txt","r",stdin);
    int n,u,v,c=0,c1;
    int source;
    while(scanf("%d",&n),n)
    {
        g.clear();
        scanf("%d",&source);
        c1=0;
        while(scanf("%d%d",&u,&v),u+v)
        {
            c1++;
            g[u].push_back(make_pair(v,1));

        }

        if(c1>0)
        {
            dijstkra(n,source);
            if(dis[k]==0)
                printf("Case %d: The longest path from %d has length %d, finishing at %d.\n",++c,source,dis[k],source);
            else
                printf("Case %d: The longest path from %d has length %d, finishing at %d.\n",++c,source,dis[k],k);
        }
        else
            printf("Case %d: The longest path from %d has length 0, finishing at %d.\n",++c,source,source);
        printf("\n");
    }
    return 0;
}

