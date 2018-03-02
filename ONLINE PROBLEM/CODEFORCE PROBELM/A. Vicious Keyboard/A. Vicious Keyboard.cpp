#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int c=0,c1;
    bool b=false;
    for(int i=0;i<s.size();i++)
    {
        c1=s.find("VK");
        if(c1<0)
            break;
        else if(c1>=0)
        {
            s.replace(c1,2," ");
            c++;
        }
    }
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='V' && s[i+1]!='\0' && s[i+1]!=' ')
        {
            c++;
            break;
        }
        else if(s[i]!='V' && s[i]!=' ' && s[i+1]=='K')
        {
            c++;
            break;
        }
    }
    printf("%d\n",c);
    return 0;
}
