#include<stdio.h>
int main()

{
    int a,c[10000],i,j;
    while(printf("\n\nEnter Decimal number: ")!=EOF){
        i=0;
        scanf("%d",&a);
    while(a>0){
        c[i++]=a%2;
        a=a/2;
    }
    printf("\Binary number = ");
    for(j=i-1;j>=a;j--){
        printf("%d",c[j]);
    }
    }

    return 0;
}
