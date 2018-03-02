#include<stdio.h>
struct node
{
    int info;
    struct node *link;
};

struct node *start=NULL;
int c;

void insert_beg()
{
    struct node *new;
    new=(struct node *)malloc(sizeof(struct node));
    if(new==NULL)
        printf("\nOverflow\n");
    else{
        printf("\nEnter number: ");
        scanf("%d",&new->info);
        if(start==NULL){
            start=new;
            new->link=NULL;
        }
        else{
            new->link=start;
            start=new;
        }
    }
    printf("\nSuccessful\n");\

}

void insert_end()
{
    struct node *new,*temp;
    new=(struct node *)malloc(sizeof(struct node));
    if(new==NULL)
        printf("Overflow\n");
    else{
        printf("\nEnter number: ");
    scanf("%d",&new->info);
    new->link=NULL;
    if(start==NULL)
        start=new;
    else{
        temp=start;
        while(temp->link!=NULL)
            temp=temp->link;
        temp->link=new;
    }
    }
    printf("\nSuccessful\n");
}

void insert_loc()
{
    struct node *temp=start,*new;
    int i=1,loc;
    display();
    printf("\n\nAfter which element you want to insert??\n");
    loc=search();
    printf("\nRequired position: %d\n",loc+1);
    new=(struct node *)malloc(sizeof(struct node));
    if(new==NULL)
        printf("\nOverflow\n");
    else{
        printf("\nEnter item: ");
        scanf("%d",&new->info);
        while(i<loc){
            temp=temp->link;
            i++;
        }
        new->link=temp->link;
        temp->link=new;
    }
    printf("\nSuccessful\n");
}

int search()
{
    struct node *temp=start;
    int item;
    if(temp==NULL)
        printf("\nUnderflow\n");
    else{
        c=1;
        printf("\nEnter search item: ");
    scanf("%d",&item);
    while(temp->info!=item){
        c++;
        temp=temp->link;
    }
    printf("\nLocation is: %d\n",c);
    }
    return c;
}

void display()
{
    struct node *temp=start;
    if(start==NULL)
        printf("\nUnderflow\n");
    else{
        printf("\nList is: ");
    while(temp!=NULL){
        printf("%4d",temp->info);
        temp=temp->link;
    }
    }

}

int main()
{
    int n;
    while(n!=0){
        printf("\n\nPress 1 insert Beginning\nPress 2 insert Ending\nPress 3 insert at location\nPress 4 Display\nPress 0 Exit\n");
        printf("\nPress: ");
        scanf("%d",&n);
        switch(n)
        {
        case 1:
            insert_beg();
            break;
        case 2:
            insert_end();
            break;
        case 3:
            insert_loc();
            break;
        case 4:
            display();
            break;
        case 0:
            break;
        }
    }
    return 0;

}

