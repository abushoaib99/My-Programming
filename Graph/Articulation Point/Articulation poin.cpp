#include <bits/stdc++.h>
using namespace std;
const int MXSIZE = 1e6+6;

int parent [MXSIZE];
int child  [MXSIZE];
int low    [MXSIZE];
int tym    [MXSIZE];
bool seen  [MXSIZE];
bool is_cut[MXSIZE];

vector <vector <int> > adj (MXSIZE); //adjancy graph

void dfs(int s)
{
    /* static variable gets declared only
       once till the program runs */
    static int c=0;
    int curr;
    seen[s]=true;   // mark s as visited

    low[s]=tym[s]=c++; // first assigns and then increment c.
// checking all children of s
    for(int i=0; i<adj[s].size(); i++)
    {
        curr = adj[s][i];

        if(curr==parent[s])
            continue;

        // do nothing if curr is its parent
        if(!seen[curr])
        {
            child[s]++; // one more independent child of s
            parent[curr]=s;
            dfs(curr);


            /* the low time of the oldest ancestor
              reachable from both */
            low[s] = min(low[s] , low[curr]);
            /* if curr has greater or equal
               low time than visited time of s then if we cut s then
               curr will get disconnected from the graph*/
            if(tym[s]<=low[curr] )
            {
                is_cut[s]=true;
            }
        }
        else
        {
            /* here instead of low[curr] I used
               tym[curr]*/
            low[s]= min(low[s],tym[curr]);
        }


    }

}

int main()
{
    int n,m,a,b;
    cin>>n>>m;  // no. of vertices and edges

    for(int i=1; i<=m; i++)
    {
        // undirected edge between a and b
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    parent[1]=-1;
    dfs(1);

    /* the vertex from where we started dfs
       must have at least two independent children
       otherwise it is not a cut vertex  */
    is_cut[1]= child[1]>1 ? true : false;


    for(int i=1; i<=n; i++)
    {
        if(is_cut[i])
            cout<<i<<" is cut vertex"<<endl;
    }

    return 0;
}
