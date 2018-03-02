#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long L,H,S,S1,V,a,T;
    while(scanf("%lld%lld",&L,&H)&&(L+H))
    {
        if(L>=H)
            swap(L,H);
        S1=0;
        for(long long i=L;i<=H;i++)
        {
            S=0;
            a=i;
            while(1)
            {
                if(a&1)
                    a=(a<<1)+a+1;
                else
                    a=a>>1;
                S++;
                if(a==1)
                    break;
            }
            if(S1<S)
            {
                S1=S;
                V=i;
            }
        }
        printf("Between %lld and %lld, %lld generates the longest sequence of %lld values.\n",L,H,V,S1);
    }
    return 0;
}
