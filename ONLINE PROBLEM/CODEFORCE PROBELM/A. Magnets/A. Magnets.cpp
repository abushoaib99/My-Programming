#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0;
    char ch,ch1,ch2;
    cin>>n;
    while(n--)
    {
        cin>>ch>>ch1;
        if(ch!=ch2)
        {
            ch2=ch;
            c++;
        }
    }
    printf("%d\n",c);
    return 0;
}
