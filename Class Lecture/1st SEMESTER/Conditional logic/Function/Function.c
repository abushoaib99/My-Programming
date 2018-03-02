#include <stdio.h>
#include <math.h>

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
    // f(n)= x-x3/3!+x5/5!-...n
    int i,j,terms;
    double sum=0.0,x;
    printf("\n Enter the value of x in radius: ");
    scanf("%lf",&x);
    printf("\n Enter the power of end terms: ");
    scanf("%d", &terms);

    for(i=1, j=1; j<=terms;i=i+2,j++){
        if(j%2!=0)
        sum+= pow(x,i)/(double)factorial(i);

        else
        sum-= pow(x,i)/(double)factorial(i);
    }
   printf("\n Sin of %.2lf is: %lf",x,sum);
   return 0;
}
