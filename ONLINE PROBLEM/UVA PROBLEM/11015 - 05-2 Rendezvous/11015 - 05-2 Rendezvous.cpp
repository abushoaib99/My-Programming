#include<bits/stdc++.h>
#define INF 9999999
using namespace std;
int main()
{
    int c=1,n,m,u,v,w;
    char name[30][15];
    int arr[30][30];
    while(scanf("%d%d",&n,&m) && n+m)
    {
        getchar();
        for(int i=1;i<=n;i++)
            scanf("%s",name[i]);
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                arr[i][j]=INF;
            }
            arr[i][i]=0;
        }
        for(int i=1;i<=m;i++)
        {
            scanf("%d%d%d",&u,&v,&w);
            arr[u][v]=arr[v][u]=w;
        }
        for(int k=1;k<=n;k++)
            for(int i=1;i<=n;i++)
                for(int j=1;j<=n;j++)
                    arr[i][j]=min(arr[i][j],arr[i][k]+arr[k][j]);

        int mini=INF,cost,k;
        for(int i=1;i<=n;i++)
        {
            cost=0;
            for(int j=1;j<=n;j++)
                cost+=arr[i][j];
            if(cost<mini)
            {
                mini=cost;
                k=i;
            }
        }
        printf("Case #%d : %s\n",c++,name[k]);
    }
    return 0;
}
