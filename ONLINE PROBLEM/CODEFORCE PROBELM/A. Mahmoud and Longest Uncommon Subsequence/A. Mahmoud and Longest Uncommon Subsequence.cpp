#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,s1;
    cin>>s>>s1;
    if(s.compare(s1)==0)
    {
        printf("-1\n");
    }
    else
    {
        if(s.length()>=s1.length())
        {
            cout<<s.length()<<endl;
        }
        else
            cout<<s1.length()<<endl;
    }
    return 0;
}
