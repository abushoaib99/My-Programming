#include<bits/stdc++.h>
int main()
{
    int t,n,c,c1,i=1;
    while(scanf("%d",&t)&&t)
    {
        c=0,c1=0;
        while(t--)
        {
            scanf("%d",&n);
            !n ? c++ : c1++;
        }
        printf("Case %d: %d\n",i++,c1-c);
    }
    return 0;
}
