#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a;
    string s;
    int c,ar[100];
    while(scanf("%lld",&a)&&a>=0)
    {
        c=0;
        if(a==0)
            printf("0\n");
        else
        {
            while(a)
            {
                ar[c++]=a%3;
                a/=3;
            }
            for(int i=c-1; i>=0; i--)
                printf("%d",ar[i]);
            printf("\n");
        }
    }
    return 0;
}
