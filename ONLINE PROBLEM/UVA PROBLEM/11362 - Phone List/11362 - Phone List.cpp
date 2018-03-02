#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    bool t;
    scanf("%d",&n);
    while(n--)
    {

        scanf("%d\n",&m);

        string s,s1;
        vector<string>v;

        for(int i=0;i<m;i++)
        {
            cin>>s;
            v.push_back(s);
        }
        sort(v.begin(),v.end());
        t=false;
        for(int i=0;i<m-1;i++)
        {
                s1=v[i+1].substr(0,v[i].size());
                if(s1==v[i])
                {
                    t=true;
                    break;
                }
        }

        t==false ? printf("YES\n") : printf("NO\n");
        v.clear();
    }
    return 0;
}
