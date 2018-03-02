#include<stdio.h>
int main()

{
    int n,i;
    long long int f;
    while(printf("\n\nEnter number = ")!=EOF){
        f=1;
        scanf("%d",&n);
    for(i=1;i<=n;i++){
        f=f*i;
    }
    printf("\nFactorial of %d = %lld\n",n,f);
    }
    return 0;
}
