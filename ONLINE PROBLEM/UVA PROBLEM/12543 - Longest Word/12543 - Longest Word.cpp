#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,s1,s2,s3,s5;
    int c,n1,n2=0,n3;
    while(cin>>s && s!="E-N-D")
    {
        n1=s.size();
        if(n2<n1)
        {
            n2=s.size();
            n3=s.size();
            s3.clear();
        int c=0;
        for(int i=0;i<s.size();i++)
        {
            if((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z') || (s[i]>='0' && s[i]<='9') || s[i]=='.' || s[i]=='-')
            {
               s5=s[i];
               s3.append(s5);
               for(int j=0;j<s.size();j++)
               {
                   c++;
                if((s[j]>='0' && s[j]<='9') || s[j]=='.')
                {

                    s.erase(0,c);
                    c=0;
                    j=-1;
                }
               }
                n2=s.size();
                if(s.size()<n3)
                    s1.replace(s1.begin(),s1.end(),s);
                else
                s1.replace(s1.begin(),s1.end(),s3);

            }
        }
        }
    }
    transform(s1.begin(),s1.end(),s1.begin(),::tolower);
    cout<<s1<<endl;
    return 0;
}
