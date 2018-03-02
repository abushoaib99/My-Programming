#include<bits/stdc++.h>
void marge(int a[],int low,int mid,int high);
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
void marge(int a[],int low,int mid,int high)
{
    int h=low,i=low,j=mid+1,b[100];
    while(h<=mid && j<=high)
    {
        if(a[h]<=a[j])
        {
            b[i]=a[h];
            h++;
        }
        else
        {
            b[i]=a[j];
            j++;
        }
        i++;
    }
    if(h>mid)
    {
        for(int k=j;k<=high;k++)
        {
            b[i]=a[k];
            i++;
        }
    }
    else
    {
        for(int k=h;k<=mid;k++)
        {
            b[i]=a[k];
            i++;
        }
    }
    for(int k=low;k<=high;k++)
    {
        a[k]=b[k];
    }
}
int main()
{
    int s;
    printf("Enter the size of array: ");
    scanf("%d",&s);
    int a[100];
    printf("\nEnter the element of array: ");
    for(int i=0;i<s;i++)
    {
        scanf("%d",&a[i]);
    }
    margesort(a,0,s-1);
    printf("\nSorted element are:");
    for(int i=0;i<s;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
