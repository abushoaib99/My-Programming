#include<bits/stdc++.h>
using namespace std;
int Partition(int A[],int p,int r)
{
    int x,i,j,tmp;
    x = A[r];
    i = p-1;
    for(j=p; j<r; j++)
    {
        if(A[j]<x)
            swap(A[++i],A[j]);
    }
    swap(A[++i],A[r]);
    return i;
}
void QuickSort(int A[],int p,int r)
{
    if(p<r)
    {
        int q=Partition(A,p,r);
        QuickSort(A,p,q-1);
        QuickSort(A,q+1,r);
    }
}
int main()
{
    int n,i;
    printf("Enter Your Array Size: ");
    scanf("%d",&n);
    int A[n];
    printf("\nEnter your Array element:\n");
    for(i=0; i<n; i++)
    {
        scanf("%d",A+i);
    }
    QuickSort(A,0,n-1);
    printf("\nYour Sorted Array:\n\n");
    for(i=0; i<n; i++)
        printf("%d ",A[i]);
    puts("");
    return 0;
}
