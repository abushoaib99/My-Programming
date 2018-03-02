#include<stdio.h>
int main()

{
    int la[10],n,i,p,item;
    printf("Enter size of array: ");
    scanf("%d",&n);
    printf("\nEnter element of array: ");
    for(i=0;i<n;i++){
        scanf("%d",&la[i]);
    }
    printf("\nEnter position: ");
    scanf("%d",&p);
    printf("\nEnter item: ");
    scanf("%d",&item);
    for(i=n;i>p;i--){
        la[i]=la[i-1];
    }
    la[p]=item;
    printf("\nInsert item: %d\n\nLocation: %d\n",item,p);
    printf("\n");
    for(i=0;i<n+1;i++){
        printf("%4d",la[i]);
    }
}
