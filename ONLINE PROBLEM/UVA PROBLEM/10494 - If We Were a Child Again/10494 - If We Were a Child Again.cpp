#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,s1,s2;
    long long n,r;
    vector<long long>v;
    bool b;
    while(cin>>s>>s1>>n)
    {
        r=0,b=false;
        for(int i=0;i<s.size();i++)
        {
            r=(r*10)+s[i]-'0';
            if(r/n!=0)
                b=true;
            if(b)
            v.push_back(r/n);
            r=r%n;
        }
        if(!b)
            v.push_back(0);
        if(s1=="/")
            for(int i=0;i<v.size();i++)
            cout<<v[i];
        else
            printf("%lld",r);
        printf("\n");
        v.clear();
    }
    return 0;
}
