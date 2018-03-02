#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s;
    scanf("%d\n",&n);
    for(int i=1;i<=n;i++)
    {
        getline(cin,s);
        transform(s.begin(),s.end(),s.begin(),::toupper);
        cout<<"Case "<<i<<": "<<s<<endl;
    }
    return 0;
}
