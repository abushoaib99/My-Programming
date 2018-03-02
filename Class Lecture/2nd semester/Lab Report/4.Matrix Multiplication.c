#include<stdio.h>

int main()
{
    int a[3][3],b[3][3],c[3][3],i,j,k;
    printf("Enter the A matrix\n");
    for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        printf("A[%d][%d] : ",i+1,j+1);
        scanf("%d",&a[i][j]);
        }
    }
    printf("\nEnter the B matrix\n");
    for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        printf("B[%d][%d] : ",i+1,j+1);
        scanf("%d",&b[i][j]);
        }
    }
    printf("\nMultiplication of the 2 matrices :\n\n");
    for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        c[i][j]=0;
        for(k=0;k<3;k++)
            c[i][j]+=a[i][k]*b[k][j];
        printf("\t%d",c[i][j]);
        }
    printf("\n\n");
    }
    return 0;
}
