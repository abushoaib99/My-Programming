#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int t1,t2,t3;
    t1=s.find("H");
    t2=s.find("Q");
    t3=s.find("9");
    if(t1>=0 || t2>=0 || t3>=0)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
