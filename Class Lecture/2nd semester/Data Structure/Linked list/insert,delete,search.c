#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int value;
    struct node *next;
}list;

list *start=NULL;
int c;

void ins_beg()
{
    list *m;
    m= malloc(sizeof(list));
    if(m==NULL){

        printf("\nOverflow\n");
    }
    else{
    printf("\nInsert Number: ");
    scanf("%d",&m->value);
    if(start==NULL)
    {
        start=m;
        m->next= NULL;
    }
    else
    {
        m->next=start;
        start=m;
    }
    }

}

void ins_loc()
{

    list  *tmp=start, *m;
    int h=1;
    int loc;
    if(start==NULL)
        printf("\nOverflow\n");
    else{
        printf("\nAfter which element you want to insert?\n");
        loc=search();
        printf("\nRequired location %d\n",loc+1);
        m=malloc(sizeof(list));
        if(m==NULL)
        printf("Not enough space\n");
        else
            {
                printf("\nInsert number: ");
                scanf("%d", &m->value);
                while(h<loc){
                h++;
                tmp=tmp->next;
            }
            m->next=tmp->next;
            tmp->next=m;
        }
    }
}

void ins_end()
{
list *m, *tmp;
    m= malloc(sizeof(list));
    if(m==NULL){

        printf("\n Space not given");
    }
    else{
    printf("\nInsert Number: ");
    scanf("%d",&m->value);
    m->next=NULL;

    if(start==NULL)
    {
        start=m;
    }
    else
    {
        tmp=start;
        while(tmp->next !=NULL)
                tmp=tmp->next;
        tmp->next=m;
    }
    }

}

int search()
{
    list *tmp=start;
    int item;
    c=1;
    if(start==NULL)
        printf("\nList is empty\n");
        else{
            printf("\nSearch: ");
    scanf("%d",&item);
    while(tmp->value!= item){
        c++;
        tmp=tmp->next;
    }
    printf("\nLOC = %d", c);
    return c;
        }

}

void delete_item()
{
    list *r;
    if(start==NULL)
        printf("\nList is empty\n");
    else{
        r=start;
        start=start->next;
        free(r);
    }
}

void display()
{
    list *tmp=start;
    if(start==NULL)
        printf("\nList is empty\n");
    else{
        while(tmp!=NULL)
    {
        printf("%4d", tmp->value);
        tmp=tmp->next;
    }
    }

}

int main()
{
    int choice;
    while(choice!=7)
    {
        printf("\n1. Insert at the beginning\n2. Insert at specific location\n3. Insert at the end\n4. Searching\n5. Delete\n6. Display\n7. Exit\n");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                ins_beg();
                break;
            case 2:
                ins_loc();
                break;
            case 3:
                ins_end();
                break;
            case 4:
                search();
                break;
            case 5:
                delete_item();
                break;
            case 6:
                display();
                break;
            case 7:
                exit(0);
            default:
                printf("Wrong input\n");
                break;
        }
    }
    return 0;
}
