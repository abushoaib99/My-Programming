#include<stdio.h>
int main()

{
    int a=-1,b=1,s=0,i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        s=a+b;
        printf("%3d",s);
        a=b;
        b=s;
    }
    return 0;
}
