#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("input.txt","r",stdin);
    string s;
    cin>>s;
    int c;
    while(1)
    {
        c=s.find("WUB");
        if(c<0)
            break;
        s.replace(s.find("WUB"),3," ");
    }
    cout<<s<<endl;
    return 0;
}
