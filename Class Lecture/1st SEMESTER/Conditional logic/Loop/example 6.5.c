#include<stdio.h>
int main()
/*the program reads a list of positive values and calculates their average.
the for loop is written to read 1000 values.
However,if we want the program to calculate the calculate the average of any set of values less than 1000,
then we must enter a 'negative' number after the last value in the list,to mark the end of input.*/


{
    int m;
    float x,sum,average;
    printf("This program computers the average of a set of numbers\n");
    printf("Enter values one after another\n");
    printf("Enter a MEGATIVE number at the end.\n\n");
    sum=0;
    for(m=1;m<=1000;m++){
        scanf("%f",&x);
        if(x<0)
            break;
        sum+=x;
    }
    average=sum/(float)(m-1);
    printf("\n");
    printf("Number of values = %d\n",m-1);
    printf("Sum              = %f\n",sum);
    printf("Average          = %f\n",average);
    return 0;
}

