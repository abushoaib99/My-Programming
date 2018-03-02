#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,arr[101][101],n,j=1;
    int MAX=99999;
    while(scanf("%d%d",&a,&b) && a+b)
    {
        for(int i=0;i<101;i++)
        {
            for(int j=0;j<101;j++)
            {
                arr[i][j]=MAX;
            }
            arr[i][i]=0;
        }
        n=0;
        while(true)
        {
            arr[a][b]=1;
            scanf("%d%d",&a,&b);
            if(a+b==0)
            break;
            if(a>n)
                n=a;
            if(b>n)
                n=b;
        }
    for(int k=1;k<=n;k++)
        for(int i=1;i<=n;i++)
            for(int j=1;j<=n;j++)
                arr[i][j]=min(arr[i][j],arr[i][k]+arr[k][j]);

    double sum=0.0,cnt=0.0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(arr[i][j]<MAX && arr[i][j])
            {
                sum+=arr[i][j];
                cnt++;
            }
        }

    }
    printf("Case %d: average length between pages = %.3f clicks\n",j++,sum/cnt);
    }
    return 0;
}
