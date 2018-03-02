#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s,s1,s2,s3;
	int n;
	cin>>s>>s1>>n;
	cout<<s<<" "<<s1<<endl;
	while(n--)
    {
        cin>>s2>>s3;
        if(s==s2)
            s=s3;
        else
            s1=s3;
        cout<<s<<" "<<s1<<endl;
    }
    return 0;
}
