#include<bits/stdc++.h>
using namespace std;
long long ways[12345];
void nways()
{
    int coin[]={1,8,27,64,125,216,343,512,729,1000,1331,1728,2197,2744,3375,4096,4913,5832,6859,8000,9261};
    ways[0]=1;
    for(int i=0;i<21;i++)
    {
        for(long long j=coin[i];j<=10009;j++)
            ways[j]+=ways[j-coin[i]];
    }
}

int main()
{
    nways();
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        printf("%lld\n",ways[n]);
    }
    return 0;
}
