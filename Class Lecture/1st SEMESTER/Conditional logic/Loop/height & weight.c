#include<stdio.h>
int main()

{
    int count=0,i;
    float height,weight;
    printf("enter the weight and  weight:  ");


    for(i=1;i<=5;i++){
        scanf("%f %f",&height,&weight);
        if(weight<50 && height>170)
            count++;
    }
    printf("number of boys with weight < 50 \n and height > 170 cm=%d\n",count);
    return 0;
}
