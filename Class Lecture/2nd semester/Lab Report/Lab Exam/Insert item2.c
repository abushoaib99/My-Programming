#include<stdio.h>
int main()

{
    int a[10],n,i,p,item;
    printf("Enter size of array: ");
    scanf("%d",&n);
    printf("\nEnter element of array: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("\nEnter item: ");
    scanf("%d",&item);
    for(i=0;i<n;i++){
        if(a[i]<=item && item<=a[i+1]){
            p=i+1;
            break;
        }
    }
    for(i=n;i>p;i--){
        a[i]=a[i-1];
    }
    a[p]=item;
    printf("\nInsert item: %d\n",item);
    for(i=0;i<n+1;i++){
        printf("%4d",a[i]);
    }
    return 0;
}

