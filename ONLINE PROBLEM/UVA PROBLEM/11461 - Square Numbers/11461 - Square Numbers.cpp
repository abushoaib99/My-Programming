#include<bits/stdc++.h>
int main()
{
    int a,b,n,c;
    while(scanf("%d%d",&a,&b)&&(a+b))
    {
        c=0;
        for(int i=a;i<=b;++i)
        {
            n=sqrt(i);
            if(n*n==i)
                c++;
        }
        printf("%d\n",c);
    }
    return 0;
}
