#include<stdio.h>
int main()

{
    int a,b,c,n,i,sum=0;

    scanf("%d",&n);
    for(i=0;i<n;i++){
            if(n>100)
            break;
            sum=sum+1;
    printf("case %d\n",sum);
    scanf("%d %d %d",&a,&b,&c);
    if(a>200 || b>200 || c>200)
        break;

    if(a>b && a>c)
        printf("case %d: %d\n\n",sum,a);
    else if(b>a && b>c)
        printf("%d\n\n",b);
    else if(c>a && c>b)
        printf("case %d: %d\n\n",sum,c);
        else if(a==b && a==c && b==c)
            printf("case %d: %d\n\n",sum,a);
            else if(a==b && a>c)
                printf("case %d: %d\n\n",sum,a);
                else if(a==b && a<c)
                printf("case %d: %d\n\n",sum,c);
            else if(b==c && a>b)
                printf("case %d: %d\n\n",sum,a);
            else if(b==c && a<b)
                printf("case %d: %d\n\n",sum,b);
                    else if(a==c && b>c)
                    printf("case %d: %d\n\n",sum,b);
                    else if(a==c && b<c)
                    printf("case %d: %d\n\n",sum,c);

        }
        return 0;
}
