#include<bits/stdc++.h>
int main()
{
    int t,x,y,a,b;
    while(scanf("%d",&t) && t)
    {
        scanf("%d%d",&x,&y);
        while(t--)
        {
            scanf("%d%d",&a,&b);
            if(a==x || b==y)
                printf("divisa\n");
            else if(a<x && b>y)
                printf("NO\n");
            else if(a>x && b>y)
                printf("NE\n");
            else if(a>x && b<y)
                printf("SE\n");
            else if(a<x && b<y)
                printf("SO\n");
        }
    }
    return 0;
}
