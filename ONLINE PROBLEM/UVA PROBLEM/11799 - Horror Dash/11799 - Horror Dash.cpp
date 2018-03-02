#include<bits/stdc++.h>
int main()
{
    int t,n,a,b=0;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        scanf("%d",&n);
        while(n--)
        {
            scanf("%d",&a);
            if(b<a)
                b=a;
        }
        printf("Case %d: %d\n",i,b);
        b=0;
    }
    return 0;
}
