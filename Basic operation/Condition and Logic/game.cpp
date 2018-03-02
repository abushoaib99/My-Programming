#include<bits/stdc++.h>
using namespace std;
int solve(int n)
{
    if(n==0 || n==1)
        return 0;
    if(solve(n-2)==0 || solve(n-3)==0 || solve(n-5)==0)
        return 1;
    return 0;
}
int main()
{
    int n=15;
    if(solve(n))
        cout<<"WIN\n";
    else
        cout<<"LOSS\n";
    return 0;
}

