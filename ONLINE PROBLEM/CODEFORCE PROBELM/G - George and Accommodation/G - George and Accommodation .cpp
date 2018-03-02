#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0;
    scanf("%d",&n);
    while(n--)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        if((b-a)>=2)
        {
            c++;
        }

    }
    printf("%d\n",c);
    return 0;
}
