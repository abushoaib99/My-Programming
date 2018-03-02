#include<stdio.h>
/*x + y = 15, x – y = 5 হেল x ও y-এর মান কত?*/
int main()

{
    float x, y, x_plus_y, x_minus_y;
    printf("Enter the value of x + y: ");
    scanf("%f", &x_plus_y);
    printf("Enter the value of x - y: ");
    scanf("%f", &x_minus_y);
    x = (x_plus_y + x_minus_y) / 2;
    y = (x_plus_y - x_minus_y) / 2;
    printf("\nx = %0.2f\ny = %0.2f\n", x, y);
    return 0;
}

