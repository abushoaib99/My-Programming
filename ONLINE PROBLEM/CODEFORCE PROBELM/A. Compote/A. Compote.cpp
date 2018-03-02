#include<bits/stdc++.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);

    if(b<2 || c<4)
    {
        printf("0\n");
    }
    else
    {
        if(a==b && a==c)
        {
            if(a%4==0)
            {
                a=c/4;
            }
            else if(a%4!=0)
            {
                c=c-(c%4);
                a=c/4;
            }
        }
        else if(a>=b && b<c && a==c)
        {
            a=b/2;
        }
        else if(a*2>=b && a*4<=c && a<b && a<c)
        {
            a=b/2;
        }
        else if((a*2>=b && a*4>=c) && a<b && a<c)
        {
            if(a%4==0)
            {
                a=c/4;
            }
            else if(a%4!=0)
            {
                c=c-(c%4);
                a=c/4;
            }
        }
        else if((a*2>=b && a*4>c) && (a<b && a<c))
        {
            if(a%4==0)
            {
                a=c/4;
            }
            else if(a%4!=0)
            {
                c=c-(c%4);
                a=c/4;
            }
        }
        else if(a*2>=b && a<c && a<b)
        {
            a=b/2;
        }
        else if(a*2<=b && a*4>=c && a<b && a<c)
        {
            if(a%4==0)
            {
                a=c/4;
            }
            else if(a%4!=0)
            {
                c=c-(c%4);
                a=c/4;
            }
        }
        else if(a>=b && a>=c)
        {
            if(a%4==0)
            {
                a=c/4;
            }
            else if(a%4!=0)
            {
                c=c-(c%4);
                a=c/4;
            }
        }
        else if(a>=c)
        {
            if(a%4==0)
            {
                a=c/4;
            }
            else if(a%4!=0)
            {
                c=c-(c%4);
                a=c/4;
            }
        }
        else if(a>=b)
        {
            a=b/2;
        }

        int x;
        x=a+a*2+a*4;
        printf("%d\n",x);
    }
    return 0;
}
