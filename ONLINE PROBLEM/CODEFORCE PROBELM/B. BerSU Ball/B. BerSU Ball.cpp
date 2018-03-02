#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,c,tem;
    scanf("%d",&n);
    int a[n+1];
    for(int i=0;i<n;i++)
        scanf("%d",a+i);
    scanf("%d",&m);
    int b[m+1];
    for(int i=0;i<m;i++)
        scanf("%d",b+i);
    sort(a,a+n);
    sort(b,b+m);
    c=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            tem=abs(a[i]-b[j]);
            if(tem==1 || tem==0)
            {
                c++;
                b[j]=999;
                break;
            }

        }
    }
    printf("%d\n",c);
    return 0;
}
