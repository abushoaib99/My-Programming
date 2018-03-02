#include<stdio.h>

void quicksort(int x[],int first,int last)
{
    int s,j,temp,i,k,l;
    if(first<last){
        s=first;
        i=first;
        j=last;
        while(i<j){
            while(x[i]<=x[s])
                i++;
            while(x[j]>x[s])
                j--;
            if(i<j){
                temp=x[i];
                x[i]=x[j];
                x[j]=temp;
            }

        }
        temp=x[s];
        x[s]=x[j];
        x[j]=temp;
        quicksort(x,first,j-1);
        quicksort(x,j+1,last);
    }
}
int main()
{
    int size,i;
    printf("Enter size of the array: ");
    scanf("%d",&size);
    int x[size];
    printf("Enter %d elements: ",size);
    for(i=0;i<size;i++)
        scanf("%d",&x[i]);
    quicksort(x,0,size-1);
    printf("Sorted elements: ");
    for(i=0;i<size;i++)
        printf(" %d",x[i]);
    return 0;
}
