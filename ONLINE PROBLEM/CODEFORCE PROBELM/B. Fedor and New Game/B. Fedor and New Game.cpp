#include<bits/stdc++.h>
using namespace std;
inline bool check(int n,int pos)
{
    return (n&(1<<pos));
}
int main()
{
    int n,m,k,d,c=0,c1=0;
    int a[1009];
    char ch[25];
    scanf("%d%d%d",&n,&m,&k);
    for(int i=0; i<=m; i++)
        scanf("%d",a+i);
    for(int i=0; i<m; i++)
    {
        d=a[i]^a[m];
        itoa(d,ch,2);
        c=0;
        for(int k=0; k<strlen(ch); k++)
        {
            if(check(d,k))
                c++;
        }
        if(c<=k)
            c1++;
    }
    printf("%d\n",c1);
    return 0;
}
