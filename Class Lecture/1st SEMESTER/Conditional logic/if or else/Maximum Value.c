#include<stdio.h>
int main()

{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>=b && a>=c){
        printf("\n%d is max value than %d and %d\n",a,b,c);
    }
    else if(b>=a && b>=c){
        printf("\n%d is max value than %d and %d\n",b,a,c);
    }
    else if(c>=a && c>=b){
        printf("\n%d is max value than %d and %d\n",c,a,b);
    }
    return 0;
}
