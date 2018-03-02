#include<bits/stdc++.h>
int main()
{
    int a,b,t,x;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d:%d",&a,&b);
        x=60-b;
        if(b==0)
        {
            a==12?printf("12:00\n"):printf("%02d:00\n",12-a);
        }
        else if(a==12 && b!=0)
            printf("11:%02d\n",60-b);
        else
        {
            a=11-a;
            if(a==0)
                a=12;
            b==0?printf("%02d:00\n",a):printf("%02d:%02d\n",a,60-b);
        }
    }
    return 0;
}
