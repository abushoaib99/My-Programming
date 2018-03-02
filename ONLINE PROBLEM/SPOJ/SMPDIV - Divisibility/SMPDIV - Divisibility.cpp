#include<bits/stdc++.h>
int main()
{
    int t,n,x,y,m;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d%d",&n,&x,&y);
        for(int i=x,j=1;i<n;j++,i=j*x)
        {
            if(i%y!=0)
            {
                printf("%d",i);
                if(i<n-1)
                    printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
