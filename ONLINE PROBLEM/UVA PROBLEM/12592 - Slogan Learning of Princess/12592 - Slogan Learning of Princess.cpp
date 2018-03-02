#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b;
    string s,s1[110],s2[110];
    cin>>n;
    cin.ignore();
    for(int i=0; i<n; i++)
    {
        getline(cin,s1[i]);
        getline(cin,s2[i]);
    }
    cin>>a;
    cin.ignore();
    while(a--)
    {
        getline(cin,s);
        for(int i=0; i<n; i++)
        {
            if(s==s1[i])
            {
                cout<<s2[i]<<endl;
                break;
            }
        }
    }
    return 0;
}
