#include<stdio.h>
int main()
{
    long long n,m,a,b,c,sum=0;
    while(scanf("%lld",&n)!=EOF){
        while(n--){
        scanf("%lld",&m);
        sum=0;
        while(m--){
            scanf("%lld %lld %lld",&a,&b,&c);
            sum=sum+(a*c);
        }
        printf("%lld\n",sum);
    }
    }
    return 0;
}
