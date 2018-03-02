#include<stdio.h>
//4x + 5y = 14, 5x + 6y = 17 হেল x ও y-এর মান কত?
//a1x + b1y = c1, a2x + b2y = c2।
//x = (b2c1 – b1c2) / (a1b2 – a2b1) এবং y = (a1c2 – a2c1) / (a1b2 – a2b1)
int main()

{
    float a1, a2, b1, b2, c1, c2, x, y;
    printf("Enter the value of a1 = ");
    scanf("%f", &a1);
    printf("Enter the value of a2 = ");
    scanf("%f", &a2);
    printf("Enter the value of b1 = ");
    scanf("%f", &b1);
    printf("Enter the value of b2 = ");
    scanf("%f", &b2);
    printf("Enter the value of c1 = ");
    scanf("%f", &c1);
    printf("Enter the value of c2 = ");
    scanf("%f", &c2);
    x = (b2 * c1 - b1 * c2) / (a1 * b2 - a2 * b1);
    y = (a1 * c2 - a2 * c1) / (a1 * b2 - a2 * b1);
    printf("\nx = %0.2f\ny = %0.2f\n", x, y);
    return 0;
}
