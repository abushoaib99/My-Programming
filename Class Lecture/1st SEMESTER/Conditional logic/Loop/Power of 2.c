#include<stdio.h>
int main()

{
    int p,n;
    float q;
    printf(" ___________________________________________\n");
    printf("  2 to power n      n       2 to power -n\n");
    printf(" ___________________________________________\n");
    p=1;
    for(n=0;n<21;n++){
        if(n==0)
            p=1;
        else
            p=p*2;
        q=1/(float)p;
        printf("%10d %10d %20.12f\n",p,n,q);
    }
    printf(" ____________________________________________\n");
}
