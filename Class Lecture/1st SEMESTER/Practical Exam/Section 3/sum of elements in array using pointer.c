#include<stdio.h>
int main()
{
    int size, s=0;
    int *p;
    printf("Enter size of an Array: ");
    scanf("%d", &size);
    int data[size];
    p=data;
    printf("Enter %d elements: ", size);
    while(p<data+size)
    {
        scanf("%d", p);
        s=s+*p;
        p++;
    }
    printf("\nSum of %d elements %d", size, s);
    return 0;
}
