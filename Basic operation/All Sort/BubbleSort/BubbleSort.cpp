#include<bits/stdc++.h>
using namespace std;
void bubblesort(int a[],int n)
{
    int temp;
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-i-1; j++)
            if(a[j]>a[j+1])
                swap(a[j],a[j+1]);
    }
}

int main()
{
    int n;
    time_t start,endd,start1,endd1;
    printf("\nEnter size of the array: ");
    scanf("%d",&n);
    int x[n];

    printf("\nEnter %d elements: ",n);
    for(int i=0; i<n; i++)
        scanf("%d",x+i);

    printf("\nUnsorted element are: ");
    for(int i=0; i<n; i++)
        printf("%d ",x[i]);

    bubblesort(x,n);

    printf("\n\n\nSorted elements of bubblesort: ");

    for(int i=0; i<n; i++)
        printf(" %d",x[i]);
    return 0;
}

