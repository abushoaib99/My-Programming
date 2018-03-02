#include<stdio.h>
int main()
{
    int n,i,sum=0;
    for(i=101;i<500;i++){
        if(i%9==0){
             sum=sum+i;
             printf("%5d",i);
        }
    }
    printf("\n\nThe sum of all integer which divisible by 9 = %d\n",sum);
    return 0;
}
