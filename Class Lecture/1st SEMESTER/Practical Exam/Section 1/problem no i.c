#include<stdio.h>
int reverse(int a)

{
    int r=0;
    while(a>0){
        r=r*10+a%10;
        a=a/10;
    }
    return r;
}

int main()
{
    int a,reverse_num;
    scanf("%d",&a);
    printf("\n");
    reverse_num=reverse(a);
    while(reverse_num>0){
        printf("%d\n",reverse(reverse_num));
        reverse_num=reverse_num/10;
    }
    return 0;
}
