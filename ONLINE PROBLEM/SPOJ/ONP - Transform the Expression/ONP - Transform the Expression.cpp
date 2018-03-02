#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("input.txt","r",stdin);
    int n;
    scanf("%d\n",&n);
    stack<char>s;
    vector<char>s1;
    char ch,ch1;
    while(n--)
    {
        while(ch=getchar())
        {
            if(ch=='(' || ch=='+' || ch=='-' || ch=='*' || ch=='/' || ch=='^')
            {
                s.push(ch);
            }
            else if(ch==')')
            {
                for(int i=s.size();i>=0;i--)
                {
                    if(s.top()=='(')
                    {
                        s.pop();
                        break;
                    }
                    if(s.top()=='+' || s.top()=='-' || s.top()=='*' ||s.top()=='/' || s.top()=='^')
                    {
                        ch1=s.top();
                        s1.push_back(ch1);
                    }
                    s.pop();
                }
            }
            else if(s.empty())break;
            else
            {
                s1.push_back(ch);
            }
        }
        for(int i=0;i<s1.size();i++)
        {
            cout<<s1[i];
        }
        cout<<endl;
        s1.clear();
    }
    return 0;
}
