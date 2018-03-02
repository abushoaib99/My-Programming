#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[3];
    scanf("%d%d%d",&arr[0],&arr[1],&arr[2]);
    sort(arr,arr+3);
    printf("%d %d %d\n",arr[2],arr[1],arr[0]);
    return 0;
}
