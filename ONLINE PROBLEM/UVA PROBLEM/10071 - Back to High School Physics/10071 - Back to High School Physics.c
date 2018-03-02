#include<stdio.h>
int main()

{
    float t,v;
    while(scanf("%f %f",&t,&v)!=EOF){
        printf("%.0f\n",2*v*t);
    }
    return 0;
}
