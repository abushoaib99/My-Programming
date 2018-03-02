#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("input.txt","r",stdin);
    unsigned long long n,m;
    scanf("%llu%llu",&n,&m);
    vector<unsigned long long>v;
    for(unsigned long long i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            v.push_back(i);
            if(i*i!=n)
            {
                v.push_back(n/i);
            }
        }
    }
    sort(v.begin(),v.end());
    if(v.size()<m)
        printf("-1\n");
    else
    cout<<v[m-1]<<endl;
    return 0;

}
