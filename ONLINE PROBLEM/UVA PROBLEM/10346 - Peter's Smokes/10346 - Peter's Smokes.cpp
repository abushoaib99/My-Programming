#include<bits/stdc++.h>
int main()
{
    int n,k,c;
    while(scanf("%d%d",&n,&k)!=EOF)
    {
        c=n+((n-1)/(k-1));
        printf("%d\n",c);
    }
    return 0;
}
