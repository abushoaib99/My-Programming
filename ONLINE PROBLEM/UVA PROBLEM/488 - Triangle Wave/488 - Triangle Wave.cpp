#include<bits/stdc++.h>
int main()
{
    int t,n,m;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&n,&m);
        for(int i=1;i<=m;i++)
        {
            for(int j=1;j<=n;j++)
            {
                for(int k=1;k<=j;k++)
                {
                    printf("%d",j);
                }
                printf("\n");
            }
            for(int j=n-1;j>=1;j--)
            {
                for(int k=1;k<=j;k++)
                {
                    printf("%d",j);
                }
                printf("\n");
            }
            if(i<m)printf("\n");
        }
        if(t)printf("\n");
    }
    return 0;
}
