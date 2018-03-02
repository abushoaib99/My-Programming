#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s="qwertyuiopasdfghjkl;zxcvbnm,./";
    char x;
    cin>>x;
    int v;
    v=(x=='L')?1:-1;
    string ss;
    cin>>ss;
    for(int i=0;i<ss.length();i++)
    cout<<s[s.find(ss[i])+v];
    return 0;
}
