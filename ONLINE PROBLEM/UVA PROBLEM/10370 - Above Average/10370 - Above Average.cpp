#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,a[1009],sum,avg,c;
    float per;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        sum=0,c=0;
        for(int i=0;i<n;i++)
        {
            scanf("%d",a+i);
            sum+=a[i];
        }
        avg=sum/n;
        for(int i=0;i<n;i++)
        {
            if(a[i]>avg)
                ++c;
        }
        avg=c/n;
        per=(float)c/(float)n;
        printf("%.3f%%\n",per*100);
    }
    return 0;
}
