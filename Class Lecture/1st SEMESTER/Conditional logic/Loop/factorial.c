#include<stdio.h>
int main()

{
    int i,n,s=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        s=s*i;
    }
    printf("\n%d",s);
    return 0;
}
