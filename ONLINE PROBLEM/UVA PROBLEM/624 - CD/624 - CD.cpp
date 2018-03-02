#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,v,c;
    map<long long,long long>m;
    while(scanf("%lld%lld",&a,&b) && (a!=0 || b!=0))
    {
        c=0;
        while(a--)
        {
            scanf("%lld",&v);
            m[v]=1;
        }
        while(b--)
        {
            scanf("%lld",&v);
            if(m[v]==1)
                c++;
        }
        m.clear();
        printf("%lld\n",c);
    }
    return 0;
}
