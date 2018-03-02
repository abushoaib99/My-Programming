#include<bits/stdc++.h>
using namespace std;
int Inttobinary(int n)
{
    if(n==0 || n==1)
        return n;
    else
        return (n%2)+10*Inttobinary(n/2);
}
int main()
{
    int n;
    scanf("%d",&n);
    n=Inttobinary(n);
    cout<<n<<endl;
}
