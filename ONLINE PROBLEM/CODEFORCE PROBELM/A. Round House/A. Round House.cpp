#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int x=abs(c);
    if(a==x || x%a==0)
            printf("%d\n",b);

    else if(x>a)
    {
    int c1,c2;
    c1=x%a;
        if(c<0)
        {
            int s1=b-c1;
            if(s1==0)
            {
                printf("%d\n",a);
            }
            else if(s1<0)
            {
                printf("%d\n",abs(a-abs(s1)));
            }
            else if(s1>0)
            {
                printf("%d\n",s1);
            }
        }
        else if(c>0)
        {
            int s2=b+c1;
            if(s2>a)
            {
                printf("%d\n",s2-a);
            }
            else if(s2<=a)
            {
                printf("%d\n",s2);
            }
        }
    }

        else if(x<=a)
        {
        if(b+c<=0)
        {
            int s3=abs(b+c);
            printf("%d\n",abs(a-s3));
        }
        else if(b+c>0)
        {
            int s;
            s=b+c;
            if(s>=a)
            {
                s=s-a;
                if(s==0)
                {
                    printf("%d\n",a);
                }
                else if(s>0)
                {
                    printf("%d\n",abs(s));
                }
                else if(s<0)
                {
                    printf("%d\n",abs(b+c));
                }
            }
            else if(s<a)
            {
                printf("%d\n",abs(b+c));
            }
        }
    }
    return 0;

}
