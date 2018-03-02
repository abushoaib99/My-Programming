#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b;
    scanf("%d",&n);
    scanf("%d",&a);

    set<int>s;
    while(a--)
    {
        int x;
        scanf("%d",&x);
        s.insert(x);
    }
    scanf("%d",&b);
    while(b--)
    {
        int x;
        scanf("%d",&x);
        s.insert(x);
    }
    s.size()==n ? printf("I become the guy.\n") : printf("Oh, my keyboard!\n");
    return 0;
}
