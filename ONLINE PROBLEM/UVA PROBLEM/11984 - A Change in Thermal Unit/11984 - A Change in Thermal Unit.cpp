#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    double c,f,convert;
    scanf("%d", &t);
    for(int i=1;i<=t;i++)
    {
        scanf("%lf%lf",&c,&f);
        printf("Case %d: %0.2lf\n", i,c+(f/1.8));
    }
    return 0;
}
