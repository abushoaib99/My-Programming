#include<bits/stdc++.h>
using namespace std;
vector<int>vec[110];
int g[110][110];
int parent[110];
int s,t,c;
bool bfs()
{
    bool visite[110];
    int u,v;
    memset(visite,false,sizeof visite);
    queue<int>q;
    q.push(s);
    visite[s]=true;
    while(!q.empty())
    {
        //cout<<"zzz"<<endl;
        u=q.front();
        q.pop();
        for(int i=0;i<vec[u].size();i++)
        {
            v=vec[u][i];
            if(g[u][v]>0 && visite[v]==false)
            {
                visite[v]=true;
                parent[v]=u;
                q.push(v);
            }
        }
    }
    return visite[t]==true;
}

int main()
{
    int test,u,v,w,flow,n;
    int ans;
    scanf("%d",&test);
    for(int i=1; i<=test; i++)
    {
        scanf("%d%d%d%d",&n,&s,&t,&c);
        memset(g,0,sizeof g);
        ans=0;
        while(c--)
        {
            scanf("%d%d%d",&u,&v,&w);
            g[u][v]+=w;
            g[v][u]+=w;
            vec[u].push_back(v);
            vec[v].push_back(u);
        }

        while(bfs())
        {
            flow=INT_MAX;
            v=t;
            while(v!=s)
            {
                u=parent[v];
                flow=min(flow,g[u][v]);
                v=parent[v];
            }
            v=t;
            while(v!=s)
            {
                u=parent[v];
                g[u][v]-=flow;
                g[v][u]+=flow;
                v=parent[v];
            }
            ans+=flow;
        }
        printf("Case %d: %d\n",i,ans);

    }
    return 0;
}
