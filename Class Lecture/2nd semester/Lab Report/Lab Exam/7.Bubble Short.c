#include<stdio.h>

int i,j,temp;
void asc_sort(int size, int data[])
{
    for(i=0;i<size-1;i++){
        for(j=0;j<size-1;j++){
            if(data[j]>data[j+1]){
                temp=data[j];
                data[j]=data[j+1];
                data[j+1]=temp;
            }
        }
    }
    for(i=0;i<size;i++)
        printf("%4d",data[i]);
}
void des_sort(int size, int data[])
{
    for(i=0;i<size-1;i++){
        for(j=0;j<size-1;j++){
            if(data[j]<data[j+1]){
                temp=data[j];
                data[j]=data[j+1];
                data[j+1]=temp;
            }
        }
    }
    for(i=0;i<size;i++)
        printf("%4d",data[i]);
}


int main()
{
    int data[100],size,choice;
    printf("Number of item to sort out: ");
    scanf("%d",&size);
    printf("Enter %d number one by one: ",size);
    for(i=0;i<size;i++)
        scanf("%d",&data[i]);
    printf("How you want sort out:\n1. Ascending Order\n2. Descending Order.\n");
    printf("Your choice: ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1: asc_sort(size, data);
                break;
        case 2: des_sort(size, data);
                break;
    }
    return 0;
}
