#include<stdio.h>
int main()

{
    int test,n[100],avg,i,sum=0,count=1,count1=0;
    while(scanf("%d",&test)!=EOF)
    {
        if(test==0)
            break;
        sum=0;
        count1=0;
        for(i=0; i<test; i++)
        {
            scanf("%d",&n[i]);
            sum=sum+n[i];
            avg=sum/test;
        }
        for(i=0; i<test; i++)
        {
            if(n[i]>avg)
                count1=count1+(n[i]-avg);
        }
        printf("Set #%d\nThe minimum number of moves is %d.\n\n",count++,count1);
    }
    return 0;
}
