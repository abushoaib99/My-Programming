#include<stdio.h>
int main()

{
    int n,row,col;
    printf("Number of Rows to be printed\n");
    scanf("%d",&n);
    printf("\n\n");
    for(row=n;row>=1;row--){
        for(col=1;col<=n-row;col++){  /*n=input value*/
            printf(" ");
        }
        for(col=1;col<=row;col++){
            printf("*");
        }
        printf("\n");
        }
        return 0;
}



