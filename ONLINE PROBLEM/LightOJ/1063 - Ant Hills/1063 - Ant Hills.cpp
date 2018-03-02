#include<bits/stdc++.h>
using namespace std;
int low[20009],parent[20009],child[20009],tym[20009];
bool seen[20009];
bool is_cut[20009];
vector<int>v[20009];
void dfs(int s)
{
    static int c=0;
    int curr;
    seen[s]=true;
    low[s]=tym[s]=c++;
    for(int i=0;i<v[s].size();i++)
    {
        curr=v[s][i];
        if(curr==parent[s])
            continue;
        if(!seen[curr])
        {
            parent[curr]=s;
            child[s]++;
            dfs(curr);

            low[s]=min(low[s],low[curr]);
            if(tym[s]<=low[curr])
                is_cut[s]=true;
        }
        else
            low[s]=min(low[s],tym[curr]);

    }
}
int main()
{
    int t,n,m,a,b,c1;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        scanf("%d%d",&n,&m);
        for(int j=1;j<=m;j++)
        {
            scanf("%d%d",&a,&b);
            v[a].push_back(b);
            v[b].push_back(a);
        }
        parent[1]=-1;
        dfs(1);
        is_cut[1]=child[1]>1 ? true : false;
        c1=0;
        for(int j=1;j<=n;j++)
        {
            if(is_cut[j])
                c1++;

        }
        printf("Case %d: %d\n",i,c1);
        for(int j=0;j<=m+n;j++)
        {
            v[j].clear();
            is_cut[j]=false;
            parent[j]=-1;
            low[j]=0;
            tym[j]=0;
            seen[j]=0;
            child[j]=0;
        }
    }
    return 0;
}
