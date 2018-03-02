#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int a[n],j;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=1;i<n;i++){
        j=i;
        while(j>0 && a[j]<a[j-1]){
            swap(a[j],a[j-1]);
            j--;
        }
    }
    printf("\nAfter sorting\n");
    for(int i=0;i<n;i++){
        printf("%3d",a[i]);
    }
}
