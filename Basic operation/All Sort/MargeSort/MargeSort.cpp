#include<bits/stdc++.h>
using namespace std;
void marge(int a[],int low,int mid,int high)
{
    int i=low,k=low,j=mid+1,temp[100];
    while((i<=mid) && (j<=high))
    {
        if(a[i]<=a[j]){
            temp[k++]=a[i++];
        }
        else{
            temp[k++]=a[j++];
        }
    }
    while(i<=mid){
        temp[k++]=a[i++];
    }
    while(j<=high){
        temp[k++]=a[j++];
    }
    for(int k=low;k<=high;k++){
        a[k]=temp[k];
    }
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

