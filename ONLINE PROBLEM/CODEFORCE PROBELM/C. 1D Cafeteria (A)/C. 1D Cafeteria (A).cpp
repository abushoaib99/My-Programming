#include<bits/stdc++.h>
int main()
{
    int n,a,b,s,s1;
    scanf("%d",&n);
    s=s1=0;
    while(n--)
    {
        scanf("%d%d",&a,&b);
        s=s+a;
        s1=s1+b;
    }
    s1-s>0?printf("%d\n",s1-s):printf("0\n");
    return 0;
}
