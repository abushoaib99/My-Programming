#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,s,x;
    printf("Enter the 3 side of triangle: ");
    scanf("%f %f %f",&a,&b,&c);
    s=(a+b+c)/2;
    x=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("\nArea of triangle = %f\n",x);
    return 0;
}
