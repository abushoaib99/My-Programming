#include<stdio.h>
int main()

{
    int a,b,c;
    printf("Enter Three number: ");
    scanf("%d %d %d",&a,&b,&c);
    if(a<=b && a<=c)
        printf("\n%d is smallest than %d and %d\n",a,b,c);
    else if(b<=a && b<=c)
        printf("\n%d is smallest than %d and %d\n",b,a,c);
    else
        printf("\n%d is smallest than %d and %d\n",c,a,b);

    return 0;
}
