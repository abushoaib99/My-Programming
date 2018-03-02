#include<stdio.h>
int main()

{
    int customer,units;
    float charge;
    printf("Enter Customer No. and Units consumed: ");
    scanf("%d %d",&customer,&units);
    if(units>=0 && units<=200){
        charge=0.5*units;
    }
    else if(units>=201 && units<=400){
        charge=100+(0.5*units);
    }
    else if(units>=401 && units<=600){
        charge=230+(0.80*units);
    }
    else if(units>601){
        charge=390+(1.00+units);
    }
    printf("\n\nCustomer No: %d\n\nCharge = %f\n",customer,charge);
    return 0;
}
