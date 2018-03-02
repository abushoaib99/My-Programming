#include<stdio.h>
int main()

{
    float n,i,s=0;
    printf("Enter number: ");
    scanf("%f",&n);
    for(i=1;i<=n;i++){
        s=s+1/pow(i,i);
    }
    printf("\nHarmonic Series = %f\n",s);
    getchar();
    getchar();
    return 0;
}
