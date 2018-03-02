#include<stdio.h>
int power(int a,int b)
{
    int sum=pow(a,b);
    return sum;
}
int main()
{
    int ans,c,d;
    scanf("%d %d",&c,&d);
    ans=power(c,d);
    printf("%d",ans);
    return 0;
}
