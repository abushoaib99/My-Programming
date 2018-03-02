#include<stdio.h>
int main()

{
    int row,col;
    printf(" ________________________________________\n");
    printf("\n           MULTIPLICATION TABLE      \n");
    printf(" ________________________________________\n");
    for(row=1;row<=12;row++){
        for(col=1;col<=10;col++){
            printf("%4d",row*col);
        }
        printf("\n");

    }
    printf(" ________________________________________\n");
    return 0;
}
