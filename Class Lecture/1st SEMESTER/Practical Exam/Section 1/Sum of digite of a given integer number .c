#include<stdio.h>
int main()

{
    int n,s=0,k,c,temp,temp1;
    printf("\nEnter the integer number: ");
    scanf("%d",&n);
    temp=n,temp1=n,c=0;
    while(n>0){
        c++;
        n=n/10;
    }
    while (temp != 0) {
      k = temp%10;
      s = s + pow(k, c);
      temp = temp/10;
   }
   if(temp1==s)
    printf("\n%d is armstrong number\n",s);
    else
        printf("\n%d is not armstrong number\n",s);

    return 0;
}
