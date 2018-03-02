#include<stdio.h>
int main()

{
    int i,j,n,k,l,sum=0;
    scanf("%d",&l);

    for(k=1;k<=l;k++){
            if(l>=9)
            break;
        scanf("%d",&n);
    if(n>9)
        break;

        sum++;
        printf("case %d:\n",sum);

    for(i=1;i<=n;i++){
            for(j=1;j<=i;j++){
                    printf("%d",j);
                }
                printf("\n");
            }
            }
            return 0;

}
