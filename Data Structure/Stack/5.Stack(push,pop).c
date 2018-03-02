#include<stdio.h>
#define max 20
int top = -1,data[max],item;

void display()
{
    int i;
    for(i=top;i>=0;i--)
        printf(" %d\n",data[i]);
}

void push()
{
    printf("Give the item: ");
    scanf("%d",&item);
    if(top==(max-1))
        printf("OVERFLOW\n");
    else
    {
        ++top;
        data[top]=item;
    }
    display();
}

void pop()
{
    if(top==-1)
        printf("UNDERFLOW\n");
    else
    {
        item=data[top];
        --top;
    }
    display();
}

int main()
{
    int n;
    while(n!=3)
    {
        printf("1)press 1 for PUSH\n2)press 2 for POP\n3)press 3 for Exit\n");
        scanf("%d",&n);
        if(n==1)
            push();
        else if(n==2)
            pop();
        else if(n!=3)
            printf("Wrong press.Try again.\n");
    }
    return 0;
}
