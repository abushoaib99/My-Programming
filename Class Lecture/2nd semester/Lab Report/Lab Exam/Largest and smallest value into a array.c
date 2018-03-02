#include<stdio.h>
int larg()
{
    int n;
    printf("\nEnter size of array: ");
    scanf("%d",&n);
    int a[n],i,loc=0;
    printf("\nEnter element of array: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int max=a[0];
    for(i=0;i<n;i++){
        if(max<a[i]){
            loc=i;
            max=a[i];
        }
    }
    printf("\nThe location %d is the Largest element %d of the array\n",loc+1,max);
    return 0;
}

int small()
{
    int n;
    printf("\nEnter size of array: ");
    scanf("%d",&n);
    int a[n],i,loc=0;
    printf("\nEnter element of array: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int min=a[0];
    for(i=0;i<n;i++){
        if(min>a[i]){
            loc=i;
            min=a[i];
        }
    }
    printf("\nThe location %d is the smallest element %d of the array\n",loc+1,min);
    return 0;
}

int main()
{
    int n;
    while(n!=3){
            printf("\nPress 1 for Largest element\nPress 2 for Smallest element\nPress 3 for Terminate\n");
            printf("\nPress: ");
            scanf("%d",&n);
            switch(n){
            case 1:
                larg();
                break;
            case 2:
                small();
                break;
            case 3:
                break;

            }
    }
    return 0;

}
