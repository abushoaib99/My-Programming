#include<bits/stdc++.h>
#define INF 99999999
using namespace std;
int a[1000009];
int v[1000009];
int n,m,k;
inline void init()
{
    a[1]=1,a[2]=2,a[3]=3;
    for(int i=4;i<=n;i++)
        a[i]=((a[i-1]+a[i-2]+a[i-3])%m)+1;
}
int main()
{
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    int t;
    int ans,x,r,cnt,pos;
    scanf("%d",&t);
    for(int c=1;c<=t;c++)
    {
        scanf("%d%d%d",&n,&m,&k);
        init();
        memset(v,0,sizeof v);
        ans=INF,pos=1,cnt=0;
        for(int i=1;i<=n;i++)
        {
            x=a[i];
            v[x]++;
            if(v[x]==1 && x<=k)
                cnt++;
            while(v[a[pos]]>1 || a[pos]>k)
            {
                v[a[pos]]--;
                ++pos;
            }
            if(cnt==k)
                ans=min(ans,i-pos+1);
        }
        ans==INF ? printf("Case %d: sequence nai\n",c):printf("Case %d: %d\n",c,ans);
    }
    return 0;
}
