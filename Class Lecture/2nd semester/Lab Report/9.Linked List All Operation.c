#include <stdio.h>
#include<malloc.h>
typedef struct node
{
    int value;
    struct node *next;
}list;

list *start=NULL;
int c;

int ins_beg()
{
    list *new;
    new=malloc(sizeof(list));
    if(new==NULL)
        printf("\n No memory.");
    else
    {
        printf("\nEnter Number:");
        scanf("%d",&new->value);
        if(start==NULL)
        {
            start=new;
            new->next= NULL;
        }
        else
        {
            new->next=start;
            start=new;
        }
    }
    printf("Successful!!");
    return 0;
}

int ins_loc()
{
    list  *tmp=start, *new;
    int h=1;
    int loc;
    display();
    printf("\nAfter which element you want to insert?\n");
    loc=search();
    printf("\nRequired location %d\n", loc+1);
    new=malloc(sizeof(list));
    if(new==NULL)
        printf("Not enough space\n");
    else
    {
        printf("Insert number: ");
        scanf("%d", &new->value);
            while(h<loc)
            {
                tmp=tmp->next;
                h++;
            }
        new->next=tmp->next;
        tmp->next=new;
    }

    printf("Successful!!");
    return 0;
}

int ins_end()
{
    list *new, *tmp;
    new= malloc(sizeof(list));
    if(new==NULL)
        printf("\n Space not given");
    else
    {
        printf("\n Number:");
        scanf("%d",&new->value);
        new->next=NULL;
        if(start==NULL)
            start=new;
        else
        {
            tmp=start;
            while(tmp->next !=NULL)
                    tmp=tmp->next;
            tmp->next=new;
        }
    }
    printf("Successful!!");
    return 0;
}

int search()
{
list *tmp=start;
    int item;
    if(tmp==NULL)
        printf("\n No memory.");
    else
    {
    c=1;
    printf("\n Search:");
    scanf("%d",&item);
    while(tmp->value!= item){
        c++;
        tmp=tmp->next;
    }
    printf("\n LOC= %d", c);
    }
    return c;
}

int display()
{
    list *tmp=start;
    printf("The Current List:");
    while(tmp!=NULL)
    {
        printf("%4d",tmp->value);
        tmp=tmp->next;
    }
    return 0;
}

int delete()
{
    list *tmp,*pre;
    int loc,d;
    printf("\nWhich number do you want to delete?\n");
    loc=search();
    if(loc!=NULL)
    {
        tmp=start;
        pre=start;
        d=1;
        while(d<loc-1)
        {
            pre=pre->next;
            d++;
        }
        d=1;
        while(d<loc)
        {
            tmp=tmp->next;
            d++;
        }
        pre->next=tmp->next;
        free(loc);
    }
    else
        printf("Item not found.\n");
    return 0;
}

int main()
{
    int choice;
    while(choice!=7)
    {
        printf("\n\nLinked List Operations:\n=======================================");
        printf("\n1. Insert at the beginning\n2. Insert at specific location\n3. Insert at the end");
        printf("\n4. Searching\n5. Display\n6. Delete\n7. Exit");
        printf("\n Enter Your Choice:");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1: ins_beg();
                    break;
            case 2: ins_loc();
                    break;
            case 3: ins_end();
                    break;
            case 4: search();
                    break;
            case 5:display();
                    break;
            case 6:delete();
                    break;
            case 7:exit(0);
            default: printf("Wrong input\n");
                    break;
        }
    }
    return 0;
}
