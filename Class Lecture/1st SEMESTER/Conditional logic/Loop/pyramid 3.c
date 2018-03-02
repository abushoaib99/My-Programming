#include<stdio.h>
int main()

{
    int i,j,num,n;
    scanf("%d",&n);
    num=0;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
                if(num==n){
                    break;
                }

            printf(" %d ",++num);
        }
        printf("\n");
    }
    return 0;
}
