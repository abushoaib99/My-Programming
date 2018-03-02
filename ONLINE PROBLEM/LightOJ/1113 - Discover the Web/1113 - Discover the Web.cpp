#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    string s,s1;
    scanf("%d",&t);
    for(int i=1; i<=t; i++)
    {
        printf("Case %d:\n",i);
        stack<string>fward;
        stack<string>bward;
        bward.push("http://www.lightoj.com/");
        while(cin>>s,s[0]!='Q')
        {
            if(s[0]=='V')
            {
                cin>>s1;
                cout<<s1<<endl;
                bward.push(s1);
                fward=stack<string>();
            }
            else if(s[0]=='B')
            {

                fward.push(bward.top());
                bward.pop();
                if(!bward.empty())
                    cout<<bward.top()<<endl;
                else
                {
                    printf("Ignored\n");
                    bward.push(fward.top());
                    fward.pop();
                }

            }
            else
            {
                if(!fward.empty())
                {
                    cout<<fward.top()<<endl;
                    bward.push(fward.top());
                    fward.pop();
                }
                else
                    printf("Ignored\n");
            }
        }
    }
    return 0;
}
