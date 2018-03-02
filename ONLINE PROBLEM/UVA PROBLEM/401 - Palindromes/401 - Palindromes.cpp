#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("input.txt","r",stdin);
    string s,s1,s2;
    char c[10005];
    memset(c,NULL,sizeof c);
    c['A']='A';
    c['E']='3';
    c['H']='H';
    c['I']='I';
    c['J']='L';
    c['L']='J';
    c['M']='M';
    c['O']='O';
    c['S']='2';
    c['T']='T';
    c['U']='U';
    c['V']='V';
    c['W']='W';
    c['X']='X';
    c['Y']='Y';
    c['Z']='5';
    c['1']='1';
    c['2']='S';
    c['3']='E';
    c['5']='Z';
    c['8']='8';
    while(cin>>s)
    {
        s1=s2="";
        for(int i=s.size()-1;i>=0;i--)
        {
            s1+=s[i];
            s2+=c[s[i]];
        }
    if(s!=s1 && s!=s2)
        cout<<s<<" -- is not a palindrome."<<endl<<endl;
    else if(s==s1 && s!=s2)
        cout<<s<<" -- is a regular palindrome."<<endl<<endl;
    else if(s!=s1 && s==s2)
        cout<<s<<" -- is a mirrored string."<<endl<<endl;
    else
        cout<<s<<" -- is a mirrored palindrome."<<endl<<endl;
    }
    return 0;
}
