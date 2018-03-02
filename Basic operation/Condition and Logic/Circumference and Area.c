#include<stdio.h>
int main()

{
    float r,x,y;
    printf("Enter value of r: ");
    scanf("%f",&r);
    x=2*3.1416*r;
    y=3.1416*r*r;
    printf("\nCircumference = %f \n\nArea = %f\n",x,y);
    return 0;
}
