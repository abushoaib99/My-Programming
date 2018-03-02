#include<stdio.h>
int main()
/*display element and search the location of element*/

{
    int num[99],n,i,j,search,loc;

    printf("Enter the element number: ");
    scanf("%d",&n);

    printf("\nEnter the element: ");
    for(i=0;i<n;i++){
        scanf("%d",&num[i]);
    }
    for(j=0;j<n;j++){
        printf(" %d ",num[j]);
    }
    printf("\nEnter search item: ");
    scanf("%d",&search);
    for(loc=0;loc<n;loc++){
        if(search==num[loc]){
            printf("\nThe location of %d at %d\n",search,loc+1);
            break;
        }
    }
    if(search!=num[loc]){
            printf("\n%d are not in this array: ",search);

    }

    return 0;
}
