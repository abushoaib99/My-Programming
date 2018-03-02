#include<bits/stdc++.h>
using namespace std;
double pi = acos(-1);
int main()
{
    int n;
    double r;
    while(scanf("%lf%d",&r,&n)!=EOF)
    {
        printf("%.3lf\n",0.5*(n*r*r*sin(2.*pi/n)));
    }
    return 0;
}
