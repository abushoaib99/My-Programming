#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    int a[n+10];
    for(int i=0;i<n;i++)
    {
        scanf("%d",a+i);
    }
    sort(a,a+n);
    bool b=true;
    for(int i=0;i<n-2;i++)
    {
        if(a[i]+a[i+1]>a[i+2])
        {
            b=false;
            break;
        }

    }
    b==false?printf("YES\n") : printf("NO\n");
    return 0;
}
