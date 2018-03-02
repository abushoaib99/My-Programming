#include<stdio.h>
int main()
{   //char month[120];
    //gets(month);

    char month[12][20]={"january","february","march","april","may","june","july","august","september","october","november","december"};
    int i;
    printf("\nEnter the month value: ");
    scanf("%d",&i);
    if(i<1 || i>12)

        printf("\nIncorrect value !!\nPress any key to terminate the program...\n\n");

        else if(i!=12)

            printf("\n%s followed by %s\n",month[i-1],month[i]);

        else
            printf("\n%s followed by %s\n",month[i-1],month[0]);
        return 0;
}

