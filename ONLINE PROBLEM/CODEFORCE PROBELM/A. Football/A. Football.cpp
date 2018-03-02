#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int c,c1;
    c=s.size();
    c1=1;
    for(int i=0;i<c-1;i++)
    {
        if(s[i]=='0'&&s[i+1]=='0')
        {
            ++c1;
            if(c1>=7)
            {
                ++c1;
                break;
            }
        }
        else if(s[i]=='1' && s[i+1]=='1')
        {
            ++c1;
            if(c1>=7)
            {
                ++c1;
                break;
            }

        }
        else if(s[i]=='0' && s[i+1]=='1')
        {
            if(c1==6)
                break;
            c1=1;
        }
        else if(s[i]=='1' && s[i+1]=='0')
        {
            if(c1==6)
                break;
            c1=1;
        }
    }
    if(c1>=7)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
