#include<bits/stdc++.h>
int main()
{
    long long a,b,c;
    while(scanf("%lld%lld%lld",&a,&b,&c)&&(a+b+c)!=0)
    {
        a=a*a;
        b=b*b;
        c=c*c;
        if(a+b==c)
            printf("right\n");
        else if(a+c==b)
            printf("right\n");
        else if(b+c==a)
            printf("right\n");
        else
            printf("wrong\n");
    }
    return 0;
}
