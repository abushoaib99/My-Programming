#include<bits/stdc++.h>
#define F first
#define S second
using namespace std;
long long pr[100009];

pair<long long,pair<long long,long long> > e[100009];

long long find_set(long long r)
{
    return (pr[r] == r) ? r : find_set(pr[r]);
}

long long mst(long long n)
{
    sort(e,e+n);

    long long sum = 0;

    for (int i=0;i<n;i++)
    {
        long long u = find_set(e[i].S.F);
        long long v = find_set(e[i].S.S);
        if (u != v)
        {
            pr[u] = v;
            sum += e[i].first;
        }
    }
    return sum;
}

int main()
{
    //freopen("input.txt","r",stdin);
    long long n, m;
    scanf("%lld%lld",&n,&m);
    for (long long i = 0; i < m; ++i) {
        long long u, v, w;
        scanf("%lld%lld%lld",&e[i].S.F,&e[i].S.S,&e[i].F);
        pr[i] = i;
    }
    printf("%lld\n",mst(m));
    return 0;
}

