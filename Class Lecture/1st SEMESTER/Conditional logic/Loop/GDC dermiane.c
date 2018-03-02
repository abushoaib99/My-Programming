#include<stdio.h>
int main()

{
    int a,b,x;
    printf("Enter the value of a and b: ");
    scanf("%d %d",&a,&b);
    if(a<b){
        x=a;
    }
    else if(a>b){
        x=b;
    }
    for(; x>=1;x--){
        if(a%x==0 && b%x==0){

            break;
        }
    }
    printf("\n\nGCD is %d\n\n",x);
    return 0;
}
