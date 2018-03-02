#include <stdio.h>
#include <stdlib.h>

int total=0;
void tower(int N,int beg,int aux,int end)
{
    if(N==1){
        printf("%d ---> %d \n",beg,end);
        total++;
        }
    else{
        tower(N-1,beg,end,aux);
        printf("%d ---> %d\n",beg,end);
        total++;
        tower(N-1,aux,beg,end);
        }
}

int main()
{
    int N,beg=1,aux=2,end=3;
    printf("please enter the number of disks for the tower....\n");
    scanf("%d",&N);
    tower(N, beg,aux,end);
    printf("\n\ntotal steps needed: %d\n\n\n", total);
    getchar();
    getchar();
    return 0;
}
