#include<bits/stdc++.h>
#define inf 99999999
using namespace std;

int main()
{
    //freopen("input.txt","r",stdin);
    int c=1,n,m,q,u,v,w,tcost;
    int total,x,dis[90][90],cost[90][90];
    while(scanf("%d%d%d",&n,&m,&q)&&(n!=0 || m!=0 || q!=0))
    {
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                dis[i][j]=inf;
                cost[i][j]=inf;
            }
            dis[i][i]=0;
        }

        for(int i=1;i<=n;i++){
            scanf("%d",&x);
            cost[i][i]=x;
        }

        while(m--){
            scanf("%d%d%d",&u,&v,&w);
            dis[u][v]=dis[v][u]=w;
            cost[u][v]=cost[v][u]=max(cost[u][u],cost[v][v]);
        }

        for(int k=1;k<=n;k++){
            for(int i=1;i<=n;i++){
                for(int j=1;j<=n;j++){
                    total=dis[i][k]+dis[k][j];
                    tcost=max(cost[i][k],cost[k][j]);
                    if(dis[i][j]+cost[i][j]>total+tcost){
                        dis[i][j]=total;
                        cost[i][j]=tcost;
                    }
                }
            }
        }

        for(int k=1;k<=n;k++){
            for(int i=1;i<=n;i++){
                for(int j=1;j<=n;j++){
                    total=dis[i][k]+dis[k][j];
                    tcost=max(cost[i][k],cost[k][j]);
                    if(dis[i][j]+cost[i][j]>total+tcost){
                        dis[i][j]=total;
                        cost[i][j]=tcost;
                    }
                }
            }
        }

        if(c!=1)
            printf("\n");
        printf("Case #%d\n",c++);
        while(q--)
        {
            scanf("%d%d",&u,&v);
            if(dis[u][v]>=inf)
                printf("-1\n");
            else
                printf("%d\n",dis[u][v]+cost[u][v]);
        }
    }
    return 0;
}
