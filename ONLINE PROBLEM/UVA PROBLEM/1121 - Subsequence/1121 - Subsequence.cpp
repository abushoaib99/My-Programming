#include<bits/stdc++.h>
using namespace std;
long long a[123456];
int main()
{
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    int n;
    long long s;
    while(scanf("%d%lld",&n,&s)!=EOF)
    {
        for(int i=0; i<n; i++)
            scanf("%lld",a+i);

        int high=0,low=0,ans=n+1,temp;
        long long sum=a[0];
        while(high<n && low<n)
        {

            if(sum>=s)
            {
                temp=high-low+1;
                ans=min(ans,temp);
            }
            if(sum>=s && low<=high)
            {
                sum-=a[low];
                low++;
            }
            else if(sum<s)
            {
                high++;
                if(high<n)
                    sum+=a[high];
            }
        }
        if(ans==n+1)
            ans=0;
        printf("%d\n",ans);
    }

    return 0;
}
