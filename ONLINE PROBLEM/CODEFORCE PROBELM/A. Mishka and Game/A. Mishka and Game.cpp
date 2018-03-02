#include<bits/stdc++.h>
int main()
{
    int n,a,b,sum=0,sum1=0;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d%d",&a,&b);
        if(a>b)
            sum++;
        else if(b>a)
            sum1++;
    }
    if(sum>sum1)
        printf("Mishka\n");
    else if(sum1>sum)
        printf("Chris\n");
    else
        printf("Friendship is magic!^^\n");
    return 0;
}
