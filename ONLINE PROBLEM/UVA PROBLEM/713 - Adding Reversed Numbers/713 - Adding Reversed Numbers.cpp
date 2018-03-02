#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,sum;
    string s,s1,s2,s3="",s4,s5;
    scanf("%d",&t);
    while(t--)
    {
        cin>>s4>>s5;
        while(1)
        {
            if(s4[s4.size()-1]!='0')
                break;
            s4.erase(s4.size()-1);
        }
        while(1)
        {
            if(s4[0]!='0')
                break;
            s4.erase(0,1);
        }
        while(1)
        {
            if(s5[s5.size()-1]!='0')
                break;
            s5.erase(s5.size()-1);
        }
        while(1)
        {
            if(s5[0]!='0')
                break;
            s5.erase(0,1);
        }
        reverse(s4.begin(),s4.end());
        reverse(s5.begin(),s5.end());
        s=string(s5.size(),'0')+s4;
        s1=string(s4.size(),'0')+s5;
        vector<int>a,a1,a2;
        int tem,tem1;
        for(int i=0;i<s.size();i++)
        {
            tem=s[i]-'0';
            a.push_back(tem);
            tem1=s1[i]-'0';
            a1.push_back(tem1);
        }

        int m=0;
        for(int i=a.size()-1;i>=0;i--)
        {
            sum=a[i]+a1[i]+m;
            if(sum>9)
            {
                tem=sum%10;
                a2.push_back(tem);
                m=1;
            }

            else
            {
                a2.push_back(sum);
                m=0;
            }

        }
        int j,k;
        for(j=0;j<a2.size();j++)
        {
            if(a2[j]!=0)
            break;
        }
        for(k=a2.size()-1;k>=0;k--)
        {
            if(a2[k]!=0)
                break;
        }
        for(int i=j;i<=k;i++)
            cout<<a2[i];
        printf("\n");
    }
    return 0;
}
