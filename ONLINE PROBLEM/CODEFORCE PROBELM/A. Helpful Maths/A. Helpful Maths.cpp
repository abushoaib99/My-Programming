#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,s1,s2;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='1' || s[i]=='2' || s[i]=='3')
        {
            s2=s[i];
            s1.append(s2);
        }
    }
    sort(s1.begin(),s1.end());
    for(int j=0;j<s1.size();j++)
    {
        if(j>0)
            printf("+");
        printf("%c",s1[j]);
    }
    return 0;
}
