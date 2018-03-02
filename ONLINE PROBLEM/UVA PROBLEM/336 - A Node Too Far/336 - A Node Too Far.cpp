#include <bits/stdc++.h>
using namespace std;
map <int,int> visited;

void bfs(int start, map <int,vector<int> > graph)
{
    queue<int> s;
    s.push(start);
    visited[start]=0;
    while (!s.empty())
    {
        int top = s.front();
        s.pop();
        int siz = graph[top].size();
        for(int i=0;i<siz;i++)
        {
            int n =graph[top][i];
            if(!visited.count(n))//I've already been here.
            {
                visited[n]=visited[top]+1; //Number of moves until here + 1
                s.push(n);
            }
        }
     }
}

int main()
{
    //freopen("input.txt","r",stdin);
    int nods,a,b,cases=1;
    while(scanf("%d",&nods) && nods)
    {
        map <int,vector<int> > graph;
        for(int i=0;i<nods;i++)
        {
            scanf("%d%d",&a,&b);
            graph[a].push_back(b);
            graph[b].push_back(a);
        }
        int endd,start;
        while(scanf("%d%d",&start,&endd) && (start!=0 || endd!=0))
        {
            map <int,int>::iterator it;
            visited.clear();
            bfs(start,graph);
            int result = 0;
            for(it=visited.begin();it!=visited.end();++it)
            {
                if(it->second>endd)
                ++result;
            }
            result+=graph.size()-visited.size();
            printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n",cases,result,start,endd);
            cases++;
        }
    }
 return 0;
}
