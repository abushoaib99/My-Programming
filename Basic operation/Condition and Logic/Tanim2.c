#include<stdio.h>
int main()

{
    int n,i,j,k,l,m,p;
    scanf("%d",&n);
    for(i=0;i<n*2;i++){
        printf("_");
    }
    printf("\n\n");
    for(i=0;i<n;i++){
        for(j=0;j<i;j++){
            printf(" ");
        }
        for(k=0;k<1;k++){
            printf("\\");
        }
        for(l=(n*2)-i;l>=i+3;l--){
            printf(" ");
        }
        for(m=0;m<1;m++){
            printf("/");
        }
        printf("\n\n");
    }
    return 0;
}
