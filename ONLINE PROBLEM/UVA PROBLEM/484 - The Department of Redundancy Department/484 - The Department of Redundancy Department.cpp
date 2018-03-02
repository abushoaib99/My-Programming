#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<long long,long long>m;
    vector<long long>v;
    long long n;
    while(cin>>n)
    {
        if(!m[n])
            v.push_back(n);
        m[n]++;
    }
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<' '<<m[v[i]]<<endl;
    return 0;
}
