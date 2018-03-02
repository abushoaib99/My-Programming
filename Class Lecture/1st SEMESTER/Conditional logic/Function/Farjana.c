#include<stdio.h>
void linear()
{
    int size,i,j,search,f=-1;
    printf("\nEnter size of array: ");
    scanf("%d",&size);
    int v[100];
    printf("\nEnter element of array: ");
    for(i=0;i<size;i++){
        scanf("%d",&v[i]);
        }
        printf("\nEnter Search Item: ");
        scanf("%d",&search);
        for(i=0;i<size;i++){
            if(search==v[i]){
            f=1;
            printf("\n%d location is %d\n",search,i+1);
            break;
            }
        }
        if(f!=1)
        printf("\n%d not find out in array\n",search);
}


void binary()
{
    int n,i,j,loc=-1,m,s,l=0;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int a[n];
    int h=n-1;
    printf("Enter element of array: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter Search item: ");
    scanf("%d",&s);
    while(l<=h && loc==-1){
        m=(l+h)/2;
        if(s==a[m]){
            loc=m+1;
        }
        else if(s<a[m]){
            h=m-1;
        }
        else
            l=m+1;
    }
    if(loc!=-1)
        printf("\nLocation of %d is %d\n",s,loc);
    else
        printf("\nItem not found\n");
}

int main()
{
    int ch,s;
   while(ch!=3){
    printf("\nPress 1. Linear Search\nPress 2. Binary Search\nPress 3. Exit");
    printf("\nEnter Your Choice: ");
    scanf("%d",&ch);

    switch(ch)
    {
    case 1:
        linear();
        break;
    case 2:
        binary();
        break;
    case 3:
        break;
    default:
        printf("\nYou have Press Wrong option");
    }
    }

        return 0;
}

