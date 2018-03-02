#include<bits/stdc++.h>
using namespace std;

bool bicolor(int n,int e)
{
    vector<int> v[n];
    int distance[n+1];
    for(int i=0;i<e;i++)
    {
        int n1,n2;
        scanf("%d%d",&n1,&n2);
        v[n1].push_back(n2);
        v[n2].push_back(n1);
    }
    vector<bool> visited(n,0);
    queue<int> q;
    q.push(0);
    visited[0]=1;
    distance[0]=0;
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        for(int i=0;i<v[u].size();i++)
        {
            int node=v[u][i];
            if(!visited[node])
            {
                visited[node]=true;
                q.push(node);
                distance[node] = distance[u] + 1;
            }
            if(distance[node]==distance[u])
            {
                return false;
            }
        }
    }
    return true;
}

int main()
{
    int n,e;
    while(scanf("%d",&n)&& n!=0)
    {
        scanf("%d",&e);
        bicolor(n,e) ? printf("BICOLORABLE.\n") : printf("NOT BICOLORABLE.\n");
    }
    return 0;
}
