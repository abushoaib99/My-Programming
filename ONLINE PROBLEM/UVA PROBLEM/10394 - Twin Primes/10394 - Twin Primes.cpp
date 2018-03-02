#include<bits/stdc++.h>
#define pi pair<int,int>
using namespace std;
vector<pi>v;
bool flag[20000001];
void prime()
{
    memset(flag,true,sizeof flag);
    for(int i=2; i*i<=20000001; i++)
    {
        if(flag[i])
        {
            for(int j=i*i; j<=20000001; j+=i)
            {
                flag[j]=false;
            }

        }
    }
    for(int i=3; i<=20000001; i+=2)
    {
        if(flag[i] && flag[i+2])
            v.push_back(make_pair(i,i+2));
    }
}
int main()
{
    int n;
    prime();
    while(scanf("%d",&n)!=EOF)
    {
        printf("(%d, %d)\n",v[n-1].first,v[n-1].second);
    }
    return 0;
}

