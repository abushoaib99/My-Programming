#include<stdio.h>
int main()

{
    int limit;
    scanf("%d",&limit);
    fibo(limit);
}

int fibo(int limit)
{
    int a,b,s,i=1;
    a=-1;
    b=1;
    while(i<=limit)
    {
        s=a+b;
        printf("%3d",s);
        a=b;
        b=s;
        i++;
    }

}
