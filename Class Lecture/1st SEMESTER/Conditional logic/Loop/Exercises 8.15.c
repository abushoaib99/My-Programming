#include<stdio.h>
int main()

{
    int n,no;
    printf("Number of Row to be Printed: ");
    scanf("%d",&n);
    int row,col;
    for(row=0;row<n;row++){
        for(col=0;col<n-row;col++){
            printf("2");
        }
        no=1;
        for(col=0;col<=row;col++){
            printf(" %d",no);
            no=no*(row-col)/(col+1);
        }
        printf("\n");
    }
    return 0;
}
