#include<stdio.h>
#include<math.h>
#define PI 3.1416
int main()

{
    float r;
    printf("Enter Radius of Circle: ");
    scanf("%f",&r);
    printf("Area of Circle = %.4f\n",PI*r*r);
    return 0;
}
