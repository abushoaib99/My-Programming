#include<bits/stdc++.h>
using namespace std;
bool prime(int n)
{
    int p=sqrt(n);
    if(n==0 || n==1)
        return false;
    for(int i=2; i<=p; ++i)
    {
        if(n%i==0)
            return false;
    }
    return true;
}
int main()
{
    int n,i;
    bool t;
    while(scanf("%d",&n) && n)
    {
        t=false;
        if(n==4)
        {
            printf("4:\n2+2\n");
            continue;
        }
        if(n&1 && n!=1)
        {
            i=2;
            if(prime(i)&&prime(n-2))
                t=true;
        }
        else
        {
            for(i=3; i<=n; i+=2)
            {
                if(prime(i)&&prime(n-i))
                {
                    t=true;
                    break;
                }
            }
        }
        t ? printf("%d:\n%d+%d\n",n,i,n-i):printf("%d:\nNO WAY!\n",n);
    }
    return 0;
}
