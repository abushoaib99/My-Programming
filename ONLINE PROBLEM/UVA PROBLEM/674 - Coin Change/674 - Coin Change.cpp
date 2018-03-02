#include<bits/stdc++.h>
#define maxi 7490
using namespace std;

long long nways[maxi];

void coin_genarate()
{
    long long coin[5] = {1,5,10,25,50};
    nways[0] = 1;

    for(long long i=0;i<5;i++)
    {
        for(long long j=coin[i],k=0;j<maxi;j++,k++)
        {
            nways[j]+=nways[k];
        }
    }
}

int main()
{
    coin_genarate();
    long long taka;
    while(scanf("%lld",&taka)!=EOF)
    {
        printf("%lld\n",nways[taka]);
    }
    return 0;
}
