#include<stdio.h>
int main()

{
    int x,y,*w,*z,temp;
    w=&x;
    z=&y;
    scanf("%d %d",&x,&y);
    printf("Before Swap: %d %d",x,y);
    temp=*w;
    *w=*z;
    *z=temp;
    printf("\nAfter Swap:  %d %d",x,y);
}

