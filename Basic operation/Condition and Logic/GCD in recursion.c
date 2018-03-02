#include<stdio.h>
int main()
{
    int a,b,result;
    printf("Enter tow number: ");
    scanf("%d %d",&a,&b);
    result=gcd(a,b);
    printf("\nGCD = %d\n",result);
    return 0;
}
int gcd(int a,int b)
{
    while(a!=b){
        if(a>b)
            return gcd(a-b,b);
        else
            return gcd(a,b-a);
    }
    return a;
}
