#include<stdio.h>
int main()

{
    int test,m,i,j,k[1000],sum;
    scanf("%d",&test);
    for(i=1;i<=test;++i)
        {
        scanf("%d",&m);
        for(j=0;j<m;++j){
            scanf("%d",&k[j]);
        }
            if(k[1]-k[0]==k[2]-k[1])
                sum=k[0]+m*(k[1]-k[0]);
            else if(k[1]/k[0]==k[2]/k[1])
                sum=k[0]*pow((k[1]/k[0]),m);

        printf("%d\n",sum);
    }
    return 0;
}
