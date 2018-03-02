#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,x1,w,x,y,z,m;
    scanf("%d %d %d",&a,&b,&c);
    w=a+(b*c);
    x=a*(b+c);
    y=a*b*c;
    z=(a+b)*c;
    x1=a+b+c;
    m=max(w,max(x,max(y,max(z,x1))));
    printf("%d\n",m);
    return 0;
}
