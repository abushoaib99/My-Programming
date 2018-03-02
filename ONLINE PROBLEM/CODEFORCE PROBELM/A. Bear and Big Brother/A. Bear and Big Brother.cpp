#include<bits/stdc++.h>
int main()
{
    int a,b,c=1;
    scanf("%d%d",&a,&b);
    while(1)
    {
        a*=3,b*=2;
        if(a>b)
            break;
        c++;
    }
    printf("%d\n",c);
    return 0;
}
