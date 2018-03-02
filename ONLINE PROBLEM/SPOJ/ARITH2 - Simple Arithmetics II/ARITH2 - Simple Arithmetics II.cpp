#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    unsigned long long n,sum;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%llu",&n);
        sum=n;
        while(1)
        {
            char c;
            cin>>c;
            if(c=='=')
            break;
            scanf("%llu",&n);
            if(c=='+')
            sum+=n;
            else if(c=='-')
            sum-=n;
            else if(c=='*')
            sum*=n;
            else
            sum/=n;
        }
        printf("%llu\n",sum);
    }
	return 0;
}
