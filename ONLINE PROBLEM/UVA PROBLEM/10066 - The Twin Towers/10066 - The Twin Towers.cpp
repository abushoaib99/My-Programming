#include<bits/stdc++.h>
using namespace std;
int x[101],y[101];
int lcs(int m, int n)
{
    int L[m+1][n+1];

    for (int i=0; i<=m; i++)
    {
        for (int j=0; j<=n; j++)
        {
            if (i == 0 || j == 0)
                L[i][j] = 0;
            else if (x[i-1] == y[j-1])
                L[i][j] = L[i-1][j-1] + 1;
            else
                L[i][j] = max(L[i-1][j], L[i][j-1]);
        }
    }
    return L[m][n];
}

int main()
{
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    int n,m,c=0;
    while(scanf("%d%d",&n,&m),n+m)
    {
        for(int i=0; i<n; i++)
            scanf("%d",x+i);
        for(int i=0; i<m; i++)
            scanf("%d",y+i);

        printf("Twin Towers #%d\n",++c);
        printf("Number of Tiles : %d\n\n",lcs(n,m));
    }
    return 0;
}

