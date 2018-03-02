#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    if(a==1 && b==10)
    {
        printf("-1\n");
    }
    else if(a==1)
    {
        printf("%d\n",b);
    }
    else
    {
        for(int i=1;i<a;i++)
        {
            if(i==1 && b==10)
            {
                printf("1");
            }
            if(i==1 && b!=10)
            {
                printf("%d",b);
            }
            printf("0");
        }
        printf("\n");
    }
    return 0;

}
