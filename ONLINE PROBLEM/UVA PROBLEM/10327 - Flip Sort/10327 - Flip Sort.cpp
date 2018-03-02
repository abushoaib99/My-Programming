#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c;
    int a[1009];
    while(scanf("%d",&n)==1)
    {
        for(int i=0; i<n; i++)
            scanf("%d",a+i);
        c=0;
        for(int i=0; i<n-1; i++)
        {
            for(int j=0; j<n-i-1; j++)
            {
                if(a[j]>a[j+1])
                {
                    swap(a[j],a[j+1]);
                    ++c;
                }
            }

        }
        printf("Minimum exchange operations : %d\n",c);
    }
    return 0;

}
