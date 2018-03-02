#include<bits/stdc++.h>
using namespace std;
vector<int > adj[1000];//Adjency List Representation
vector<int> adj_rev[1000];
bool visit[1000];
stack <int > mystack;

void dfs_order(int s)
{
    visit[s]=true;
    for(int i=0; i<adj[s].size(); ++i)
        if(visit[adj[s][i]]==false)
            dfs_order(adj[s][i]);
    mystack.push(s);
    return;
}
void dfs(int s)
{
    visit[s]=true;
    printf("%d ",s);
    for(int i=0; i<adj_rev[s].size(); ++i)
        if(visit[adj_rev[s][i]]==false)
            dfs(adj_rev[s][i]);
    return;
}
int main()
{
    int node,edge,x,y,c=0;
    scanf("%d%d",&node,&edge);
    fill(visit,visit+1000,false);
    for(int i=0; i<edge; i++)
    {
        scanf("%d%d",&x,&y);
        adj[x].push_back(y);
        adj_rev[y].push_back(x);//Reverse of given graph
    }

    for(int i=1; i<=node; i++)
        if(visit[i]==false)
            dfs_order(i); // vertices in order of completion of the recursive calls.

    fill(visit,visit+1000,false);
    while(!mystack.empty())
    {
        int v=mystack.top();
        mystack.pop();
        if(visit[v]==false)
        {
            dfs(v);
            c++;
            printf("\n");
        }
    }
    printf("Number of Components: %d\n",c);//cout<<"Number of Components :"<<c;
}
