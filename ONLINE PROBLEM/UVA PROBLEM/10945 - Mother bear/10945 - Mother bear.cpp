#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,s1;
    while(getline(cin,s)&& s!="DONE")
    {
        s.erase(remove(s.begin(),s.end(),' '),s.end());
        s.erase(remove(s.begin(),s.end(),'.'),s.end());
        s.erase(remove(s.begin(),s.end(),','),s.end());
        s.erase(remove(s.begin(),s.end(),'!'),s.end());
        s.erase(remove(s.begin(),s.end(),'?'),s.end());
        transform(s.begin(),s.end(),s.begin(),::tolower);
        s1=s;
        reverse(s.begin(),s.end());
        if(s1==s)
            printf("You won't be eaten!\n");
        else
            printf("Uh oh..\n");
    }
    return 0;
}
