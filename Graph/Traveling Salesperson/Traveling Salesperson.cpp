#include<bits/stdc++.h>
using namespace std;
int a[10][10],visited[10],n,cost;
int least(int c);
void get()
{
    int i,j;
    printf("Enter no of cites: ");
    scanf("%d",&n);
    printf("\nEnter cost Matrix:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n\nThe cost list is :\n\n");
    for(int i=0;i<n;i++)
    {
         printf("\n\n");
         for(int j=0;j<n;j++){
            printf("\t%d",a[i][j]);
        }
    }
}

void mincost(int city)
{
    int i,ncity;
    visited[city]=1;
    printf("%d -->",city+1);
    ncity=least(city);
    if(ncity==999)
    {
        ncity=0;
        printf("%d",ncity+1);
        cost+=a[city][ncity];
        return;
    }
    mincost(ncity);
}

int least(int c)
{
    int nc=999;
    int mini=999,kmin;
    for(int i=0;i<n;i++)
    {
        if((a[c][i]!=0) && (visited[i]==0))
        {
            if(a[c][i]<mini)
            {
                mini=a[i][0]+a[c][i];
                kmin=a[c][i];
                nc=i;
            }
        }
    }
    if(mini!=999)
        cost+=kmin;
    return nc;
}

void put()
{
    printf("\n\nMinimum cost: %d\n",cost);
}

int main()
{
    get();
    printf("\n\nThe Path is:\n\n");
    mincost(0);
    put();
    return 0;
}
