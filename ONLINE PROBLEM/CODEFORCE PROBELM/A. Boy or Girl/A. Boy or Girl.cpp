#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int k;
    cin>>s;
    for(int i=0;i<s.size()-1;i++)
    {
        for(int j=i+1;j<=s.size();j++)
        {
            if(s[i]==s[j])
            {
                s.erase(j,1);
                j--;
            }
        }
    }
    k=s.size();
    k&1 ? printf("IGNORE HIM!\n") : printf("CHAT WITH HER!\n");


}
