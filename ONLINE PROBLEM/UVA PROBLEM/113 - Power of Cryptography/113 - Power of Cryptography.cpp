#include<bits/stdc++.h>
using namespace std;
int main()
{
    double p,n,k;
    while(scanf("%lf%lf",&n,&p)!=EOF)
    {
        k=exp(log(p)/n);
        printf("%.0lf\n",k);
    }
    return 0;
}
