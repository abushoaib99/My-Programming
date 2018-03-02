#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    int a[n+5];
    for(int i=1; i<=n; i++)
        scanf("%d",a+i);
    int j=n,k=1;
    int sum=0,sum1=0,c;
    for(int i=1; i<=n; i++)
    {
        if(a[k]>a[j])
            c=a[k++];
        else
            c=a[j--];
        i&1?sum+=c:sum1+=c;

    }
    printf("%d %d\n",sum,sum1);
    return 0;
}
