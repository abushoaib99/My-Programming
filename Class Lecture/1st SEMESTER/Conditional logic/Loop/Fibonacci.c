
#include<stdio.h>
int main()

{
    int n;
    scanf("%d",&n);
    int a=-1,b=1,s,i=1;
    printf("The Fibonacci series of %d are\n\n",n);
    while(i<=n)
    {
        s=a+b;
        printf("%3d",s);
        a=b;
        b=s;
        i++;
    }
    return 0;
}

