#include<bits/stdc++.h>
int main(){

    long long n,x,r=0;
    scanf("%lld",&n);
    for(int i=0;i<n;i++){
        scanf("%lld",&x);
        r^=x;
    }
    printf("%lld\n",r);
    return 0;
}
