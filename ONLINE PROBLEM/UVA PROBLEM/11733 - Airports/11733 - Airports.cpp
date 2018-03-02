#include<bits/stdc++.h>
using namespace std;
vector<int>pr;
int n1;
vector<pair<int,pair<int,int> > > e;

int find_set(int r)
{
    return (pr[r] == r) ? r : find_set(pr[r]);
}

int mst(int n)
{
    sort(e.begin(), e.end());

    int sum = 0;

    vector<pair<int,pair<int,int> > >::iterator it;

    for (it = e.begin(); it !=e.end(); ++it)
    {
        int u = find_set(it->second.first);
        int v = find_set(it->second.second);
        if (u != v)
        {
            --n1;
            pr[u] = v;
            sum += it->first;
        }
    }
    return sum;
}

int main()
{
    //freopen("input.txt","r",stdin);
    int n, m,t,cost;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        e.clear();
        pr.clear();
        scanf("%d%d%d",&n,&m,&cost);
        n1=n;
        for (int j=0;j<m;++j)
        {
            int u, v, w;
            scanf("%d%d%d",&u,&v,&w);
            if(w<cost)
            e.push_back(make_pair(w,make_pair(u,v)));
        }
        for(int k=0;k<=n;k++)
        {
            pr.push_back(k);
        }
        int total=mst(n);
        printf("Case #%d: %d %d\n",i,(cost*n1)+total,n1);
    }
    return 0;
}

