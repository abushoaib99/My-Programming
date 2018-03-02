#include<bits/stdc++.h>
using namespace std;
long long int weight[20][20],visited[20],cost[20];
long long int v,e;

void creategraph()
{
    int a,b;
    long long int w;
    scanf("%lld%lld",&v,&e);
    fill(cost,cost+20,9999999);
    for(int i=1;i<=e;i++)
    {
        scanf("%d%d%lld",&a,&b,&w);
        weight[a][b]=weight[b][a]=w;
    }
}

void prim()
{
    long long current,totalvisited,mincost;
    current=1;cost[1]=0;
    totalvisited=1;
    visited[current]=1;
    while(totalvisited!=v)
    {
        for(int i=1;i<=v;i++)
        {
            if(weight[current][i]!=0 && cost[i]>weight[current][i] && visited[i]==0)
                cost[i]=weight[current][i];
        }
        mincost=9999999;
        for(int i=1;i<=v;i++)
        {
            if(visited[i]==0 && cost[i]<mincost)
            {
                mincost=cost[i];
                current=i;
            }
        }
        visited[current]=1;
        totalvisited++;
    }
    mincost=0;
    for(int i=1;i<=v;i++)
    {
        mincost+=cost[i];
    }

    printf("%lld\n",mincost);
}

int main()
{
    //freopen("input.txt","r",stdin);
    creategraph();
    prim();
    return 0;
}
