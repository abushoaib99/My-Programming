#include<stdio.h>
#include<math.h>

int main()

{
    float F,C;
    printf("Enter Fahrenheit = ");
    scanf("%f",&F);
    printf("\nCelsius = %.2f\n",(F-32)/1.8);
    printf("\n\nEnter Celsius = ");
    scanf("%f",&C);
    printf("\nFahrenheit = %.2f\n",1.8*C+32);
    getchar();
    getchar();
    return 0;
}
