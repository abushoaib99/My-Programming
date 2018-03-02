#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,len;
    string s;
    while(scanf("%d",&n),n>0)
    {
        cin>>s;
        string::iterator it=s.begin();
        len=s.size()/n;
        for(;it!=s.end();it+=len)
            reverse(it,it+len);
        cout<<s<<"\n";
    }
    return 0;
}
