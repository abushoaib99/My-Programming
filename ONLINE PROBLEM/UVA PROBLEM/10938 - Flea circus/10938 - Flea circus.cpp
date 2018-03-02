#include<bits/stdc++.h>
#define MAX  5009
using namespace std;

vector < int > g[MAX];
int T[MAX],  L[MAX];
bool color[MAX];
int M[MAX][13];
int N,E, Q;
void dfs(int from,int u,int dep)
{
    L[u]=dep;
    T[u]=from;
    int siz=g[u].size();
    for(int i=0; i<siz; i++)
    {
        int v=g[u][i];
        if(v!=from)
        {
            dfs(u,v,dep+1);
        }
    }

}

void lca_init()
{
    memset(M, -1, sizeof M);
    for(int i = 1; i <= N; i++)
        M[i][0] = T[i];

    for(int j = 1; (1 << j) < N; j++)
        for(int i = 1; i <= N; i++)
            if(M[i][j-1] != -1)
                M[i][j] = M [M[i][j-1]][j-1];
}

int LCA(int p, int q)
{
    if(L[p] < L[q])
        swap(p, q);
    int lg = log2(L[p]);
    for(int i = lg; i >= 0; i--)
        if(L[p] - (1 << i) >= L[q])
            p = M[p][i];

    if( p == q )
        return p;
    for(int i = lg; i >= 0; i--)
        if(M[p][i] != -1 && M[p][i] != M[q][i])
        {
            p = M[p][i];
            q = M[q][i];
        }
    return T[p];
}

int kthNode(int p, int level)
{
    int lg = log2(L[p]);
    for(int i = lg; i >= 0; i--)
        if(L[p] - (1 << i) >= level)
            p = M[p][i];
    return p;
}
int main()
{
    int st, en, lca, ans;
    while(scanf("%d", &N) && N)
    {
        E = N - 1;
        for(int  i = 1; i <= E; i++)
        {
            scanf("%d %d", &st, &en);
            g[st].push_back(en);
            g[en].push_back(st);
        }
        memset(color, false, sizeof color);
        L[1] = 0;
        memset(T, -1, sizeof T);
        dfs(-1,1,0);
        lca_init();
        scanf("%d", &Q);
        while(Q--)
        {
            scanf("%d %d", &st, &en);
            lca = LCA(st, en);
            int dist = L[en] + L[st] - 2*L[lca];
            if(L[st] > L[en])
                ans = kthNode(st, L[st] -  dist/2 );
            else
                ans = kthNode(en, L[en] - dist/2 );
            if(dist&1)
            {
                if(ans < T[ans])
                    printf("The fleas jump forever between %d and %d.\n", ans, T[ans]);
                else
                    printf("The fleas jump forever between %d and %d.\n", T[ans], ans);
            }
            else
                printf("The fleas meet at %d.\n",ans);
        }
        for(int i = 1; i <= N; i++)
            g[i].clear();
    }
    return 0;
}
