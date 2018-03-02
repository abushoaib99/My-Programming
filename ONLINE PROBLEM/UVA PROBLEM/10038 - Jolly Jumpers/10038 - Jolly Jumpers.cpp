#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[3005],arr1[3005];
    int n;
    while(cin>>n)
    {
        for(int i=0;i<n;i++)
            scanf("%d",&arr[i]);
        for(int i=1,j=1;i<n;i++,j++)
            arr1[j]=abs(arr[i]-arr[i-1]);

        sort(arr1+1,arr1+n);
        bool b=true;
        for(int i=1;i<n;i++)
        {
            if(arr1[i]!=i)
            {
                b=false;
                break;
            }
        }
        b==true ? printf("Jolly\n") : printf("Not jolly\n");
    }
    return 0;
}
