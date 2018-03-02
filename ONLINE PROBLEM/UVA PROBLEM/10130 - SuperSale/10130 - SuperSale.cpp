#include<bits/stdc++.h>
using namespace std;
int n,W,wt[1234],val[1234];
int kanpsack()
{
    int k[n+1][W+1];
    for(int i=0;i<=n;i++)
    {
        for(int w=0;w<=W;w++)
        {
            if(i==0 || w==0)
                k[i][w]=0;
            else if(wt[i-1]<=w)
                k[i][w]=max(val[i-1]+k[i-1][w-wt[i-1]],k[i-1][w]);
            else
                k[i][w]=k[i-1][w];
        }
    }
    return k[n][W];
}

int main()
{
    int t,sum,g,k;
    scanf("%d",&t);
    while(t--)
    {

        scanf("%d",&n);
        for(int i=0;i<n;i++)
            scanf("%d%d",val+i,wt+i);

        scanf("%d",&g);
        sum=0;
        while(g--)
        {
            scanf("%d",&W);
            sum+=kanpsack();
        }
        printf("%d\n",sum);
    }
    return 0;
}
