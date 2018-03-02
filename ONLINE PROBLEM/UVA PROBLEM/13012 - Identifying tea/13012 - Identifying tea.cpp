#include<bits/stdc++.h>
int main()
{
    int a,n,c;
    while(scanf("%d",&n)==1)
    {
        c=0;
        for(int i=1; i<=5; i++)
        {
            scanf("%d",&a);
            if(a==n)
                c++;
        }
        printf("%d\n",c);
    }
    return 0;
}
