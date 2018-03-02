#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int a[n],i,mini;
    printf("\nEnter element of array: ");
    for(i=0;i<n;i++){
        scanf("%d",a+i);
    }
    for(i=0;i<n-1;i++){
        mini=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[mini])
                mini=j;
        }
        if(mini!=i)
            swap(a[i],a[mini]);

    }
    printf("\n\nAfter sorted:\n\n");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}
