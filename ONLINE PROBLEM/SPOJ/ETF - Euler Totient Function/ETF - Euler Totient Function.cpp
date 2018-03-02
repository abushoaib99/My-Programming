#include<bits/stdc++.h>
int main()
{
    int t,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        int result = n;
        for(int i = 2; i * i <= n; ++i)
            if(n % i == 0)
            {
                while(n % i == 0)
                    n /= i;
                result -= result / i;
            }
        if(n > 1)
            result -= result / n;
        printf("%d\n",result);
    }

    return 0;
}

