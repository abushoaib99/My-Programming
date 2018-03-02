#include<bits/stdc++.h>
int main()
{
    long long a,b,n,c,i,j=1;
    while(scanf("%lld%lld",&a,&b)&& a>0 && b>0)
    {
        n=a,i=0;
        while(1)
        {
            i++;
            if(n==1)
                break;
            if(n&1)
                n=(n<<1)+n+1;
            else
                n=n>>1;
            if(n>b)
                break;
        }
        printf("Case %lld: A = %lld, limit = %lld, number of terms = %lld\n",j,a,b,i);
        j++;
    }
    return 0;
}
