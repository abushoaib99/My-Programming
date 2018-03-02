#include<stdio.h>
int main()

{
    int a,b,c;
    float x,y,x1,x2,d;
    d=(b*b)-(4*a*c);
    x=-b/(2*a);
    if(d==0){
    printf("\n%d Unique equation",x);
    }
    else if(d>0){
    x1=-b+sqrt(b*b-4*a*c)/(2*a);
    x2=-b-sqrt(b*b-4*a*c)/(2*a);
    printf("%f %f",x1,x2);
    }
    return 0;
}

