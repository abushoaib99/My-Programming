#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a);
        while(1)
        {
            if(a%2==0)
                a/=2;
            else if(a%3==0)
                a/=3;
            else
            {
                arr[i]=a;
                break;
            }
        }
    }
    bool flag=true;
    for(int i=1; i<n; i++)
    {
        if(arr[0]!=arr[i])
        {
            flag=false;
            break;
        }
    }
    flag ? puts("YES"):puts("NO");
    return 0;
}
