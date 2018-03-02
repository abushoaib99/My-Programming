#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    bool b=true;
    for(int i=1;i<s.length();i++)
    {
        if(s[i]>'Z')
           b=false;
    }
    if(b)
    {
        for(int i=0;i<s.length();i++)
        {
            s[i]^=32;
        }
    }
    cout<<s<<endl;
    return 0;
}
