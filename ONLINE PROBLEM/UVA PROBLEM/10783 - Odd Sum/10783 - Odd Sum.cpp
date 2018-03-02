#include<bits/stdc++.h>
int main()
{
    int n,a,b;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d %d",&a,&b);
        int sum;
        if(a<=b)
        {
            sum=0;
            for(int j=a;j<=b;j++)
            {
                if(j%2!=0)
                {
                    sum+=j;
                }
            }
            printf("Case %d: %d\n",i,sum);
        }
        else if(a>b)
        {
            sum=0;
            for(int j=b;j<=a;j++)
            {
                if(j%2!=0)
                {
                    sum+=j;
                }
            }
            printf("Case %d: %d\n",i,sum);
        }

    }
    return 0;
}
