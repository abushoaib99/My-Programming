#include<stdio.h>
int factorial(int n)
{
    int f;
    if(n==1)
        return 1;
    else
        f=n*factorial(n-1);
    return f;
}

int main()
{
    int i,j,n,x;
    float sum=0;
    printf("\nEnter value: ");
    scanf("%d",&x);
    printf("\nEnter no of terms: ");
    scanf("%d",&n);
    for(i=1,j=1;j<=n;i=i+2,j++){
        if(j%2!=0)
            sum+=pow(x,i)/(float)factorial(i);
        else
            sum-=pow(x,i)/(float)factorial(i);
    }
    printf("Result = %f",sum);
}
