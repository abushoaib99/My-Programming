#include<stdio.h>
int main()

{
    int matrix1[10][10],matrix2[10][10],multiplies[10][10]={0},i,j,k,r,c,p,n;
    while(printf("\n\nEnter Row of 1st matrix: ")!=EOF){
        scanf("%d",&r);
    printf("\nEnter Column of 1st matrix: ");
    scanf("%d",&c);
    printf("\nEnter element of 1st Matrix: \n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
        scanf("%d",&matrix1[i][j]);
        }
    }
    printf("\nEnter Row of 2nd matrix: ");
    scanf("%d",&p);
    printf("\nEnter Column of 2nd matrix: ");
    scanf("%d",&n);
    if(c!=p)
        printf("\nMatrix can't multiplies each other\n");

    else{
        printf("\nEnter elements of 2nd matrix: \n");
        for(i=0;i<p;i++){
            for(j=0;j<n;j++){
                scanf("%d",&matrix2[i][j]);
            }
        }
        for(i=0;i<r;i++){
            for(j=0;j<n;j++){
                for(k=0;k<p;k++){
                    multiplies[i][j]=multiplies[i][j]+matrix1[i][k]*matrix2[k][j];
                }
            }
        }
        printf("\nProduct are 2 matrix: \n");
        for(i=0;i<r;i++){
            for(j=0;j<n;j++){
                printf("%d\t",multiplies[i][j]);

            }
            printf("\n");
        }
    }
    }

    return 0;

}
