#include<bits/stdc++.h>
int main()
{
    int t;
    long long a,b,c;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld%lld%lld",&a,&b,&c);
        if(a+b>c && a+c>b && b+c>a)
            puts("OK");
        else
            puts("Wrong!!");
    }
    return 0;
}
