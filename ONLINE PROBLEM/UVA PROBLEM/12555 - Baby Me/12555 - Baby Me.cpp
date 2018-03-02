#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    float a;
    char ch[20];
    cin>>t;
    for(int j=1;j<=t;j++)
    {
        cin>>a;
        gets(ch);
        a=a*0.5;
        for(int i=0;i<strlen(ch);i++)
        {
            if(isdigit(ch[i]))
                a=a+((ch[i]-'0')*0.05);
        }
        cout<<"Case "<<j<<": "<<a<<'\n';
    }
    return 0;
}
