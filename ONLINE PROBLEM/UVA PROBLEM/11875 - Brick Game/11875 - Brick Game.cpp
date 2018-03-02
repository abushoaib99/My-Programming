#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int t,n,a[12];
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        scanf("%d",&n);
        for(int j=0;j<n;j++)
            scanf("%d",a+j);
        sort(a,a+n);
        printf("Case %d: %d\n",i,a[n/2]);
    }
    return 0;
}
