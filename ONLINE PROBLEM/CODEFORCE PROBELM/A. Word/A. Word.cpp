#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int c=0,c1=0;
    for(int i=0;i<s.size();++i)
    {
        if(islower(s[i]))
            c++;
        else
            c1++;
    }
    if(c1>c)
    {
        transform(s.begin(),s.end(),s.begin(),::toupper);
        cout<<s<<endl;
    }
    else
    {
        transform(s.begin(),s.end(),s.begin(),::tolower);
        cout<<s<<endl;
    }
    return 0;
}
