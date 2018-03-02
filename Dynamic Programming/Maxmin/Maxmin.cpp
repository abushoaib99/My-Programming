#include<bits/stdc++.h>
using namespace std;
void maxmin(int a[],int l,int h,int &maxi,int &mini)
{
    int maxi1,mini1,mid;
    if(l==h)
    {
        maxi=a[h];
        mini=a[l];
    }
    else if(h==l+1)
    {
        if(a[l]<a[h])
        {
            maxi=a[h];
            mini=a[l];
        }
        else
        {
            maxi=a[l];
            mini=a[h];
        }

    }
    else
    {
        int  mid;
        mid=(l+h)/2;
        maxmin(a,l,mid,maxi,mini);
        maxmin(a,mid+1,h,maxi1,mini1);
        if(mini>mini1)
            mini=mini1;
        if(maxi<maxi1)
            maxi=maxi1;
    }
}
int main()
{
    int  n;
    printf("\nEnter the size of array: ");
    scanf("%d",&n);
    int  a[n+10];
    printf("\nEnter the element of arry: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",a+i);
    }
    int maxi,mini;
    maxmin(a,0,n-1,maxi,mini);
    printf("\nMax value = %d\nMin value = %d\n",maxi,mini);
    return 0;
}
