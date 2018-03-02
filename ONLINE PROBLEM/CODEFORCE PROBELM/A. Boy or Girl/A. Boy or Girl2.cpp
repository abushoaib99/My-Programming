#include<bits/stdc++.h>
using namespace std;
int main()
{
    char c;
    set<char>s;
    while(scanf("%c",&c) && c!='\n')
    {
        s.insert(c);
    }
    cout<<(((s.size())%2)?"IGNORE HIM!":"CHAT WITH HER!");
}
