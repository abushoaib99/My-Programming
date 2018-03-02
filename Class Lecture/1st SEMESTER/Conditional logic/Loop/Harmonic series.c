#include<stdio.h>
int main()

{
    float i,n;
    float s=0;
    printf("\nEnter Limit: ");
    scanf("%f",&n);
    for(i=1;i<n;i++){
        s=s+1/(float)(i);
    }
    printf("\nSummation of Harmonic series %f\n",s);
    return 0;

}
