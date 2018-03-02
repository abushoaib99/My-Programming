#include<bits/stdc++.h>
#define mx 100002
using namespace std;
int L[mx]; //লেভেল
int P[mx][22]; //স্পার্স টেবিল
int T[mx]; //প্যারেন্ট
vector<int>g[mx];
void dfs(int from,int u,int dep)
{

    T[u]=from;
    L[u]=dep;
    for(int i=0;i<(int)g[u].size();i++)
    {
        int v=g[u][i];
        if(v==from) continue;
        dfs(u,v,dep+1);
    }
}

int lca_query(int n,int p, int q)
{
      int tmp, log, i,next;
      if (L[p] < L[q])
          swap(p,q);

        log=log2(L[p]);
//      while(1)
//      {
//        next=log+1;
//        if((1<<next)>L[p])
//            break;
//        log++;
//
//      }

        for (i = log; i >= 0; i--)
        {
            if (L[p] - (1 << i) >= L[q])
                p = P[p][i];
        }
      if (p == q)
          return p;

        for (i = log; i >= 0; i--)
        {
        if (P[p][i] != -1 && P[p][i] != P[q][i])
          {
              p = P[p][i], q = P[q][i];
          }
        }
      return T[p];
}

void lca_init(int N)
{
    memset (P,-1,sizeof(P));
    for (int i = 0; i < N; i++)
        P[i][0] = T[i];

      for (int j = 1; 1 << j < N; j++)
         for (int i = 0; i < N; i++)
             if (P[i][j - 1] != -1)
                 P[i][j] = P[P[i][j - 1]][j - 1];


}

int main(void)
{
    int n,a,b,q1,q2,q3;
    scanf("%d",&n);
    int m=n;
    while(n--)
    {
        scanf("%d%d",&a,&b);
        g[a].push_back(b);
    }
	dfs(0, 0, 0);
	lca_init(m+1);
	while(scanf("%d%d",&q2,&q3) && (q2!=0 || q3 !=0))
    {
        printf( "%d\n", lca_query(m,q2,q3));
    }

	return 0;
}
