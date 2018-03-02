#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k;
    cin>>n>>k;
    if(n==k)
        printf("YES\n");
    else if((n/k)%2!=0 &&n%k!=0 )
        printf("YES\n");
    else if((n/k)%2==1)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
