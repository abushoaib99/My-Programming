#include<bits/stdc++.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n+3];
    a[0]=0;
    for(int i=1;i<=n;i++)
    {
        scanf("%d",a+i);
        a[i]+=a[i-1];
    }
    int i,j;
    scanf("%d%d",&i,&j);
    if(i<=j)
    {
        printf("%d\n",a[j]-a[i-1]);
    }
    else
    {
        printf("%d\n",a[i]-a[j-1]);
    }
    return 0;

}
