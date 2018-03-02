#include<stdio.h>
int main()
{
    int n;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int i,p,a[n];
    printf("\nEnter element of array: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("\nEnter position for item be deleted: ");
    scanf("%d",&p);
    for(i=p;i<n-1;i++){
        a[i]=a[i+1];
    }
    printf("\nAfter Deleted\n");
    for(i=0;i<n-1;i++){
       printf("%3d",a[i]);
    }
    return 0;
}
