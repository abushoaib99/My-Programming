#include<stdio.h>
int main()

{
    int table[2][3],i,j,total=0;
    printf("Enter 6 value: ");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            scanf("%d",&table[i][j]);
            }
        }
        printf("\nValues are\n");
        for(i=0;i<2;i++){
            for(j=0;j<3;j++){
                printf("\t%d",table[i][j]);
                total=total+table[i][j];
                }
                printf("\t%d",total);
                total=0;
                printf("\n");
                }
                return 0;
}
