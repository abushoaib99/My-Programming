#include <bits/stdc++.h>
int main()
{
	int t,n,m;
	long long a,a1,sum;
	scanf("%d",&t);
	for(int i=1;i<=t;i++)
	{
		scanf("%d%d",&n,&m);
		sum=0;
		while(n--)
        {
            scanf("%lld",&a);
            sum+=a;
        }
		while(m--)
		{
			scanf("%lld",&a1);
            sum+=a1;
		}
		a>=a1 ? printf("Case %d: %lld\n",i,sum-a) : printf("Case %d: %lld\n",i,sum-a1);
	}
	return 0;
}
