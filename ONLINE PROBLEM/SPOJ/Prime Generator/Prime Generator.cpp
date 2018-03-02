#include<bits/stdc++.h>
bool prime(long long n)
{
    for(long long j=2;j<=sqrt(n);j++)
    {
        if(n%j==0)
            return false;
    }
    return true;
}
int main()
{
    int n;
    long long a,b;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%lld%lld",&a,&b);
        if(a==1 || a==2 || b==1 || b==2)
        {
            printf("2\n");
        }
        if(a<=b)
        {
        if(a%2!=0)
        {
        for(long long i=a;i<=b;i=i+2)
        {
            if(prime(i) && i!=1)
            {
                printf("%d\n",i);
            }
        }
        printf("\n");
        }
        else if(a%2==0)
        {
        for(long long i=a+1;i<=b;i=i+2)
        {
            if(prime(i))
            {
                printf("%d\n",i);
            }
        }
        printf("\n");
        }
        }
        else if(b<a)
        {
        if(b%2!=0)
        {
        for(long long i=b;i<=a;i=i+2)
        {
            if(prime(i) && i!=1)
            {
                printf("%d\n",i);
            }
        }
        printf("\n");
        }
        else if(b%2==0)
        {
        for(long long i=b+1;i<=a;i=i+2)
        {
            if(prime(i))
            {
                printf("%d\n",i);
            }
        }
        printf("\n");
        }
        }
    }
    return 0;
}
