#include <bits/stdc++.h>
using namespace std;
int n,i[179];
char s,f;
int main()
{
    i[118]=0,i[60]=1,i[94]=2,i[62]=3;
    //i['^']=0,i['>']=1,i['v']=2,i['<']=3;
    cin>>s>>f>>n;
    s=i[s],f=i[f];
    //cout<<s+n<<' '<<f+n<<endl;
    cout<<(n%2==0?"undefined":(s+n)%4==f?"cw":"ccw");
}
