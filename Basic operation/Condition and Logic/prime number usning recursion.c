#include<stdio.h>
int main()
{
    int n,f;
    printf("Enter number: ");
    scanf("%d",&n);
    f=prime(2,n);
    if(f==0)
        printf("%d is prime number\n",n);
    else
        printf("%d is not prime number\n",n);
    return 0;
}
int prime(int i,int n)
{
    if(i==n)
        return 0;
    else{
        if(n%i==0)
            return 1;
        else
            return(prime(i+1,n));
    }
}
