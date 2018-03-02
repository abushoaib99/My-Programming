#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int n,a,l;
    while(cin>>s)
    {
        if(s=="0")
            break;
        n=0;
        l=s.size();
        for(int i=0;i<s.size();i++)
        {
            a=s[i]-'0';
            n=n+(a*(pow(2,l)-1));
            l--;
        }
        printf("%d\n",n);
    }
    return 0;
}
