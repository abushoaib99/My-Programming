#include<bits/stdc++.h>
int main()
{
    int n,c=0,m2=0;
    long long a,m1=0;;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%lld",&a);
        if(a>=m1)
        {
            ++c;
            m1=a;
            if(c>m2)
                m2=c;
        }
        else
            c=1,m1=a;
    }
    printf("%d\n",m2);
    return 0;
}
