#include<bits/stdc++.h>
int main()
{
    //freopen("input.txt","r",stdin);
    int n,m;
    scanf("%d",&n);
    m=n/2;
    printf("%d\n",n/2);
    if(n%2==0)
    {
        while(m--)
        {
            printf("2 ");
        }
    }
    else
    {
        while(m--)
        {
            if(m!=0)
            {
                printf("2 ");
            }
            else
                printf("3 ");
        }
    }
    return 0;
}
