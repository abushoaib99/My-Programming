#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,n,m,a,sum,ans;
    scanf("%d",&test);
    for(int c=1;c<=test;c++)
    {
        scanf("%d%d",&n,&m);
        ans=0;
        for(int i=1;i<=n;i++)
        {
            sum=0;
            for(int j=1;j<=m;j++)
            {
                scanf("%d",&a);
                sum+=a;
            }
            ans^=sum;
        }
        ans ? printf("Case %d: Alice\n",c) : printf("Case %d: Bob\n",c);
    }
    return 0;
}
