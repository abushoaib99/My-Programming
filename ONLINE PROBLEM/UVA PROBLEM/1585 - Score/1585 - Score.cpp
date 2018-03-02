#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,c,sum;
    char ch[85];
    scanf("%d",&t);
    while(t--)
    {
        cin>>ch;
        sum=c=0;
        for(int i=0;i<strlen(ch);i++)
        {
            if(ch[i]=='o' || ch[i]=='O')
               ++c;
            else
                c=0;
            sum+=c;
        }
        printf("%d\n",sum);
    }
    return 0;
}
