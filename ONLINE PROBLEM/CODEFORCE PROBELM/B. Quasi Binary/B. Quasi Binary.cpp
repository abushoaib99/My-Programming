#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,r,t;
    char ch[10];
    scanf("%d",&n);
    if(n<10)
    {
        printf("%d\n",n);
        while(n--)
        {
            printf("1 ");
        }
    }
    else
    {
        t=0;
        string s,s1;
        while(n)
        {
            t++;
            itoa(n,ch,10);
            for(int i=0; i<strlen(ch); i++)
            {
                if(ch[i]=='0')
                {
                    s1+='0';
                    s=s+'0';
                }
                else
                {
                    s1+='1';
                    s=s+'1';
                }
            }
            s=s+' ';
            r=atoi(s1.c_str());
            s1.clear();
            n=n-r;
        }
        printf("%d\n%s\n",t,s.c_str());
    }
    return 0;
}
