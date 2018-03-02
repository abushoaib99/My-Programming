#include<bits/stdc++.h>
int main()
{
    int t,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        n=(((((((n*567)/9)+7492)*235)/47)-498)/10);
        n=abs(n)%10;
        printf("%d\n",n);
    }
    return 0;
}
