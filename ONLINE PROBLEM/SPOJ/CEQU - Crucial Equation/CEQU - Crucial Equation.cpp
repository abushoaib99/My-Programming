#include<bits/stdc++.h>
int main()
{
    int n,a,b,c,x,y;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d%d%d",&a,&b,&c);
        if((abs)(a)+(abs)(b)>(abs)(c))
        {
            printf("Case %d: No\n",i);
        }
        else
        {
        x=((abs)(c)-(abs)(b))/(abs)(a);
        y=((abs)(c)-(abs)(a))/(abs)(b);
        if(((abs)(a)*(abs)(x))+((abs)(b)*(abs)(y))==(abs)(c))
        {
            printf("Case %d: Yes\n",i);
        }
        else
            printf("Case %d: No\n",i);
        }
    }
    return 0;

}
