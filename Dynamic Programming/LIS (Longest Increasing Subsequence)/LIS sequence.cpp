#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    scanf("%d",&n);
    int a[n],dp[n];
    for(int i=0;i<n;i++)
        scanf("%d",a+i);
    fill(dp,dp+n,1);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(a[i]>a[j] && dp[i]<dp[j]+1)
            {
                dp[i]=dp[j]+1;
            }

        }
    }
    cout<<"\nLIS = "<<*max_element(dp,dp+n)<<endl;
    return 0;
}

