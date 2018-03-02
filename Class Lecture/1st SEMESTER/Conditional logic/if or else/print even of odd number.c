#include<stdio.h>
int main()

{
    int number;
    printf("Enter number: ");
    scanf("%d",&number);
    if(number % 2==0){
        printf("\n%d is even number\n",number);
    }
    else{
        printf("\n%d is odd number\n",number);
    }
    return 0;
}
