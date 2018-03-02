#include<stdio.h>
struct node
{
    int info;
    struct node *link;
};

struct node *start=NULL;
int c;

void insert()
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

void delet_beg()
{
    struct node *temp;
    if(start==NULL)
        printf("\nUnderflow\n");
    else{
        temp=start;
        start=start->link;
        free(temp);
    }
}

void delet_end()
{
    struct node *temp,*t;
    if(start==NULL)
        printf("\nUnderflow\n");
    else{
        temp=start;
        while(temp->link!=NULL){
            t=temp;
            temp=temp->link;
        }
            free(t->link);
            t->link=NULL;
    }
}

void delet_loc()
{
    struct node *temp,*pre;
    int i,loc;
    printf("\nWhich number you want to delete\n");
    loc=search();
    if(loc==NULL)
        printf("\nUnderflow\n");
    else{
        temp=start;
        pre=start;
        i=1;
        while(i<loc-1){
            pre=pre->link;
            i++;
        }
        i=1;
        while(i<loc){
            temp=temp->link;
            i++;
        }
        pre->link=temp->link;
        free(loc);
    }
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
        printf("\n\nPress 1 inset into list\nPress 2 Delete Begging node\nPress 3 Delete Last node\nPress 4 Delete given Item\nPress 5 Display\nPress 0 Exit\n");
        printf("\nPress: ");
        scanf("%d",&n);
        switch(n)
        {
        case 1:
            insert();
            break;
        case 2:
            delet_beg();
            break;
        case 3:
            delet_end();
            break;
        case 4:
            delet_loc();
            break;
        case 5:
            display();
            break;
        case 0:
            break;
        }
    }
    return 0;

}

