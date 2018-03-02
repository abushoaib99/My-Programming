#include<stdio.h>
int main()

{
    int n,a,b,x,i;;
    scanf("%d",&n);
    for(i=0;i<n;i++){
    scanf("%d %d",&a,&b);
    if(a<b)
        x=a;

    else if(a>b)
        x=b;

    for(;x>=1;x--){
        if(a%x==0 && b%x==0)
        break;
    }
        printf("%d\n",x);
    }

    return 0;
}
