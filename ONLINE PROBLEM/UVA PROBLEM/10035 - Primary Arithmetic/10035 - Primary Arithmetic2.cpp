#include<bits/stdc++.h>
int main()
{
    unsigned long long a,b;
    while(scanf("%llu%llu",&a,&b) && (a+b))
    {
        int c=0,c1=0,x,y,r;
        while(a || b)
        {
            x=a%10;
            a/=10;
            y=b%10;
            b/=10;
            r=x+y+c;
            if(r>=10)
            {
                c=1;
                c1++;
            }
            else
                c=0;
        }
        c1==0 ? printf("No carry operation.\n") : c1==1 ? printf("%d carry operation.\n",c1) : printf("%d carry operations.\n",c1);
    }

    return 0;
}

