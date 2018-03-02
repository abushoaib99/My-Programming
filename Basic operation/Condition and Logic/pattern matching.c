#include<stdio.h>
int main()
{
    int k,max,s,r,i,index;
    char t[50],p[10];
    gets(t);
    gets(p);
    s=strlen(t);
    r=strlen(p);
    k=1,max=s-r+1;
    while(k<=max){
        for(i=0;i<r;i++){
            if(p[i]!=t[k+i-1])
               k++;
        }
        index=k;
        printf("%d",index);
        exit(0);
        k++;

    }
    index=0;
    printf("%d",index);
}
