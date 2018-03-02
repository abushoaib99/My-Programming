#include <stdio.h>
int add(int n)
{
    int sum;
    if(n==1)
        return n;
    sum=n+add(n-1);
    return sum;
}
int main()
{
    int s;
    s = add(3);
    printf("%d",s);
    return 0;
}
