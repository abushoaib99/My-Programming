//reverse number using pointer
#include<stdio.h>
int main()
{
    int size;
    printf("Enter size of an Array: ");
    scanf("%d", &size);
    int data[size];
    int *p=data;
    printf("Enter %d numbers: ", size);
    while(p<data+size)
    {
        scanf("%d",p);
        p++;
    }
    p=&data[size-1];
    while(p>=&data[0])
    {
        printf("%4d",*p);
        p--;
    }
    return 0;
}
