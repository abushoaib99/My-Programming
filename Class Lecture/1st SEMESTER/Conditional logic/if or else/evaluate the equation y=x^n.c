#include<stdio.h>
int main()

{
    int count=1,n,x,y=1;
    printf("Enter the value of x and n: ");
    scanf("%d %d",&x,&n);
    while(count<=n){
        y=y*x;
        count++;
    }
    printf("\nx=%d; n=%d; x to power n=%d\n",x,n,y);
    return 0;
}
