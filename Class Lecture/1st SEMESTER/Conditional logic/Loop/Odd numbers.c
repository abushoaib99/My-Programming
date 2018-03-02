#include<stdio.h>
int main()

{
    int i,j,n,m,test,count=0,sum;
    scanf("%d",&test);
    for(j=1;j<=test;j++){
        count++;
        scanf("%d %d",&m,&n);
        sum=0;
    for(i=m;i<=n;i++){
        if(i%2==1)
            sum=sum+i;
        }
        printf("Case %d: %d\n",count,sum);
    }
    return 0;

}
