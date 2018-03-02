#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    scanf("%d",&k);
    vector<int>v;
    int j=0,a=19,c,d;
    v.push_back(a);
    for(int i=1;i<=10000009;i++)
    {
        a+=9;
        c=a;
        d=0;
        while(c>0)
        {
            d+=c%10;
            c/=10;
        }
        if(d==10){
            v.push_back(a);
        }

    }

    printf("%d\n",v[k-1]);
    return 0;

}
