#include<stdio.h>
int main()

{
    int a,b,c,i,n;
    double s,area;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d %d %d",&a,&b,&c);
        s=(a+b+c)/(double)2;
        area=sqrt(s*(s-a)*(s-b)*(s-c));
        printf("Case %d: %.10lf\n",i,area);
    }
    return 0;

}
