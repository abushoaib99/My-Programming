#include <bits/stdc++.h>
using namespace std;
#define INF 9999999
int a,b;
int path[100][100];
void printPath(int x,int y)
{
    if(path[x][y]==y)
        return;
    printPath(x,path[x][y]);
    printf("%d --> ",path[x][y]);
}
int main()
{
    freopen("input.txt","r",stdin);
    int arr[100][100];
    scanf("%d%d",&a,&b);
    for(int i=1; i<=a; ++i)
    {
        for(int j=1; j<=a; ++j)
        {
            arr[i][j]=INF;
        }
        arr[i][i]=0;
    }
    int x,y,z;
    for(int i=1; i<=b; ++i)
    {
        scanf("%d%d%d",&x,&y,&z);
        arr[x][y]=z;
    }
    for(int i=1; i<=a; ++i)
    {
        for(int j=1; j<=a; ++j)
        {
            if(arr[i][j]!=INF)
                path[i][j]=i;
            else
                path[i][j]=-1;
        }
    }
    printf("\n\nMatrix 0\n--------\n");
    for(int i=1; i<=a; i++)
    {
        for(int j=1; j<=a; j++)
        {
            if(arr[i][j]==INF)
                printf("%5s","INF");
            else
                printf("%5d",arr[i][j]);
        }
        printf("\n");
    }
    for(int k=1; k<=a; ++k)
    {
        printf("\nMatrix %d\n--------\n",k);
        for(int i=1; i<=a; ++i)
        {
            for(int j=1; j<=a; ++j)
            {
                if(arr[i][j]>arr[i][k]+arr[k][j])
                {
                    arr[i][j]=arr[i][k]+arr[k][j];
                    path[i][j]=path[k][j];
                }
                if(arr[i][j]==INF)
                    printf("%5s","INF");
                else
                    printf("%5d",arr[i][j]);
            }
            printf("\n");
        }
    }
//    printf("\nEnter the source and destination for visit every path from source to destination\n");
//    while(scanf("%d%d",&x,&y) && (x!=0 || y!=0))
//    {
//        printPath(x,y);
//        printf("%d\n",y);
//    }
    return 0;
}
