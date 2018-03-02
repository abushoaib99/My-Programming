
#include<stdio.h>
int main(){

//    2 = 3
//    3 = 4

    //freopen("input.txt","r",stdin);
    int arra[20];
    int freq[20]={0};
    int i,n,sum;
    int x;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    scanf("%d",&arra[i]);
    x=arra[i];
    freq[x]++;
    }
    sum=0;
    for(int i=0;i<n;++i)
    {
        if(freq[i]!=1)
        sum+=freq[i];
        //printf("%d=%d\n",i,freq[i]);
    }
    printf("%d\n",sum);
    return 0;
}

