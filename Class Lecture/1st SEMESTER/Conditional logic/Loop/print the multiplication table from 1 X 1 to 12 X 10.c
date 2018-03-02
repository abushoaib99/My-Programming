#include<stdio.h>
main()

{
    int row=1,y,column,colmax =10,rowmax =12;
    printf("\n           MULTIPLICATION TABLE      \n");
    printf(" ________________________________________\n");
    do
        {
            column=1;
            do
            {
                y=row*column;
                printf("%4d",y);
                column++;
            }

        while(column<=colmax);
            printf("\n");
            row++;
        }
        while(row<=rowmax);{
        printf(" ________________________________________\n");
        }


}
