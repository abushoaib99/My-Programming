#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,sum,x,cnt;
    char c;
    cin>>t;
    cin.ignore();
    for(int i=1;i<=t;i++)
    {
        vector<int>v;
        sum=0;
        while(scanf("%c",&c)&&c!='\n')
        {
            v.push_back(c-48);
            sum+=c-48;
        }
       cnt=1;
        for(int j=0;j<v.size();j++)
        {
            x=v[j];
            if((sum-x)%3==0 || (sum-x)==0)
            {
                v.erase(v.begin()+j);
                cnt++;
                sum-=x;
                j=-1;
            }
        }
        (cnt&1)?printf("Case %d: T\n",i):printf("Case %d: S\n",i);
        cnt=1;
    }
    return 0;

}
