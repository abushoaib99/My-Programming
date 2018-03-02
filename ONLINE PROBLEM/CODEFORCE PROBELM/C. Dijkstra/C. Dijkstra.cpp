#include<bits/stdc++.h>
using namespace std;
#define pi pair<int,int>
#define pb push_back
#define mp make_pair
#define ll long long
#define inf 1000000000000000000

map<int,vector<pi> >g;
priority_queue<int>s;
ll node[100001],dis[100001];

void printpath(int n)
{
    if(n!=1)
        printpath(node[n]);
    printf("%d ",n);
}

int main()
{

   ll n,m,u,v,w,i,j;
   scanf("%lld%lld",&n,&m);
   while(m--)
   {
       scanf("%lld%lld%lld",&u,&v,&w);
       g[u].pb(mp(v,w));
       g[v].pb(mp(u,w));
   }
   s.push(1);
   for(i=1;i<=n;i++){
       dis[i]=inf;
       node[i]=i;
   }
      dis[1]=0;
      while(!s.empty())
      {
          u=s.top();
          s.pop();
          for(i=0;i<g[u].size();i++)
          {
              v=g[u][i].first;
              w=g[u][i].second;
              if(dis[u]+w<dis[v])
              {
                  dis[v]=dis[u]+w;
                  s.push(v);
                  node[v]=u;
              }
          }
      }
 if(dis[n]==inf)
    printf("-1\n");
 else{
    printpath(n);
    printf("\n");
 }
 g.clear();
 return 0;
}
