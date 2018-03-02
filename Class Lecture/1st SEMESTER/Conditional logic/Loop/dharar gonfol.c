#include<stdio.h>
int main()

{
    int i=1,n,x;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    while(i<=n){
            x=pow(3,i);
    printf("\n\nPower(3,%d) = %d\n\n",i,x);
    i++;
    }
    return 0;
}
