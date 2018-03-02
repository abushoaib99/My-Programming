#include<stdio.h>
int main()

{
    int i;
    printf("\n\n");
    for(i=65;i<=122;i++){
    if(i>90 && i<97)
        continue;
    printf("|%d - %c|  ",i,i);
    }
    printf("\n");
    return 0;
}
