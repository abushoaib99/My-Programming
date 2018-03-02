#include<stdio.h>
int main()

{
    int i,j,k,l,test,n;
    scanf("%d",&test);
    for(i=1;i<=test;i++){
        scanf("%d",&n);
        printf("Case %d:\n",i);
        for(k=n-1;k>=1;k--){
            for(j=1;j<=n-k;j++){
                printf("*");
            }
            printf("\n");
            }
            for(l=0;l<n;l++){
                for(j=1;j<=n-l;j++){
                    printf("*");
                }
                printf("\n");
            }
    }
    return 0;


}
