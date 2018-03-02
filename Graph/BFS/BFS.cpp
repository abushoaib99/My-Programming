#include <bits/stdc++.h>
using namespace std;
vector<int>g[10000];
void bfs(int n, int source)
{
    bool visited[n+1];
    int distance[n+1];
    for(int i=1;i<=n;i++)
    {
        visited[i] = false;
        distance[i]=999999;
    }
    queue<int>q;
    q.push(source);
    visited[source] = 1;
    distance[source] = 0;

    while(!q.empty())
    {

        int u=q.front();
        q.pop();
        for(int i=0;i<g[u].size();i++)
        {
            int v=g[u][i];
            if(!visited[v])
            {
                visited[v] = true;
                q.push(v);
                distance[v] = distance[u] + 1;
            }
        }
    }
    for(int i=1;i<=n;i++)
    {
        cout<<source<<" --> "<<i<<" = "<<distance[i]<<endl;
    }
}
int main(){
    //freopen("input.txt", "r", stdin);
    int numNodes, numEdges;
    cin>>numNodes>>numEdges;
    for(int i=1;i<=numEdges;i++){
        int u, v;
        cin>>u>>v;
        g[u].push_back(v);
    }
    int source;
    cin>>source;
    bfs(numNodes,source);

    return 0;
}
