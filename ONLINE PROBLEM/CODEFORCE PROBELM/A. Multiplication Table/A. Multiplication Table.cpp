#include<bits/stdc++.h>
int main()
{
    long long a,b,c=0,j=1;
    scanf("%lld%lld",&a,&b);
    if(a*a<b)
        printf("0\n");
    else
    {
    while(1)
    {
        if(a*j>=b)
        {
            break;
        }
        j++;

    }
    for(long long i=j;i<=a;++i)
    {
        if(i>b)
            break;
        if(b%i==0)
            c++;
    }
    printf("%lld\n",c);
    }

    return 0;

}
