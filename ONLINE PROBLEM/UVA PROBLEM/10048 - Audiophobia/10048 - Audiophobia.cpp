#include <bits/stdc++.h>
using namespace std;
#define INF 999999999

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output1.txt","w",stdout);
    int a,b,c,Case=1;
    int arr[100][100];
    while(scanf("%d %d %d",&a,&b,&c)&&(a||b||c))
    {
        for(int i=1;i<=a;++i){
            for(int j=1;j<=a;++j){
                arr[i][j]=arr[j][i]=INF;
                }
                arr[i][i]=0;
            }
        int x,y,z;

        for(int i=0;i<b;++i){
            scanf("%d %d %d",&x,&y,&z);
            arr[x][y]=arr[y][x]=z;
        }

        for(int i=1;i<=a;++i){
            for(int j=1;j<=a;++j){
                for(int k=1;k<=a;++k){
                    arr[j][k]=min(arr[j][k],max(arr[j][i],arr[i][k]));
                }
            }
        }

        if (Case!=1)
            printf("\n");

        printf("Case #%d\n",Case++);
        for(int i=0;i<c;++i){
            scanf("%d %d",&x,&y);
            if(arr[x][y]==INF)
                puts("no path");
            else
                printf("%d\n",arr[x][y]);
        }
    }
    return 0;
}
