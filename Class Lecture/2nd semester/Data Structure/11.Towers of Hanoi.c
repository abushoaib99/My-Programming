#include <stdio.h>
#include <stdlib.h>

int total=0;

void tower( int N, int beg, int aux, int end)
{
    if(N==1)
    {
        printf("%d ---> %d \n", beg,end);
        total++;
        return 0;
    }
    else if(N==0)
        printf("\nExit.");
    else
    {
        tower(N-1, beg, end, aux);
        printf("%d ---> %d\n", beg,end);
        total++;
        tower(N-1, aux, beg,end);
        return 0;
    }
}

int main()
{
    int N,beg=1,aux=2,end=3;
    while(N!=0)
    {
        printf("please enter the number of disks for the tower....\n");
        scanf("%d",&N);
        tower(N,beg,aux,end);
        printf("\n\nTotal steps needed: %d\n\n\n", total);
    }
    return 0;
}
