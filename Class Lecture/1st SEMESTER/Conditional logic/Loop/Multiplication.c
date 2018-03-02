#include<stdio.h>
int main()

{
    int test,n,i,j;
    scanf("%d",&test);
    for(i=1;i<=test;i++){
        scanf("%d",&n);
        printf("Case %d:\n",i);
        for(j=1;j<=10;j++){
            printf("%d * %d = %d\n",n,j,n*j);
        }
    }
    return 0;
}
