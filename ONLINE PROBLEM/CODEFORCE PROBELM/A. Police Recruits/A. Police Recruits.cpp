#include<bits/stdc++.h>
int main()
{
    int n,a,sum=0,sum1=0;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&a);
        if(a>0)
        {
            sum=sum+a;
        }
        else
        {
            sum1=sum1+a;
            if(sum>0)
            {
                sum=sum+a;
                sum1=sum1+1;
            }

        }
    }
    abs(sum1)==0 ? printf("0\n") : printf("%d\n",abs(sum1));
    return 0;
}
