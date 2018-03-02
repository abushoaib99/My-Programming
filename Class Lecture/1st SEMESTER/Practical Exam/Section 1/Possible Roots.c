#include<stdio.h>
#include<math.h>
int main()

{
    int a,b,c;
    float d,x,x1,x2,y;
    printf("Enter value of a, b and c: ");
    scanf("%f %f %f",&a,&b,&c);
    d=(b*b)-(4*a*c);
    x=-b/(float)(2*a);
    if(d==0)
        printf("\n%.2f is a unique equation\n",x);
    else if(d>0){
        x1=(-b+sqrt(d))/(float)(2*a);
        x2=(-b-sqrt(d))/(float)(2*a);
        printf("\nx1 = %.2f\nx2 = %.2f\n",x1,x2);
    }
    else{
        printf("\nROOTS ARE IMAGINARY\n");
        d=d*(-1);
        y=sqrt(d)/(float)(2*a);
        printf("\nx1 = %.2f + i %.2f\n",x,y);
        printf("\nx2 = %.2f - i %.2f\n",x,y);
    }
    return 0;
}
