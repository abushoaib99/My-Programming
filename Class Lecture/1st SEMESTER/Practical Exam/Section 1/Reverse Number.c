#include<stdio.h>
int main()

{
    int n,m;
    printf("Enter number: ");
    scanf("%d%d",&n,&m);
    int a[50],a1[50];
    int i=0;
    int j=0;
    int c=0;
    if(n>=m)
    {
        while(n>0){
        a[i++]=n%10;
        a1[j++]=m%10;
//        printf("%d",n%10);
//        printf("%d",m%10);
        n=n/10;
        m=m/10;
        c++;
    }
    }
    else
    {
        while(m>0){
       a[i++]=n%10;
        a1[j++]=m%10;
        n=n/10;
        m=m/10;
        c++;
    }
    }
    printf("%d\n",c);
    for(i=c-1;i>=0;i--)
        printf("%d",a[i]);
        printf("\n");
    for(i=c-1;i>=0;i--)
        printf("%d",a1[i]);

    return 0;
}
