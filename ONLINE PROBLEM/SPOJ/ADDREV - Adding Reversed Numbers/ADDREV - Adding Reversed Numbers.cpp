#include<bits/stdc++.h>
int rev(int n)
{
    int r=0;
    while(n>0)
    {
        r=r*10+(n%10);
        n/=10;
    }
    return r;
}

int main()
{
    int t,n1,n2,a,b,sum;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&n1,&n2);
        a=rev(n1);
        b=rev(n2);
        sum=a+b;
        printf("%d\n",rev(sum));
    }
    return 0;
}
