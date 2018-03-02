#include<bits/stdc++.h>
using namespace std;
int ar[1000009];
int main()
{
    int n,k,mx;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
        scanf("%d",ar+i);

    scanf("%d",&k);
    for(int i=0; i<=n-k; i++)
    {
        mx=ar[i];
        for(int j=1;j<k;j++)
        {
            mx=max(mx,ar[i+j]);
        }
        printf("%d ",mx);
    }
    return 0;
}

