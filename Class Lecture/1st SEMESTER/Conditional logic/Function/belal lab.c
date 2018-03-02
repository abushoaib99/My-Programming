#include<stdio.h>
void add()
{
    int size,i,s=0;
    printf("\nEnter size of elements: ");
    scanf("%d",&size);
    int v[size];
    for(i=0;i<size;i++){
        scanf("%d",&v[i]);
        s+=v[i];
        }
        printf("\nSummation: %d",s);

}

void multiplication()
{
    int x,y;
    printf("\nEnter two values: ");
    scanf("%d %d",&x,&y);
    printf("Multiplication of 5d and %d= %d",x,y,x%y);
}
void remainder()
{
    int x,y;
    printf("\nEnter tow values: ");
    scanf("%d %d",&x,&y);
    printf("\nRemainder of %d and %d=%d",x,y,x%y);
}
int main()
{
    int ch,s;
    do{
    printf("\nPress 1. Addition\nPress 2. Multiplication\nPress 3. Remainder\nPress 4. Exit");
    printf("\nEnter Your Choice: ");
    scanf("%d",&ch);

    switch(ch)
    {
    case 1:
        add();
        break;
    case 2:
        multiplication();
        break;
    case 3:
        remainder();
        break;
    case 4:
        break;
    default:
        printf("\nYou have Press Wrong option");
    }
    }
    while(ch!=4);
        return 0;
}
