#include<stdio.h>
int binary_search(int data[],int s,int l,int h)
{
    int m;
    if(l>h)
        return -1;
    m=(l+h)/2;
    if(s==data[m])
        return(m);
    else if(s<data[m])
        binary_search(data,s,l,m-1);
    else
        binary_search(data,s,m+1,h);
}

int main()
{
    int n,s,i,l,h,p;
    printf("Enter the size of an array : ");
    scanf("%d",&n);
    int data[n];
    printf("Enter the sorted elements of the array : \n");
    for(i=0;i<n;i++)
        scanf("%d",&data[i]);
    printf("Enter the number to be search : ");
    scanf("%d",&s);
    p=binary_search(data,s,0,n-1);
    if(p==-1)
        printf("\n%d is not present in the list.\n",s);
    else
        printf("\n%d present at position %d.\n",s,(p+1));
    return 0;
}
