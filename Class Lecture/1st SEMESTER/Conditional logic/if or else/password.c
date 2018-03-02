#include<stdio.h>
int main()

{
    int p;
    printf("Enter Password: ");
    take:
        scanf("%d",&p);
        if(p!=100){
            printf("\nRetype Password: ");
            goto take;
        }
        printf("\nYour password: **** \n");
        return 0;
}
