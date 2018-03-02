#include<stdio.h>
#define size 3

int Queue[size]={0};
int rear=-1,front=-1;

void QINSERT()
{
    int data;
    if(front==-1 && rear==-1)
    {
        front=rear=0;
        printf("\n\t ENTER A VALUE IN QUEUE: ");
        scanf("%d",&data);
        Queue[rear]=data;
        rear++;
    }
    else if(rear<size)
    {
        printf("\n\t ENTER A VALUE IN QUEUE: ");
        scanf("%d",&data);
        Queue[rear]=data;
        rear++;
    }
    else
        printf("\nOVERFLOW");
}

void QDELETE()
{
    if (front==rear)
    {
        front=rear=-1;
        printf("\nUNDERFLOW");
    }
    else if(front<size)
        front++;
    else
        front=0;
}

void QSHOW()
{
    int i;
    if(front<rear)
        for(i=front;i<rear;i++)
            printf("\n\t %d",Queue[i]);
    else if(front>rear)
        for(i=front;i>rear;i--)
            printf("\n\t %d",Queue[i]);
    else
        printf("\nUNDERFLOW");
}

int main()
{
    int option;
    while(option!=4)
    {
        printf("\n\nTHIS PROGRAM ABLE TO INSERT  MAXIMUM %d ITEMS...",size);
        printf("\n 1.INSERT\n 2.DELETE\n 3.DISPLAY\n 4.EXIT");
        printf("\n\n Your Option:");
        scanf("%d",&option);
        switch(option){
            case 1:QINSERT();
                break;
            case 2:QDELETE();
                break;
            case 3:QSHOW();
                break;
            case 4:
                printf("\n THANK YOU FOR CHOOSING THIS PROGRAM...\n");
                exit(0);
            default:
                printf("\n Please Enter Valid OPtion.");
                break;
            }
    }
    return 0;
}
