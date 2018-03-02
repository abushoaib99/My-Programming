#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch1[1010],ch2[1010];
    map<char,int>m;
    int len1,len2;
    while(gets(ch1) && gets(ch2))
    {
        len1=strlen(ch1);
        len2=strlen(ch2);
        sort(ch1,ch1+len1);
        sort(ch2,ch2+len2);
        for(int i=0;i<len1;i++)
            m[ch1[i]]++;
        for(int i=0;i<len2;i++)
        {
            if(m[ch2[i]])
            {
                cout<<ch2[i];
                m[ch2[i]]--;
            }
        }
        printf("\n");
        m.clear();
    }
    return 0;
}
