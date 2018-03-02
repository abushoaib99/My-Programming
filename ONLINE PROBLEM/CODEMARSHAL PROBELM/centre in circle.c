#include<stdio.h>
#include<math.h>

int main()
{
    int n, x, r, y, h, k, i, a;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
    scanf("%d %d %d %d %d",&h ,&k ,&r ,&x ,&y);
    a=sqrt(pow(x-h,2)+pow(y-k,2));
    if (a<r)
        printf("Case %d: yes\n",i);
    else
        printf("Case %d: no\n",i);
    }
    return 0;
}
