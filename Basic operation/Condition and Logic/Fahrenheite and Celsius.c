#include<stdio.h>
int main()

{
    float C,F,x,y;
    printf("Enter Fahrenheit: ");
    scanf("%f",&F);
    printf("\nEnter Celsius: ");
    scanf("%f",&C);
    x=(F-32)/1.8;
    y=(1.8*C)+32;
    printf("\nCelsius = %f \n\nFahrenhite = %f\n",x,y);
    return 0;
}
