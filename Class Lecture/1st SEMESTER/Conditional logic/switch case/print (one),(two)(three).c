#include<stdio.h>
int main()

{
    int input;
    wrong:
    printf("Enter the value (1 to 4): ");
    scanf("%d",&input);
    switch(input){
case 1:
    printf("\nONE\n");
    break;
case 2:
    printf("\nTWO\n");
    break;
case 3:
    printf("\nTWO\n");
    break;
case 4:
    printf("\nFOUR\n");
    break;
default:
    printf("\nWrong Input\n\n");
    goto wrong;
    }
}
