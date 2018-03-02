#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,s,s1;
    scanf("%d %d %d",&a,&b,&c);
    s=1,s1=0;;
    for(int i=1;i<=c;i++)
    {
        s=a*i;
        s1+=s;
    }
    if(s1<=b)
        printf("0\n");
    else
    printf("%d\n",s1-b);
    return 0;
}
