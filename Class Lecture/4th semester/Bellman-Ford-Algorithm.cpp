#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,n,v,miin;
    printf("\n\tImplementation of Single Source Shortest Path Algorithm or Bellman Ford Algorithm\n");
    printf("       ===================================================================================");
    printf("\nEnter the number of nodes:");
    scanf("%d",&n);
    int cost[n+5][n+5],dist[n+5][n+5];
    printf("\nEnter the cost adjacency matrix:\n");
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            scanf("%d",&cost[i][j]);
    printf("\nEnter the source node: ");
    scanf("%d",&v);
    for(i=1;i<=n;++i){
        dist[v][i]=cost[v][i];
        dist[i][v]=0;
    }
    for(k=2;k<=n;++k){
        for(j=2;j<=n;++j){
            miin=9999;
            for(i=1;i<=n;++i){
                miin=min(miin,dist[k-1][i]+cost[i][j]);
            }
            dist[k][j]=min(miin,dist[k-1][j]);
        }
    }
    for(i=1;i<=n-1;++i){
        for(j=1;j<=n;++j){
            if(dist[i][j]<999)
                cout<<dist[i][j]<<"\t";
            else
                cout<<"inf\t";
        }
        cout<<endl;
    }
    return 0;
}
