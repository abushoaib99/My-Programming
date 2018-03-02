#include<stdio.h>
int main()

{
    int n,m,i,j,k,temp;
    scanf("%d %d",&n,&m);
    int a[n],b[m],c[n+m];
    printf("Enter element of 1st array: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("\nEnter element of 2nd array: ");
    for(i=0;i<m;i++){
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++){
        c[i]=a[i];
    }
    for(j=0;j<m;j++){
        c[i]=b[j];
        i++;
    }
    for(i=0;i<n+m;i++){
        for(j=0;j<(n+m)-i-1;j++){
            if(c[j]>c[j+1]){
               temp=c[j];
               c[j]=c[j+1];
               c[j+1]=temp;
            }
        }
    }
    printf("\nMarge 1st and 2nd array: \n");
    for(i=0;i<n+m;i++){
        printf("%d\t",c[i]);
    }
}
