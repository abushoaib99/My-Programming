#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d\n",&n);
    while(n--)
    {
        string s;
        map<string,long long>m;
        double c=0.0;
        while(getline(cin,s) && s!="\0")
        {
            m[s]++;
            c++;
        }
        map<string,long long>::iterator it;
        for(it=m.begin();it!=m.end();it++)
        {
            printf("%s %.4lf\n",it->first.data(),(double)it->second/(double)c*100.0);
        }
        if(n>0)
            printf("\n");
        m.clear();
    }
    return 0;
}
