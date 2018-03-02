#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        string s;
        int c,c1;
        cin>>s;
        c=s.size();
        if(c<=10)
        {
            cout<<s<<endl;
        }
        else
        {
            cout<<s[0]<<c-2<<s[c-1]<<endl;
        }
    }
    return 0;
}
