#include<stdio.h>
int f(int n)
{
    if(n==0)
        return 1;
    else
        return n*f(n-1);
}

int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    printf("\nFactorial of %d = %d\n",n,f(n));
    return 0;
}
