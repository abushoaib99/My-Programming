#include<stdio.h>
int main()

{
    int n;
    abc:
        printf("Enter value: ");
        scanf("%d",&n);
        if(n!=20){
            goto abc;
        }
        printf("\n%d\n",n);
        return 0;
}
