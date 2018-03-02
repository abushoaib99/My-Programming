#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m,d,mid;
    cin>>n>>m;
    mid=n/2;
    if(m==1)
        cout<<"1\n";
    else if(n==2 && m==2)
        cout<<"2\n";
    else if(n>2 && m==2)
        cout<<"3\n";
    else if(n%2!=0 && m>mid && m!=mid+1)
        cout<<((m-mid)*2)-2<<endl;
    else if(n%2!=0 && m<=mid+1)
        cout<<((m-1)*2)+1<<endl;
    else if(n%2==0 && m<=mid)
        cout<<((m-1)*2)+1<<endl;
    else
        cout<<(m-mid)*2<<endl;

    return 0;
}
