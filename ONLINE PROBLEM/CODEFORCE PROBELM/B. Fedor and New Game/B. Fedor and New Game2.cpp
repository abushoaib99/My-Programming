#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k;
    scanf("%d%d%d",&n,&m,&k);
    int a[m+1];
    for(int i=0;i<=m;i++)
        scanf("%d",a+i);
    int c=0;
    for(int i=0;i<m;i++)
    {
        if(__builtin_popcount(a[m]^a[i])<=k)
            c++;
    }
    printf("%d\n",c);
    return 0;
}
