#include<stdio.h>
int main()

{
    int n;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int a[n],i,loc=0,max;
    printf("\nEnter element of array: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=1;i<n;i++){
        if(max<a[i]){
            loc=i;
            max=a[i];
        }
    }
    printf("\n\nLocation %d of the  Largest value %d of the array\n",loc+1,max);
    return 0;
}
