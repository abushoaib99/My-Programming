#include<bits/stdc++.h>
using namespace std;
int prime(int p)
{
    for(int i=2;i<=p/2;++i)
    {
        if(p%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n,m;
    scanf("%d",&n);
    int s,s1=0;
    int i=1;
    while(1)
    {
        s=(n*i)+1;
        m=prime(s);
        if(m==1)
        {
            printf("%d\n",n);
            m=prime(s);
        }
        else if(m==0)
        {
            printf("%d\n",i);
            break;
        }
        ++i;
    }
    return 0;
}
