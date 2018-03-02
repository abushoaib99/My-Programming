#include<bits/stdc++.h>
int main()
{
    unsigned long long a,b;
    while(scanf("%llu%llu",&a,&b) && (a!=0 || b!=0))
    {
    int arr[15],arr1[15];
    int i=0,j=0;
    int c=0;
    while(a || b)
    {
    arr[i++]=a%10;
    a/=10;
    arr1[j++]=b%10;
    b/=10;
    c++;
    }
    int c1=0;
    for(i=0;i<c;i++)
    {
        if(arr[i]+arr1[i]>=10)
        {
            arr[i+1]+=1;
            c1++;
        }

    }
    c1==0 ? printf("No carry operation.\n") : c1==1 ? printf("%d carry operation.\n",c1) : printf("%d carry operations.\n",c1);
    }

    return 0;
}
