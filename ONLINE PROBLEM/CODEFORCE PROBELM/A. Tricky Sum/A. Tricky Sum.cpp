#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long sum,x,y,a;
    int k=3;
    vector<long long>v;
    v.push_back(-4);
    while(k<30)
    {
        a=pow(2,k);
        x=((a-1)*a)/2;
        y=(1<<(k-1));
        y=(y*(y+1))/2;
        x=x-y;
        x=x+(v[v.size()-1]);
        sum=x-(1<<k);
        k++;
        v.push_back(sum);
    }
    long long n;
    int t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld",&n);
        a=n;
        if(n<=4)
        {
            if(n==1)
                printf("-1\n");
            else if(n==2)
                printf("-3\n");
            else if(n==3)
                printf("0\n");
            else
                printf("-4\n");
        }
        else
        {
            int i=0;
            for(i=0; i<=30; i++)
            {
                if(pow(2,i)>=n)
                {
                    x=i-1;
                    break;
                }
            }
            n=(n*(n+1))/2;
            x=1<<x;
            x=(x*(x+1))/2;
            n=n-x;
            a==1<<i?printf("%lld\n",v[i-2]):printf("%lld\n",n+v[i-3]);
        }
    }

    return 0;
}


