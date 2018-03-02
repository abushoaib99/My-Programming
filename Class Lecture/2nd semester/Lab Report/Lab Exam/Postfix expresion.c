#include<stdio.h>
#define size 50
int s[size],top=-1;
push(item)
{
    s[++top]=item;
}
int pop()
{
    return (s[top--]);
}
int main()
{
    char postfix[size],ch;
    int i=0,op1,op2;
    printf("\nEnter Postfix Expression: ");
    scanf("%s",postfix);
    while((ch=postfix[i++])!='\0'){
        if(isdigit(ch))
            push(ch-'0');
        else{
            op2=pop();
            op1=pop();
            switch(ch)
            {
            case '+':
                push(op1+op2);
                break;
            case '-':
                push(op1-op2);
                break;
            case '*':
                push(op1*op2);
                break;
            case '/':
                push(op1/op2);
                break;
            }
        }
    }
    printf("\nResult of this Expression = %d\n",s[top]);
    return 0;
}
