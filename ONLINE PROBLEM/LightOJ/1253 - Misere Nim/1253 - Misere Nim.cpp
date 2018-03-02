#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,a,n,ans,c;
    scanf("%d",&test);
    for(int i=1; i<=test; i++)
    {
        scanf("%d",&n);
        c=0,ans=0;
        for(int j=1; j<=n; j++)
        {
            scanf("%d",&a);
            if(a==1)
                c++;
            ans^=a;
        }
        if(c==n)
        {
            if(n&1)
                printf("Case %d: Bob\n",i);
            else
                printf("Case %d: Alice\n",i);
        }

        else if(c<n)
        {
            if(ans)
                printf("Case %d: Alice\n",i);
            else
                printf("Case %d: Bob\n",i);
        }
    }
    return 0;
}
