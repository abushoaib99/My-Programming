#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,maxi,mini;
    scanf("%d%d%d",&a,&b,&c);
    maxi=max(a,max(b,c));
    mini=min(a,min(b,c));
    printf("%d\n",maxi-mini);
    return 0;
}
