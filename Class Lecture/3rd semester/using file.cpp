#include <stdio.h>
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n,m;
    while(~scanf("%d %d",&n,&m)){
        long long ans;
        ans =(long long)n*m;
        printf("%lld\n",ans);
    }
    return 0;
}

