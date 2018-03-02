#include<stdio.h>
int main()

{
    int n,row,col,i;
    printf("Number of Rows to be printed\n");
    scanf("%d",&n);
    printf("\n\n");
    for(i=1;i<=2*n-1;i++){
        printf("*");
    }
    printf("\n");
    for(row=1;row<=n;row++){
        for(col=1;col<=n-row;col++){  /*n=input value*/
            printf("*");
        }
        for(col=1;col<=2*row-1;col++){
            printf(" ");
        }
        for(col=1;col<=n-row;col++){  /*n=input value*/
            printf("*");
            }
            printf("\n");
            }
    for(row=n-1;row>=1;row--){
        for(col=1;col<=n-row;col++){  /*n=input value*/
           printf("*");
    }
    for(col=1;col<=2*row-1;col++){
         printf(" ");
    }
    for(col=1;col<=n-row;col++){  /*n=input value*/
           printf("*");
           }
           printf("\n");
    }
    for(i=1;i<=2*n-1;i++){  /*n=input value*/
        printf("*");
    }
    printf("\n\n");
    return 0;
}



