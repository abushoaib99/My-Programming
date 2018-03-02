#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    int a[n+10],b[n+10],sum,j,c;
    sum=0,j=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d%d",a+i,b+i);
        sum+=a[i];
        if(j<b[i])
        {
            j=b[i];
            c=i;
        }
    }
    int t=b[c];
    b[c]=0;
    int temp=*max_element(b,b+n);
    for(int i=0;i<n;i++)
    {
        i==c ? printf("%d ",(sum-a[i])*temp) : printf("%d ",(sum-a[i])*j);
    }
    return 0;
}
