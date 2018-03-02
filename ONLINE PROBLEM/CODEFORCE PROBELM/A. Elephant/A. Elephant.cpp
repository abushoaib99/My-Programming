#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    scanf("%d",&x);
    x=abs(x);
    if(x%5==0)
    {
        printf("%d\n",x/5);
    }
    else if(x%5!=0)
    {
        printf("%d\n",x/5+1);
    }
    return 0;
}
