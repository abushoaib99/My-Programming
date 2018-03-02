#include<bits/stdc++.h>
using namespace std;

map<int,long long>dp;

long long Byteland(long long n)
{

    if(n==0)
        return 0;
    if(n==1)
        return 1;
    if(dp[n]!=0)
        return dp[n];

    return dp[n]=max(n,(Byteland(n/2)+Byteland(n/3)+Byteland(n/4)));

}

int main()
{
    //freopen("input.txt","r",stdin);
    long long n;
    while(scanf("%lld",&n)!=EOF)
        printf("%lld\n",Byteland(n));

    return 0;
}

