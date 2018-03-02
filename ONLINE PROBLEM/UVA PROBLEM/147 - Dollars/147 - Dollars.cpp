#include<bits/stdc++.h>
using namespace std;
long long ways[7500];
void countt()
{
    int coin[]= {1,2,4,10,20,40,100,200,400,1000,2000};
    ways[0]=1;
    for(int i=0; i<11; ++i)
    {
        for(int j=coin[i]; j<7500; ++j)
        {
            ways[j]+=ways[j-coin[i]];
        }
    }
}
int main()
{
    countt();
    double a;
    long long n;
    while(scanf("%lf",&a)&&a)
    {
        n=a*20;
        printf("%6.2lf%17lld\n",a,ways[n]);
    }
    return 0;
}
