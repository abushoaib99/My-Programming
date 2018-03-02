#include<bits/stdc++.h>
using namespace std;
long long pr[1000000];

vector<pair<long long,pair<long long,long long> > > e;

long long find_set(long long r)
{
    return (pr[r] == r) ? r : find_set(pr[r]);
}

long long mst(long long n)
{
    sort(e.begin(), e.end());

    long long sum = 0;

    vector<pair<long long,pair<long long,long long> > >::iterator it;

    for (it = e.begin(); it !=e.end(); ++it)
    {
        long long u = find_set(it->second.first);
        long long v = find_set(it->second.second);
        if (u != v)
        {
            pr[u] = v;
            sum += it->first;
        }
    }
    return sum;
}

int main()
{
    //freopen("input.txt","r",stdin);
    long long n, m,totalcost;
    long long u, v, w;
    bool f=true;
    while(scanf("%lld",&n)!=EOF)
    {
        e.clear();
        totalcost=0;
        for (long long i = 1; i <= n-1; ++i)
        {
            scanf("%lld%lld%lld",&u,&v,&w);
            totalcost+=w;
            pr[i] = i;
        }
        pr[n]=n;
        scanf("%lld",&m);
        for(long long i=1;i<=m;i++)
        {
            scanf("%lld%lld%lld",&u,&v,&w);
            e.push_back(make_pair(w,make_pair(u,v)));
        }
        scanf("%lld",&m);
        for(long long i=1;i<=m;i++)
        {
            scanf("%lld%lld%lld",&u,&v,&w);
            e.push_back(make_pair(w,make_pair(u,v)));
        }
        if(!f)
            printf("\n");
        f=false;
        printf("%lld\n%lld\n",totalcost,mst(n));
    }
    return 0;
}


