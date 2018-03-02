#include<bits/stdc++.h>
using namespace std;
int fib[5009][1050];
void fibonacci()
{
    fib[0][0]=0;
    fib[1][0]=1;
    fib[2][0]=1;
    for(int i=3; i<=5000; ++i)
    {
        for(int j=0; j<1050; ++j)
        {
            fib[i][j]+=fib[i-2][j]+fib[i-1][j];
            if(fib[i][j]>9)
            {
                fib[i][j+1]=fib[i][j]/10;
                fib[i][j]%=10;
            }
        }
    }

}
int main()
{
    fibonacci();
    int n,i;
    while(scanf("%d",&n)==1)
    {
        for(i=1049; i>0; i--)
        {
            if(fib[n][i]!=0)
                break;
        }
        printf("The Fibonacci number for %d is ",n);
        for(; i>=0; i--)
            printf("%d",fib[n][i]);
        printf("\n");
    }
}
