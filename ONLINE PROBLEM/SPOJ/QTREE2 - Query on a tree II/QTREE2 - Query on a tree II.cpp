#include <bits/stdc++.h>
using namespace std;

typedef pair< int, int > pii;
vector< pii > G[10009];
int root[10009][14], dist[10009], pi[10009], lvl[10009];

void dfs(int par, int u, int depth)
{
	int sz = G[u].size(), i, v, w;
	lvl[u] = depth;
	for(i = 0; i < sz; i++)
    {
		v = G[u][i].first;
		w = G[u][i].second;
		if(v != par)
        {
			dist[v] = dist[u] + w;
			pi[v] = u;
			dfs(u, v, depth+1);
		}
	}
}

void calcRoot(int n)
{
	int i, j;

	memset(root, -1, sizeof root);

	for(i = 1; i <= n; i++)
        root[i][0] = pi[i];

	for(j = 1; 1<<j < n; j++)
		for(i = 1; i <= n; i++)
			if(root[i][j-1]!=-1)
				root[i][j] = root[root[i][j-1]][j-1];
}

int lca(int p, int q)
{

	int i, log,next;
	if(lvl[p] < lvl[q])
        swap(p, q);
        log=log2(lvl[p]);
        for(i = log; i >= 0; i--)
		if(lvl[p] - (1<<i) >= lvl[q])
			p = root[p][i];

        if(p == q)
            return p;

        for(i = log; i >= 0; i--)
		if(root[p][i]!=-1 && root[p][i]!=root[q][i])
			p = root[p][i], q = root[q][i];

	return pi[p];
}

int findd(int p, int t)
{
    int i, log,next;
    log=log2(lvl[p]);
	for(i = log; i >= 0; i--)
		if(lvl[p] - (1<<i) >= t)
			p = root[p][i];
	return p;
}

int main()
{
	int test, n, i, u, v, w, a,b, k;
	string query;
	scanf("%d", &test);
	while(test--)
    {
		scanf("%d", &n);
		for(i = 1; i <= n; i++)
		{
			G[i].clear();
			dist[i] = 0;
			pi[i] = -1;
		}
		for(i = 1; i < n; i++)
		{
			scanf("%d%d%d", &u, &v, &w);
			G[u].push_back(pii(v, w));
			G[v].push_back(pii(u, w));
		}
		dfs(-1, 1, 0);
		calcRoot(n);
		while(cin>>query && query!="DONE")
        {
            scanf("%d%d", &a, &b);
			u = lca(a, b);
			if(query=="DIST")
                printf("%d\n", dist[a]+dist[b]-2*dist[u]);
			else if(query=="KTH")
			{
				scanf("%d", &k);
				if(lvl[a]-lvl[u]+1 >= k)
                    v = findd(a, lvl[b]-k+1);
                else
                    v = findd(b, 2*lvl[u]+k-lvl[a]-1);

				printf("%d\n", v);
			}
		}
		printf("\n");
	}
	return 0;
}
