#include<stdio.h>
int main()

{
    long long a,b;
    int test,i;
    char c;
    scanf("%d",&test);
    for(i=1;i<=test;i++){
        scanf("%lld\n%lld\n %c",&a,&b,&c);
        if(c=='+')
            printf("Case %d: %lld\n",i,a+b);
        else if(c=='-')
            printf("Case %d: %lld\n",i,a-b);
        else if(c=='%')
            printf("Case %d: %lld\n",i,a%b);
        else if(b==0 && c=='%')
            break;
        else if(c=='/')
            printf("Case %d: %lld\n",i,a/b);
        else if(b==0 && c=='/')
            break;
        else if(c=='*')
            printf("Case %d: %lld\n",i,a*b);
    }
    return 0;
}
