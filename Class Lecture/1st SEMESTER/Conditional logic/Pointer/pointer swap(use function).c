#include<stdio.h>
int main()

{
    int x,y;
    scanf("%d %d",&x,&y);
    printf("After Swap:  %d %d",x,y);
    swap(&x,&y);
    printf("\nBefore Swap: %d %d",x,y);
    return 0;
}

void swap(int *w,int *z)

{
    int temp;
    if(*w<*z){
        temp=*w;
        *w=*z;
        *z=temp;
    }
}
