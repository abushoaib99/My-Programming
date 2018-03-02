#include<bits/stdc++.h>
int main()
{
    int n,x,c;
    while(scanf("%d",&n)==1)
    {
        c = 1;
        x = 1;
        while(x)
        {
            c++;
            x=((x*10)+1)%n;
        }
        printf("%d\n",c);
    }
    return 0;
}
