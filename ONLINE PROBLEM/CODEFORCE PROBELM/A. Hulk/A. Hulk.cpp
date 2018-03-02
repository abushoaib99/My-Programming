#include<bits/stdc++.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(i==n && i%2!=0)
            printf("I hate it\n");
        else if(i==n && i%2==0)
            printf("I love it\n");
        else if(i%2!=0 && i!=n)
            printf("I hate that ");
        else if(i%2==0 && i!=n)
            printf("I love that ");
    }
    return 0;
}
