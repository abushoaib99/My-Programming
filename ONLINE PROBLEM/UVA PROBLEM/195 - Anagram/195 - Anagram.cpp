#include <bits/stdc++.h>
using namespace std;
bool s_compare(char ch1,char ch2)
{
    if(tolower(ch1)==tolower(ch2))
        return ch1<ch2;
    else
        return tolower(ch1)<tolower(ch2);
}
int main()
{
    int t;
    string s;
    scanf("%d",&t);
    while(t--)
    {
        cin>>s;
        sort(s.begin(),s.end(),s_compare);
        do
        {
            cout<<s<<'\n';
        }
        while(next_permutation(s.begin(),s.end(),s_compare));
    }
    return 0;

}

