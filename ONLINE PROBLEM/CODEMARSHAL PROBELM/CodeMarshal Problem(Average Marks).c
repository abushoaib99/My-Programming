#include<stdio.h>
int main()

{
    int test,n,num,i,j,sum,avg;
    scanf("%d",&test);
    for(j=0;j<test;j++){
        scanf("%d",&n);
        sum=0;
    printf("Case %d: ",j+1);
    for(i=0;i<n;i++){
        scanf("%d",&num);
        sum=sum+num;
    }
    printf("%d\n",sum/n);
    }
    return 0;
}
