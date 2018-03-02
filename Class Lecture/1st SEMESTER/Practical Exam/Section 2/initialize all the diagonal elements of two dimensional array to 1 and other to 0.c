#include<stdio.h>
int main()

{
    int array[10][10],n,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&array[i][j]);
        }
    }
    for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if(array[i][j]%2==0)
        printf(" 1");
    else
        printf(" 0");
            }
            printf("\n");
        }

    return 0;
}
