#include<stdio.h>
bsearch(int b[], int s)
{
    int i,srch,l;
    int mid,loc=0,h;
    printf("\nEnter your search item: ");
    scanf("%d",&srch);
    l=0;
    h=s-1;
    while(l<=h&&loc==0)
    {
        mid=(l+h)/2;
        if(srch==b[mid])
            loc=mid+1;
        else if(srch<b[mid])
            h=mid-1;
        else
            l=mid+1;
    }
    if(loc==0)
        printf("\nItem not found\n");
    else
    printf("\nYour item %d is located at position %d\n",srch,loc);
}
int main()
{
    int i,n;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter your elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    bsearch(a,n);
    return 0;
}
