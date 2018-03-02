#include<bits/stdc++.h>
using namespace std;
int a[2009][2009];
int main()
{
    int n,m,x,y,z;

    while(scanf("%d%d",&n,&m)&& (n+m))
    {
        memset(a,0,sizeof(a));
        for(int i=1;i<=m;i++)
        {
            scanf("%d%d%d",&x,&y,&z);
            if(z==1)
                a[x][y]=1;
            else
                a[x][y]=a[y][x]=1;
        }
        for(int k=1;k<=n;k++)
            for(int i=1;i<=n;i++)
                for(int j=1;j<=n;j++)
                    a[i][j] |=a[i][k]&a[k][j];

        bool b=true;
        for(int i=1;i<=n;i++)
            for(int j=1;j<=n;j++)
                if(i!=j && (!a[i][j]) || (!a[j][i]))
                    b=false;
        b==true ? puts("1"):puts("0");
    }
    return 0;
}
