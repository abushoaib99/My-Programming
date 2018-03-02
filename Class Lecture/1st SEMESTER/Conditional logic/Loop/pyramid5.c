#include<stdio.h>
int main()

{
    int no;
    printf("Number of Rows to be printed\n");
    scanf("%d",&no);
    int row,col;
    for(row=1;row<=no;row++){
        for(col=no-row;col>=1;col--){
            printf(" ");
        }
        for(col=1;col<=row;col++){
        printf("* ");
        }
        printf("\n");
    }
    return 0;
}

