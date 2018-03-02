#include<bits/stdc++.h>
using namespace std;
map<string,string>m;
map<string,string>::iterator it;
int main()
{
    string s,s1,s2;
    while(getline(cin,s),s!="")
    {
        stringstream ss(s);
        ss>>s1;
        ss>>s2;
        m[s2]=s1;
    }
    while(cin>>s)
    {
        it=m.find(s);
        if(it==m.end())
            cout<<"eh\n";
        else
            cout<<m[s]<<endl;
    }
    return 0;
}
