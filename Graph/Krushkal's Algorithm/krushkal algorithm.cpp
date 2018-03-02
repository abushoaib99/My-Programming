#include<bits/stdc++.h>
using namespace std;
struct graph {
    long long u, v, w;
    bool operator<(const graph &p) const
    {
        return w < p.w;
    }
};
long long pr[10000];
vector<graph> e;
long long find_set(long long r)
{
    return (pr[r] == r) ? r : find_set(pr[r]);
}
long long mst(long long n)
{
    sort(e.begin(), e.end());

    long long countt = 0, sum = 0;
    for (long long i = 0; i < e.size(); ++i) {
        long long u = find_set(e[i].u);
        long long v = find_set(e[i].v);
        if (u != v) {
            pr[u] = v;
            countt++;
            sum += e[i].w;
            if (countt == n - 1)
                break;
        }
    }
    return sum;
}

int main()
{
    long long n, m;
    scanf("%lld%lld",&n,&m);
    for (long long i = 1; i <= m; ++i) {
        long long u, v, w;
        scanf("%lld%lld%lld",&u,&v,&w);
        graph get;
        get.u = u;
        get.v = v;
        get.w = w;
        e.push_back(get);
        pr[i] = i;
    }
    printf("%lld\n",mst(n));
    return 0;
}
