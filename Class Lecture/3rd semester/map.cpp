#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int>m;
    string s;
    while(getline(cin,s)&& s!="\0")
    {
        m[s]++;
    }
    map<string,int>::iterator it=m.begin();
    while(it!=m.end())
    {
        cout<<it->first<<" "<<it->second<<endl;
        it++;
    }
    return 0;
}
