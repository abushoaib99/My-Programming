#include<stdio.h>
int main()

{
    int sub[5],i,total=0;
    printf("Enter 5 number: ");
    for(i=0;i<5;i++){
        scanf("%d", &sub[i]);
        total=total+sub[i];
    }
    printf("\nElement's are: ");
    for(i=0;i<5;i++){
        printf(" %d ", sub[i]);
    }
    printf("\n\nTotal is %d\n",total);
    return 0;
}
