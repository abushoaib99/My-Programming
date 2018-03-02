#include<bits/stdc++.h>
int main()
{
    int n,m,a,c=0,c1=0;
    scanf("%d%d",&n,&m);
    while(n--)
    {
        scanf("%d",&a);
        if((5-a)>=m)
        {
            c++;
        }
    }
    printf("%d\n",c/3);
    return 0;
}
