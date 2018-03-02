#include<stdio.h>
int main()
{
    int mark;
    printf("Enter the mark: ");
    scanf("%d",&mark);
    switch(mark/10)
    {
    case 10:
    case 9:
    case 8:
        printf("\nHonours\n");
        break;
    case 7:
    case 6:
        printf("\nFirst division\n");
        break;
    case 5:
        printf("\nSecond division\n");
        break;
    case 4:
        printf("\nThird division\n");
        break;
    default:
        printf("\nFail\n");

    }
    return 0;
}
