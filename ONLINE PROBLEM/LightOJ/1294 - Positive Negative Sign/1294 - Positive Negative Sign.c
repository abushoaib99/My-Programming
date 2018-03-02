#include<stdio.h>
int main()

{
    int n,i;
    scanf("%d",&n);
    i=1;
    while(n--){
        long long int a,b;
        scanf("%lld %lld",&a,&b);
        printf("Case %d: %lld\n",i++,(a*b)/2);
    }
    return 0;
}
