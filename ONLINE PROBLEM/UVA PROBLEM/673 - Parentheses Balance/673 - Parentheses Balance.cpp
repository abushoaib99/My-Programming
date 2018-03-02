#include<bits/stdc++.h>
using namespace std;
int main()
{
//    freopen("input.txt","r",stdin);
//    freopen("output1.txt","w",stdout);
    int n;
    scanf("%d",&n);
    getchar();
    while(n--)
    {
        string s;
        getline(cin,s);
        if(s[0]=='\n')
            printf("Yes\n");
        else
        {
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!=s[i+1] && s[i]=='(' && s[i+1]==')')
            {
                s.erase(i,2);
                i=-1;
            }
            else if(s[i]!=s[i+1] && s[i]=='[' && s[i+1]==']')
            {
                s.erase(i,2);
                i=-1;
            }
            else if(s[i]!=s[i+1] && s[i]=='{' && s[i+1]=='}')
            {
                s.erase(i,2);
                i=-1;
            }
        }
        s.size()==0 ? printf("Yes\n") : printf("No\n");
        }
    }
    return 0;
}
