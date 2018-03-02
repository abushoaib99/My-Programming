#include<bits/stdc++.h>
#define mx 100001
using namespace std;
struct info
{
    long long prop, sum;
}tree[mx*3];
void update(long long node, long long b, long long e, long long i, long long j, long long x)
{
    if (i > e || j < b)
        return;
    if (b >= i && e <= j)
    {
        tree[node].sum += ((e - b + 1) * x);
        tree[node].prop += x;
        return;
    }

    long long Left = node << 1;
    long long Right = (node << 1) + 1;
    long long mid = (b + e) >> 1;
    update(Left, b, mid, i, j, x);
    update(Right, mid + 1, e, i, j, x);
    tree[node].sum = tree[Left].sum + tree[Right].sum + (e - b + 1) * tree[node].prop;
}

long long query(long long node, long long b, long long e, long long i,long long j, long long carry = 0)
{
    if (i > e || j < b)
        return 0;
    if (b >= i and e <= j)
        return tree[node].sum + carry * (e - b + 1);

    long long Left = node << 1;
    long long Right = (node << 1) + 1;
    long long mid = (b + e) >> 1;
    long long p1 = query(Left, b, mid, i, j, carry + tree[node].prop);
    long long p2 = query(Right, mid + 1, e, i, j, carry + tree[node].prop);
    return p1 + p2;
}

int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        long long n,a;
        scanf("%lld%lld",&n,&a);
        memset(tree,0,sizeof tree);
        for(long long j=0;j<a;j++)
        {
            long long num;
            scanf("%lld",&num);
            if(num==0)
            {
                long long p,q,v;
                scanf("%lld%lld%lld",&p,&q,&v);
                update(1,0,n-1,p-1,q-1,v);
            }
            else
            {
                long long p,q;
                scanf("%lld%lld",&p,&q);
                printf("%lld\n",query(1,0,n-1,p-1, q-1));
            }
        }
    }
    return 0;
}
