#include<bits/stdc++.h>
using namespace std;
void marge(int a[],int low,int mid,int high)
{
    int h=low,i=low,j=mid+1,b[100];
    while(h<=mid && j<=high)
    {
        if(a[h]<=a[j])
            b[i++]=a[h++];
        else
            b[i++]=a[j++];
    }
    if(h>mid)
    {
        for(int k=j;k<=high;k++)
            b[i++]=a[k];
    }
    else
    {
        for(int k=h;k<=mid;k++)
            b[i++]=a[k];
    }
    for(int k=low;k<=high;k++)
        a[k]=b[k];
}

void margesort(int a[],int low,int high)
{

    int mid;
    if(low<high)
    {
        mid=(low+high)/2;
        margesort(a,low,mid);
        margesort(a,mid+1,high);
        marge(a,low,mid,high);
    }

}

int main()
{
    int n;
    printf("\nEnter size of the array: ");
    scanf("%d",&n);
    int x[n];
    printf("\nEnter %d elements: ",n);

    for(int i=0;i<n;i++)
        scanf("%d",x+i);

    printf("\nUnsorted element are: ");

    for(int i=0;i<n;i++)
        printf("%d ",x[i]);

    margesort(x,0,n-1);
    printf("\n\nSorted elements of margesort: ");

    for(int i=0;i<n;i++)
        printf("%d ",x[i]);
    printf("\n");
    return 0;
}

