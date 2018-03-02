#include<bits/stdc++.h>
using namespace std;
int  main()
{
    int t;
    scanf("%d",&t);
    for(int i=1; i<=t; i++)
    {
        string s[15];
        int a[15],m=0;
        for(int j=0; j<10; j++)
        {
            cin>>s[j]>>a[j];
            m=max(m,a[j]);
        }
        cout<<"Case #"<<i<<":"<<endl;
        for(int j=0; j<10; j++)
        {
            if(m==a[j])
            {
                cout<<s[j]<<endl;
            }
        }
    }
    return 0;
}
