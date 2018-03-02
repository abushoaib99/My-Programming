#include<bits/stdc++.h>
using namespace std;
vector<char>v;
string s;
int siz,n;
void permutation(int i)
{
    if(v.size()==n)
    {
        for(int k=0; k<n; k++)
            printf("%c",v[k]);
        printf("\n");
        return;
    }

    else
    {
        for(int j=i; j<siz; j++)
        {
            v.push_back(s[j]);
            permutation(j+1);
            v.pop_back();
            while(s[j]==s[j+1])
                j++;
        }
    }
    return;
}
int main()
{
    while(cin>>s>>n)
    {
        siz=s.size();
        sort(s.begin(),s.end());
        permutation(0);
    }
    return 0;
}
