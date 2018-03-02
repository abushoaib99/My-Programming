#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,x,y,z,w,mini;
    scanf("%d %d %d",&a,&b,&c);
    w=(a+b+c);
    x=(2*a+2*b);
    y=(2*a+2*c);
    z=(2*b+2*c);
    mini=min(z,min(y,min(w,x)));
    cout<<mini<<endl;
    return 0;
}
