#include<stdio.h>
int main()

{
    int a,b,c;
    float d,x,x1,x2,x3,x4;
    printf("Enter the value of a,b and c: ");
    scanf("%d %d %d",&a,&b,&c);
    d=(b*b)-(4*a*c);
    x=-b/(float)(2*a);
    if(d==0){
        printf("UNIQUE SOLUATION \nx=%0.2f\n",x);
    }
    else if(d>0){
        x1=(-b+sqrt(d))/(float)(2*a);
        x2=(-b-sqrt(d))/(float)(2*a);
        printf("\nx=%0.2f \nx=%0.2f\n",x1,x2);
    }
    else{
        printf("\nROOTS ARE IMAGINARY\n");
        d=d*(-1);
        x3=(-b+sqrt(d))/(float)(2*a);
        x4=(-b-sqrt(d))/(float)(2*a);
        printf("\nx=%0.2f \nx=i %0.2f\n",x3,x4);
    }
    return 0;
}
