#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,v;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        v=(360%(180-n));
        v==0? printf("YES\n") : printf("NO\n");
    }
    return 0;
}
